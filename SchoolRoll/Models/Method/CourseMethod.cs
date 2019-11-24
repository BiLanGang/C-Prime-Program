using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
   
    public class CourseMethod
    {
        /// <summary>
        /// 按类别获取课程列表
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public List<Course> GetCourses(string type)
        {
            List<Course> courses = new List<Course>();
            using (var dbcontext = new srContext())
            {
                foreach(var infor in dbcontext.Course)
                {
                    if (infor.Ctype == type)
                        courses.Add(infor);
                }
            }
                return courses;
        }
        /// <summary>
        /// 按课程编号查找一门课程
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public Course FindCourse(string value)
        {
            var course = new Course();
            using (var dbcontext = new srContext())
            {
                course = dbcontext.Course.FirstOrDefault(c => c.Cno == value);
            }
            return course;
        }
        /// <summary>
        /// 获取所有课程信息
        /// </summary>
        /// <returns></returns>
        public List<Course> GetAllCourses()
        {
            List<Course> courses = new List<Course>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Course)
                {
                   
                        courses.Add(infor);
                }
            }
            return courses;
        }
        /// <summary>
        /// 删除一门课程
        /// </summary>
        /// <param name="value"></param>
        public void Delete(string  value)
        {
            List<Score> scores = new List<Score>();
            using (var dbcontext = new srContext())
            {
                var course = dbcontext.Course.FirstOrDefault(c => c.Cno == value);
                foreach (var infor in dbcontext.Score)//在数据库中通过课程编号查找成绩
                    if (infor.Cno == value)
                        scores.Add(infor);
                if (scores != null)
                    foreach (var infor in scores)
                        dbcontext.Score.Remove(infor);
                dbcontext.Course.Remove(course);
                dbcontext.SaveChanges();
            }
        }
        /// <summary>
        /// 判断一个课程对象是否有空值属性
        /// </summary>
        /// <param name="course"></param>
        /// <returns></returns>
        public static string Check(Course  course)
        {
            Type type = course.GetType();
            PropertyInfo[] props = type.GetProperties();
            return (props.Where(prop => prop.GetValue(course) == null).Select(prop => $"Parameter{prop.Name} can not be empty.")).FirstOrDefault();
        }
        /// <summary>
        /// 增加一门课程
        /// </summary>
        /// <param name="course"></param>
        /// <returns></returns>
        public bool Addcourse(Course course)
        {
            if (Check(course) == null)
            {
                using (var dbcontext = new srContext())
                {
                    var infor = FindCourse(course.Cno);
                    if (infor == null)
                    {
                        dbcontext.Course.Add(course);
                        dbcontext.SaveChanges();
                        return true;
                    }
                    else
                        return false;

                }
            }
            else
                return false;
        }
        
    }
}
