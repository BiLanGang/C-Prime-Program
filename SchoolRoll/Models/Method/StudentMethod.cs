using System;
using System.Collections.Generic;
using System.Linq;
using System.Data.SqlClient;
using System.Threading.Tasks;
using System.Reflection;

namespace SchoolRoll.Models
{
     public class StudentMethod
    {
      /// <summary>
      /// 获取一个学生信息
      /// </summary>
      /// <param name="no"></param>
      /// <returns></returns>
        public Student FindStudent(string no)
        {
            var student = new Student();
            using (var dbcontext = new srContext())
            {
                student = dbcontext.Student.FirstOrDefault(u => u.Sno == no);
            }
            var schoolroll = new Schoolroll();
            var function = new SchoolrollMethod();
            schoolroll = function.GetRoll(no);
            student.Schoolroll = schoolroll;
            return student;
        }
        /// <summary>
        /// 获取所有学生信息
        /// </summary>
        /// <returns></returns>
         public List<Student> ReadDB()
        {
            List<Student> students = new List<Student>();
            var schoolroll = new Schoolroll();
            var function = new SchoolrollMethod();
            using (var dbcontext = new srContext())
            {
                foreach(var value in dbcontext.Student)
                {
                    schoolroll = function.GetRoll(value.Sno);
                    value.Schoolroll = schoolroll;
                        students.Add(value);
                }
            }
                return students;
        }
        /// <summary>
        /// 按学号删除学生
        /// </summary>
        /// <param name="value"></param>
        public void Delete(string value)
        {
            SchoolrollMethod roll = new SchoolrollMethod();            
            using (var dbcontext = new srContext())
            {
                var student=dbcontext.Student.FirstOrDefault(u => u.Sno == value);
                var schoolroll=dbcontext.Schoolroll.FirstOrDefault(u => u.Sno == value);
                var cerlist = new List<Certificate>();
                var cetlists = new List<Cet>();
                var scorelist = new List<Score>();
                foreach (var infor in dbcontext.Certificate)
                    if (infor.Sno == value)
                        cerlist.Add(infor);
                foreach (var infor in dbcontext.Cet)
                    if (infor.Sno == value)
                        cetlists.Add(infor);
                foreach (var infor in dbcontext.Score)
                    if (infor.Sno == value)
                        scorelist.Add(infor);
                if (cerlist != null)
                    foreach (var infor in cerlist)
                        dbcontext.Certificate.Remove(infor);
                if (cetlists != null)
                    foreach (var infor in cetlists)
                        dbcontext.Cet.Remove(infor);
                if (scorelist != null)
                    foreach (var infor in scorelist)
                        dbcontext.Score.Remove(infor);
                dbcontext.Schoolroll.Remove(schoolroll);
                dbcontext.Student.Remove(student);
                dbcontext.SaveChanges();
            }
        }
        /// <summary>
        /// 按学院统计学生
        /// </summary>
        /// <param name="xueyuan"></param>
        /// <returns></returns>
        public List<Student> Static(string xueyuan)
        {
            List<Student> students = new List<Student>();
            List<Student> stus = ReadDB();
            
                foreach (var infor in stus)
                {
                    if (infor.Schoolroll.Department == xueyuan)
                        students.Add(infor);
                }
            
            return students;
        }
        /// <summary>
        /// 获取所有学院信息
        /// </summary>
        /// <returns></returns>
        public List<string> Getdep()
        {
            List<Student> students = ReadDB();
            List<string> Deplist= new List<string>();            
                foreach(var infor in students)
                {
                    Deplist.Add(infor.Schoolroll.Department);                    
                }          
            HashSet<string> hs = new HashSet<string>(Deplist);
            Deplist = hs.ToList<string>();
            return Deplist;
        }
        /// <summary>
        /// 修改学生信息
        /// </summary>
        /// <param name="student"></param>
        public void  Change(Student student)
        {
            using (var dbcontext = new srContext())
            {
                var stu = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno);
                var sch = dbcontext.Schoolroll.FirstOrDefault(u => u.Sno == student.Sno);
                stu.Sphone = student.Sphone;
                stu.Saddress = student.Saddress;
                sch.Department = student.Schoolroll.Department;
                sch.Major = student.Schoolroll.Major;
                sch.Class = student.Schoolroll.Class;
                sch.Type = student.Schoolroll.Type;
                sch.Length = student.Schoolroll.Length;
                dbcontext.SaveChanges();
            }
            
        }
        /// <summary>
        /// 判断一个学生对象中是否含有空值属性
        /// </summary>
        /// <param name="student"></param>
        /// <returns></returns>
        public  static string Check(Student student)
        {
            Type type= student.GetType();
            PropertyInfo[] props = type.GetProperties();
            return (props.Where(prop => prop.GetValue(student) == null).Select(prop => $"Parameter{prop.Name} can not be empty.")).FirstOrDefault();
        }
        /// <summary>
        /// 增加一个学生
        /// </summary>
        /// <param name="student"></param>
        /// <returns></returns>
        public bool Addstudent(Student student)
        {
            var infor = student;
            infor.Spassword = "123456";
            infor.Schoolroll.School = "西安建筑科技大学";
            infor.Schoolroll.Sno = student.Sno;
            var str = Check(student);
            if (str == null)
            {
                using (var db = new srContext())
                {
                    if (db.Student.FirstOrDefault(u => u.Sno == infor.Sno) != null)
                        return false;
                    else
                    {
                        if (infor.Ssex == "男" || infor.Ssex == "女")
                        {
                            db.Student.Add(infor);
                            db.SaveChanges();
                            return true;
                        }
                        else
                            return false;
                    }
                       

                }
                   
            }
               
            else
                return false;
        }
    }
}
