using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using SchoolRoll.Models;
using SchoolRoll.Models.Method;

namespace SchoolRoll.Controllers
{
    public class AdministratorController : Controller
    {
       
        public IActionResult Index()
        {
            return View();
        }
        /// <summary>
        /// 改密码页面
        /// </summary>
        /// <returns></returns>
        public IActionResult ChangePassword()
        {
            AdminMethod method = new AdminMethod();
            this.Request.Cookies.TryGetValue("Ano", out string  value);
            var Admin=method.GetAdmin(value);
            ViewBag.Admin = Admin;
            return View();
        }  
        //public IActionResult ElectiveManage()
        //{
        //    List<string> courestype = new List<string> { "通识核心课程", "专业基础课程", "专业方向课程" };
        //    List<string> type= new List<string> { "Liberal", "ProfessionalBasic", "ProfessionalCore" };
        //    ViewBag.coursetype = courestype;
        //    ViewBag.type = type;
        //    return View();
        //}
        public IActionResult Addcourse()
        {
            return View();
        }
        public IActionResult Addstudent()
        {
            return View();
        }
        public IActionResult Manstudent()
        {           
            return View();
        }
        public IActionResult Deletestudent()
        {
            return View();
        }
        public IActionResult Delcourse(string type)
        {
            CourseMethod method = new CourseMethod();
            if (type == null)
            {
                List<Course> courses = method.GetAllCourses();
                ViewBag.courses = courses;
                return View();
            }
            else
            {
                List<Course> courses = method.GetCourses(type);
                ViewBag.courses = courses;
                return View();
            }
        }
        /// <summary>
        /// 学生信息统计页面
        /// </summary>
        /// <returns></returns>
        public IActionResult Stastudent()
        {
            StudentMethod method = new StudentMethod();
            List<List<Student>> students = new List<List<Student>>();
            List<string> Dep = method.Getdep();
            foreach (var infor in Dep)
                students.Add(method.Static(infor));
            ViewBag.students = students;
            return View();
        }
        public IActionResult Addteacher()
        {
            return View();
        }
        public IActionResult Delteacher()
        {
            TeacherMethod method = new TeacherMethod();
            var Lists = method.ReadDB();
            ViewBag.teachers = Lists;
            return View();
        }
        
        /// <summary>
        /// 教师授课信息变动页面
        /// </summary>
        /// <returns></returns>
        public IActionResult ModifyTC()
        {
            TeacherMethod teacher = new TeacherMethod();
            TCmethod cmethod = new TCmethod();
            var courses = new List<List<Course>>();
            var Allteacher = teacher.ReadDB();
            foreach (var infor in Allteacher)
                courses.Add(cmethod.GetCourseByTno(infor.Tno));
            ViewBag.courses = courses;
            ViewBag.teachers = Allteacher;
            return View();
        }
        
        [HttpPost]
        
        //增加一条教师授课信息
        public IActionResult AddTCcourse(string Teacher_id,string course_id)
        {
            TCmethod cmethod = new TCmethod();
            CourseMethod course = new CourseMethod();
            if (course.FindCourse(course_id) == null)
                return Content("<script>alert('添加失败,不存在这门课程');history.go(-1);</script>", "text/html;charset=UTF-8");
            else
            {
                if (cmethod.AddTC(Teacher_id, course_id))
                    return RedirectToAction("ShowTC", "Administrator", new { Teacher_id= Teacher_id });
                else
                    return Content("<script>alert('添加失败，请勿重复添加');history.go(-1);</script>", "text/html;charset=UTF-8");
            }

        }
        /// <summary>
        /// 删除一条教师授课信息
        /// </summary>
        /// <param name="Teacher_id"></param>
        /// <param name="course_id"></param>
        /// <returns></returns>
        public IActionResult DelTCcourse(string Teacher_id, string course_id)
        {
            TCmethod cmethod = new TCmethod();
            cmethod.DelTC(Teacher_id, course_id);
                return Content("<script>alert('删除成功');window.location.href='../Administrator/ShowTC';</script>", "text/html;charset=UTF-8");
           

        }
        /// <summary>
        /// 输出一个老师所教授的所有课程
        /// </summary>
        /// <param name="Teacher_id"></param>
        /// <returns></returns>
        public  IActionResult   ShowTC(string Teacher_id)
        {
            TeacherMethod method = new TeacherMethod();
            if (method.GetTeacher(Teacher_id) != null)
            {
                TCmethod cmethod = new TCmethod();
                ViewBag.courses = cmethod.GetCourseByTno(Teacher_id);
                ViewBag.Tno = Teacher_id;
                return View();
            }
            else
                return Content("<script>alert('该教师不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
        }
        /// <summary>
        /// 删除一个教师
        /// </summary>
        /// <param name="teacher_id"></param>
        /// <returns></returns>
        public IActionResult Delteamethod(string teacher_id)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Teacher.FirstOrDefault(u => u.Tno == teacher_id);
                if (infor != null)
                {
                    TeacherMethod method = new TeacherMethod();
                    method.Delete(teacher_id);
                    return Content("<script>alert('删除成功');window.location.href='../Administrator/Delteacher';</script>", "text/html;charset=UTF-8");
                }
                else
                    return Content("<script>alert('该教师不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        /// <summary>
        /// 增加一个教师
        /// </summary>
        /// <param name="teacher"></param>
        /// <returns></returns>
        public IActionResult AddteacherMethod(Teacher teacher)
        {
            TeacherMethod method = new TeacherMethod();
            if (method.Addteacher(teacher))
                return Content("<script>alert('添加成功');window.location.href='../Administrator/Delteacher';</script>", "text/html;charset=UTF-8");

            else
                return Content("<script>alert('添加失败');history.go(-1);</script>", "text/html;charset=UTF-8");


        }
        /// <summary>
        /// 删除一个学生
        /// </summary>
        /// <param name="student_id"></param>
        /// <returns></returns>
        public IActionResult Delstudent(string student_id)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student_id);
                if (infor != null)
                {
                    StudentMethod student = new StudentMethod();
                    student.Delete(student_id);
                    return Content("<script>alert('删除成功');history.go(-1);</script>", "text/html;charset=UTF-8");
                }
                else
                    return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        public IActionResult ShowDep(string Depname)
        {
            StudentMethod method = new StudentMethod();
            var Lists = method.Static(Depname);
            ViewBag.students = Lists;
            return View();
        }
        public  IActionResult  Changestu(Student student )
        {
            StudentMethod method = new StudentMethod();
            var stu = method.FindStudent(student.Sno);
            ViewBag.student = stu;
            return View();
        }
        public IActionResult Changestudent(Student stu)
        {
            StudentMethod method = new StudentMethod();
            method.Change(stu);          
            return RedirectToAction("Showstu", "Administrator", stu);
             
        }
        public IActionResult Showstu(Student student)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno);
                if (infor != null)
                {
                    StudentMethod method = new StudentMethod();
                    var stu = method.FindStudent(student.Sno);
                    ViewBag.student = stu;
                    return View();
                }
                else
                    return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        /// <summary>
        /// 增加一个学生
        /// </summary>
        /// <param name="student"></param>
        /// <returns></returns>
        public IActionResult Addstu(Student student)
        {
            StudentMethod method = new StudentMethod();
            if(method.Addstudent(student))
                return Content("<script>alert('添加成功');window.location.href='../Administrator/Index';</script>", "text/html;charset=UTF-8");
            else
                return Content("<script>alert('添加失败');history.go(-1);</script>", "text/html;charset=UTF-8");
        }
        /// <summary>
        /// 删除一门课程
        /// </summary>
        /// <param name="course"></param>
        /// <returns></returns>
        public IActionResult Delcou(Course course)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Course.FirstOrDefault(u => u.Cno == course.Cno);
                if (infor != null)
                {
                    CourseMethod method = new CourseMethod();
                    method.Delete(course.Cno);
                    return Content("<script>alert('删除成功');window.location.href='../Administrator/Delcourse';</script>", "text/html;charset=UTF-8");
                }
                else
                    return Content("<script>alert('删除失败，该课程不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        /// <summary>
        /// 增加一门课程
        /// </summary>
        /// <param name="course"></param>
        /// <returns></returns>
        public IActionResult Addcou(Course  course)
        {
            CourseMethod method = new CourseMethod();
            if(method.Addcourse(course))
                    return Content("<script>alert('添加成功');window.location.href='../Administrator/Delcourse';</script>", "text/html;charset=UTF-8");
              
                else
                    return Content("<script>alert('添加失败，该课程已存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            
            
        }
        public IActionResult ChangePasw(Administrator admin, string newpwd, string rcnewpwd)
        {
            using (var dbcontext = new srContext())
            {
                var temp = dbcontext.Administrator.FirstOrDefault(s => s.Ano == admin.Ano);
                if (temp.Apassword == admin.Apassword)
                {
                    if (newpwd == rcnewpwd)
                    {
                        temp.Apassword = newpwd;
                        dbcontext.SaveChanges();
                        return RedirectToAction("Index", "Home");
                    }
                    else
                        return RedirectToAction("ChangePassword", "Administrator");
                }
                else
                    return RedirectToAction("ChangePassword", "Administrator");
            }

        }
        //public  IActionResult Open(string type)
        //{
        //    this.Response.Cookies.Append(type,"open");
        //    return Content("<script>alert('操作成功');history.go(-1);</script>", "text/html;charset=UTF-8");
        //}
        //public IActionResult close(string type)
        //{
        //    this.Response.Cookies.Append(type,"close");
        //    return Content("<script>alert('操作成功');history.go(-1);</script>", "text/html;charset=UTF-8");
        //}
        
      }
}
