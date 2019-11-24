using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models
{
    public class LogMethod
    {
        /// <summary>
        /// 登录
        /// </summary>
        /// <param name="student"></param>
        /// <returns></returns>
        public Student  StuLogin(Student student)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Student.FirstOrDefault(u => u.Sno == student.Sno &&
                  u.Spassword == student.Spassword);
                if (infor != null)
                {
                    return infor;
                }
                else
                {
                    return null;
                }
            }
        }
        public Teacher TeaLogin(Teacher teacher)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Teacher.FirstOrDefault(u => u.Tno == teacher.Tno &&
                  u.Tpassword == teacher.Tpassword);
                if (infor != null)
                {
                    return infor;
                }
                else
                {
                    return null;
                }
            }
        }
        public Administrator AdmLogin(Administrator administrator)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Administrator.FirstOrDefault(u => u.Ano == administrator.Ano &&
                  u.Apassword == administrator.Apassword);
                if (infor != null)
                {
                    return infor;
                }
                else
                {
                    return null;
                }
            }
        }
    }
}

