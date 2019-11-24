using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using SchoolRoll.Models;
using System.Web;
using Microsoft.AspNetCore.Http;


namespace SchoolRoll.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }
        [HttpPost]

        public IActionResult StuLog(Student student)
        {
            LogMethod log = new LogMethod();
            Student m = log.StuLogin(student);            
            if (m != null)
            {
                this.Response.Cookies.Append("Sno", m.Sno);
                return RedirectToAction("Index", "Student");          
            }
            else
            {
                return Content("<script>alert('登录失败，请检查账号或密码是否输入错误');history.go(-1);</script>", "text/html;charset=UTF-8");             
            }
        }
        public IActionResult TeaLog(Teacher teacher)
        {
            LogMethod log = new LogMethod();
            Teacher m = log.TeaLogin(teacher);
            if (m != null)
            {
                this.Response.Cookies.Append("Tno", m.Tno);
                return RedirectToAction("Index", "Teacher");
            }
            else
            {
                return Content("<script>alert('登录失败，请检查账号或密码是否输入错误');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        public IActionResult AdmLog(Administrator administrator)
        {
            LogMethod log = new LogMethod();
            Administrator m = log.AdmLogin(administrator);
            if (m != null)
            {
                this.Response.Cookies.Append("Ano", m.Ano);
                return RedirectToAction("Index", "Administrator");
            }
            else
            {
                return Content("<script>alert('登录失败，请检查账号或密码是否输入错误');history.go(-1);</script>", "text/html;charset=UTF-8");
            }
        }
        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
