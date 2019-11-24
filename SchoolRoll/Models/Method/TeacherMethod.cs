using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    public class TeacherMethod
    {
        /// <summary>
        /// 获取一个老师信息
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public Teacher GetTeacher(string value)
        {
            var teacher = new Teacher();
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Teacher.FirstOrDefault(u => u.Tno == value);
                teacher = infor;
            }
                return teacher;
        }
        /// <summary>
        /// 获取所有教师信息
        /// </summary>
        /// <returns></returns>
        public List<Teacher> ReadDB()
        {
            List<Teacher> teachers = new List<Teacher>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Teacher)
                    teachers.Add(infor);
            }
                return teachers;        
        }
      /// <summary>
      /// 按职工号删除教师
      /// </summary>
      /// <param name="value"></param>
        public void Delete(string value)
        {
            using (var dbcontext = new srContext())
            {
                var teacher = dbcontext.Teacher.FirstOrDefault(u => u.Tno == value);
                var TCs = new List<Teachercourse>();
                foreach(var infor in dbcontext.Teachercourse)
                {
                    if (infor.Tno == value)
                        TCs.Add(infor);
                }
                if (TCs != null)
                    foreach(var infro in TCs)
                        dbcontext.Teachercourse.Remove(infro);
                dbcontext.Remove(teacher);
                dbcontext.SaveChanges();
            }
        }
        /// <summary>
        /// 判断一个老师对象中是否存有空值属性
        /// </summary>
        /// <param name="teacher"></param>
        /// <returns></returns>
        public static string Check(Teacher teacher)
        {
            Type type = teacher.GetType();
            PropertyInfo[] props = type.GetProperties();
            return (props.Where(prop => prop.GetValue(teacher) == null).Select(prop => $"Parameter{prop.Name} can not be empty.")).FirstOrDefault();
        }
        /// <summary>
        /// 增加一个教师
        /// </summary>
        /// <param name="teacher"></param>
        /// <returns></returns>
        public bool Addteacher(Teacher teacher)
        {
            teacher.Tpassword = "123456";
            if (Check(teacher) == null)
                using (var dbcontext = new srContext())
                {
                    var value = dbcontext.Teacher.FirstOrDefault(u => u.Tno == teacher.Tno);
                    if (value == null)
                    {
                        if (teacher.Tsex == "男" || teacher.Tsex== "女")
                        {
                            dbcontext.Teacher.Add(teacher);
                            dbcontext.SaveChanges();
                            return true;
                        }
                        else
                            return false;
                    }
                    else
                        return false;

            }
            else
                return false;
        }
    }
}
