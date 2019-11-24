using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using SchoolRoll.Models;
using SchoolRoll.Models.Method;
using SchoolRoll.Models.Table;

namespace SchoolRoll.Controllers
{
    public class TeacherController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
        public IActionResult Detail()
        {
            TeacherMethod userfunction = new TeacherMethod();
            this.Request.Cookies.TryGetValue("Tno", out string value);
            string no = value;
            Teacher teacher = userfunction.GetTeacher(no);
            ViewBag.teacher = teacher;
            return View();
        }
        public IActionResult ChangePassword()
        {
            TeacherMethod userfunction = new TeacherMethod();
            this.Request.Cookies.TryGetValue("Tno", out string value);
            string no = value;
            Teacher teacher = userfunction.GetTeacher(no);
            ViewBag.teacher = teacher;
            return View();
        }
        public IActionResult ChangeInformation()
        {
            TeacherMethod userfunction = new TeacherMethod();
            this.Request.Cookies.TryGetValue("Tno", out string value);
            string no = value;
            Teacher teacher = userfunction.GetTeacher(no);
            ViewBag.teacher = teacher;
            return View();
        }
        public IActionResult CET()
        {           
            return View();
        }
        public IActionResult Certificate()
        {
            return View();
        }
        public  IActionResult Pirntcet()
        {
            StudentMethod function = new StudentMethod();
            List<Student> lists = function.ReadDB();
            ViewBag.lists = lists;
            return View();
        }
        public IActionResult Pirntcer()
        {
            StudentMethod function = new StudentMethod();
            List<Student> lists = function.ReadDB();
            ViewBag.lists = lists;
            return View();
        }
        public IActionResult PInputscore()
        {
            StudentMethod method = new StudentMethod();
            var students = method.ReadDB();
            ViewBag.students = students;
            return View();
        }
        public IActionResult Showallstudent()
        {
            StudentMethod method = new StudentMethod();
            var students = method.ReadDB();
            ViewBag.students = students;
            return View();
        }
        [HttpPost]
        public IActionResult Input(Student student)
        {
            this.Request.Cookies.TryGetValue("Tno", out string Value);
            var infor = new Student();
            using (var dbcontext = new srContext())
            {
                infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno);
            }
            if (infor == null)
                return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            else
            {
                ScoreMethod method = new ScoreMethod();
                CourseMethod course = new CourseMethod();
                TCmethod cmethod = new TCmethod();
                List<Course> courses = cmethod.GetCourseByTno(Value);
                var scoreLists = method.GetnullScores(student.Sno);
                var scores = new List<Score>();
                foreach (var temp in courses)
                    if (scoreLists.FirstOrDefault(s => s.Cno == temp.Cno) != null)
                        scores.Add(scoreLists.FirstOrDefault(s => s.Cno == temp.Cno));
                if (scores.Count()!=0)
                {
                    List<Course> courseLists = new List<Course>();
                    foreach (var value in scores)
                    {
                        courseLists.Add(course.FindCourse(value.Cno));
                    }
                    ViewBag.scoreLists = scores;
                    ViewBag.courseLists = courseLists;
                    return View();
                }
                else
                    return Content("<script>alert('暂无成绩可录入');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        public IActionResult Showstuscore(string stu_id)
        {
            using (var dbcontext = new srContext())
            {
                this.Request.Cookies.TryGetValue("Tno", out string Value);
                TCmethod cmethod = new TCmethod();
                List<Course> courseslist = cmethod.GetCourseByTno(Value);
                var stu = dbcontext.Student.FirstOrDefault(u => u.Sno == stu_id);
                decimal? credit = 0;
                if (stu != null)
                {
                    ScoreMethod method = new ScoreMethod();
                    List<Score> scores = method.GetScores(stu_id);
                    List<Course> courses = new List<Course>();

                    var scoreslist = new List<Score>();
                    foreach (var temp in courseslist)
                        if(scores.FirstOrDefault(s => s.Cno == temp.Cno)!=null)
                        scoreslist.Add(scores.FirstOrDefault(s => s.Cno == temp.Cno));

                    for (int i = 0; i < scoreslist.Count; i++)
                    {
                        courses.Add(dbcontext.Course.FirstOrDefault(u => u.Cno == scoreslist[i].Cno));
                        if (scoreslist[i].Grade >= 60 && scoreslist[i].Grade != null)
                            credit += courses[i].Credit;
                    }
                    var Crd = credit.ToString();
                    ViewBag.courses = courses;
                    ViewBag.scores = scoreslist;
                    ViewBag.credit = Crd;
                    return View();
                }
                else
                    return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        public IActionResult Inputscore(string stuSno,string stuCno,decimal?  stuGrade)
        {

            ScoreMethod score = new ScoreMethod();
            if(score.InputScore(stuSno,stuCno,stuGrade))
                return Content("{\"message\":\"提交成功！\",\"status\":\"-1\"}");
            else
                return Content("{\"message\":\"提交失败！\",\"status\":\"-1\"}");

        }

        public IActionResult Mycet(Student student)
        {
            var infor = new Student();
            using (var dbcontext = new srContext())
            {
               infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno);
            }
             CetMethod cet = new CetMethod();           
            if(infor==null)
                return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");               
            else
            {
                var cets = cet.GetCets(student.Sno);
                ViewBag.cets = cets;
                return View();
            }
                                
        }
        public IActionResult Mycer(Student student)
        {
            var infor = new Student();
            using (var dbcontext = new srContext())
            {
                infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno);
            }
            CerMethod method = new CerMethod();
            if (infor == null)
                return Content("<script>alert('该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
            else
            {
                var cers = method.GetCertificates(student.Sno);
                ViewBag.cers = cers;
                return View();
            }

        }
        public IActionResult Insertcer(Certificate certificate)
        {           
            if (certificate.Sno == null || certificate.Cerno == null || certificate.Cername == null
                || certificate.Cerdate == null || certificate.Certype == null
                || certificate.Cercompany == null)
                return Content("<script>alert('录入失败');history.go(-1);</script>", "text/html;charset=UTF-8");
            else
            {
                using (var dbcontext = new srContext())
                {
                    var infor = dbcontext.Student.FirstOrDefault(u => u.Sno == certificate.Sno);
                    if (infor == null)
                        return Content("<script>alert('录入失败，该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
                    else
                    {
                        var value = dbcontext.Certificate.FirstOrDefault(C => C.Cerno == certificate.Cerno&&C.Sno==certificate.Sno);
                        if (value == null)
                        {
                            infor.Certificate.Add(certificate);
                            dbcontext.SaveChanges();
                            return Content("<script>alert('录入成功');window.location.href='../Teacher/Pirntcer';</script>", "text/html;charset=UTF-8");
                        }
                        else
                            return Content("<script>alert('录入失败,请勿录入同编号证书');history.go(-1);</script>", "text/html;charset=UTF-8");
                    }
                }
               
            }
        }
        public IActionResult  Insertcet(Cet cet)
        {
            if (cet.Sno == null || cet.Etype == null || cet.Egade == null)
                return Content("<script>alert('录入失败');history.go(-1);</script>", "text/html;charset=UTF-8");
            else
            {
                using (var dbcontext = new srContext())
                {
                    var infor = dbcontext.Student.FirstOrDefault(u => u.Sno == cet.Sno);
                    if (infor == null)
                        return Content("<script>alert('录入失败,该学生不存在');history.go(-1);</script>", "text/html;charset=UTF-8");
                    else
                    {                                               
                            infor.Cet.Add(cet);
                            dbcontext.SaveChanges();
                            return Content("<script>alert('录入成功');window.location.href='../Teacher/Pirntcet';</script>", "text/html;charset=UTF-8");                          
                    }
                }
              
            }
        }
        public IActionResult ChangePasw(Teacher teacher, string newpwd, string rcnewpwd)
        {
            using (var dbcontext = new srContext())
            {
                var temp=dbcontext.Teacher.FirstOrDefault(u => u.Tno == teacher.Tno);
                if (temp.Tpassword == teacher.Tpassword)
                {
                    if (newpwd == rcnewpwd)
                    {
                        temp.Tpassword = newpwd;
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
        public IActionResult ChangeInfor(Teacher teacher)
        {
            using (var dbcontext = new srContext())
            {
                var temp = dbcontext.Teacher.FirstOrDefault(s => s.Tno == teacher.Tno);
                temp.Tphone = teacher.Tphone;
                dbcontext.SaveChanges();
            }
            return RedirectToAction("Detail", "Teacher");
        }
       
    }
    
}
