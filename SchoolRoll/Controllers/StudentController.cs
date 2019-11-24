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
    public class StudentController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
        public IActionResult Liberal()
        {
           
                CourseMethod method = new CourseMethod();
                List<Course> courses = method.GetCourses("通识核心课程");
                ViewBag.courses = courses;
                return View();
          
        }
        public IActionResult ProfessionalBasic()
        {

            CourseMethod method = new CourseMethod();
            List<Course> courses = method.GetCourses("专业基础课程");
            ViewBag.courses = courses;
            return View();
        }
        public IActionResult ProfessionalCore()
        {
            
                CourseMethod method = new CourseMethod();
                List<Course> courses = method.GetCourses("专业方向课程");
                ViewBag.courses = courses;
                return View();
        }
        public IActionResult Showcer()
        {
            this.Request.Cookies.TryGetValue("Sno", out string value);
            CerMethod method = new CerMethod();
            var cers = method.GetCertificates(value);
            ViewBag.cers = cers;
            return View();        
        }
        public IActionResult Showcet()
        {
            this.Request.Cookies.TryGetValue("Sno", out string value);
            CetMethod method = new CetMethod();
            var cets = method.GetCets(value);
            ViewBag.cets = cets;
            return View();
        }
        public IActionResult Detail()
        {
            StudentMethod userfunction = new StudentMethod();
            this.Request.Cookies.TryGetValue("Sno", out string value);
            string no = value;
            Student student = userfunction.FindStudent(no);
            ViewBag.student = student;
            return View();
        }
        public IActionResult SchoolRoll()
        {
            StudentMethod userfunction = new StudentMethod();
            this.Request.Cookies.TryGetValue("Sno", out string value);
            string no = value;
            Student student = userfunction.FindStudent(no);
            ViewBag.student = student;
            return View();
        }
        public IActionResult ChangeInformation()
        {
            StudentMethod userfunction = new StudentMethod();
            this.Request.Cookies.TryGetValue("Sno", out string value);
            string no = value;
            Student student = userfunction.FindStudent(no);
            ViewBag.student = student;
            return View();
        }
        public IActionResult ChangePassword()
        {
            StudentMethod userfunction = new StudentMethod();
            this.Request.Cookies.TryGetValue("Sno", out string value);
            string no = value;
            Student student = userfunction.FindStudent(no);
            ViewBag.student = student;
            return View();
        }
        public IActionResult Showcourses()
        {            
            this.Request.Cookies.TryGetValue("Sno", out string value);
            ScoreMethod method = new ScoreMethod();
            List<Score> scores = method.GetScores(value);
            List<Course> courses = new List<Course>();           
            using (var dbcontext = new srContext())
            {
                for (int i = 0; i < scores.Count; i++)
                {
                    courses.Add(dbcontext.Course.FirstOrDefault(u=>u.Cno==scores[i].Cno));
                    
                }
            }
            ViewBag.scores = scores;
            ViewBag.courses = courses;
            return View();
        }
        public IActionResult Showscores()
        {
            this.Request.Cookies.TryGetValue("Sno", out string value);
            ScoreMethod method = new ScoreMethod();
            List<Score> scores = method.GettureScores(value);
            List<Course> courses = new List<Course>();
            decimal? credit = 0;
            using (var dbcontext = new srContext())
            {
                for (int i = 0; i < scores.Count; i++)
                {
                    courses.Add(dbcontext.Course.FirstOrDefault(u => u.Cno == scores[i].Cno));
                    if (scores[i].Grade >= 60 && scores[i].Grade != null)
                        credit += courses[i].Credit;
                }
            }
            var Crd = credit.ToString();
            ViewBag.courses = courses;
            ViewBag.scores = scores;
            ViewBag.credit = Crd;
            return View();
        }
        [HttpPost]


        ///退课
        public IActionResult Delcourse(string course_id)
        {
            this.Request.Cookies.TryGetValue("Sno", out string value);
            ScoreMethod method = new ScoreMethod();
            method.Delscore(value, course_id);
            return Content("<script>alert('退课成功');window.location.href='/Student/Showcourses';</script>", "text/html;charset=UTF-8");
        }
        /// <summary>
        /// 学生选课
        /// </summary>
        /// <param name="course"></param>
        /// <returns></returns>
        public IActionResult Insertcourse(Course course)
        {            
            StudentMethod userfunction = new StudentMethod();
            this.Request.Cookies.TryGetValue("Sno", out string value);
            var score = new Score
            {
                Cno = course.Cno,
                Sno = value
            };
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Score.FirstOrDefault(u => u == score);
                    if (infor!=null)
                        return Content("<script>alert('选课失败，请勿重复选课');history.go(-1);</script>", "text/html;charset=UTF-8");
                    else
                    {
                        Student student = dbcontext.Student.FirstOrDefault(u => u.Sno == value);
                        student.Score.Add(score);
                        dbcontext.SaveChanges();
                    return Content("<script>alert('选课成功');window.location.href='/Student/Showcourses';</script>", "text/html;charset=UTF-8");
                }
            }
          
        }           
        public IActionResult ChangeInfor(Student student)
        {
            
            using (var dbcontext = new srContext())
            {
                var temp = dbcontext.Student.FirstOrDefault(s=>s.Sno==student.Sno);
                temp.Sphone = student.Sphone;
                temp.Saddress = student.Saddress;
                dbcontext.SaveChanges();
            }
            return RedirectToAction("Detail", "Student");
        }
        public IActionResult ChangePaswod(Student student, string newpwd, string rcnewpwd)
        {
            using (var dbcontext = new srContext())
            {
                var temp = dbcontext.Student.FirstOrDefault(s => s.Sno == student.Sno);
                if (temp.Spassword == student.Spassword)
                {
                    if (newpwd == rcnewpwd)
                    {
                        temp.Spassword = newpwd;
                        dbcontext.SaveChanges();
                        return RedirectToAction("Index", "Home");
                    }
                    else
                        return Content("<script>alert('修改失败');history.go(-1);</script>", "text/html;charset=UTF-8");
                }
                else
                     return Content("<script>alert('原密码错误，修改失败');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
            
        }
    }
}


