using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    public class AdminMethod
    {
        /// <summary>
        /// 获取教务人员信息
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public Administrator GetAdmin(string value)
        {
            var admin = new Administrator();
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Administrator.FirstOrDefault(u => u.Ano == value);
                admin = infor;
            }
            return admin;
        }
    }
}
