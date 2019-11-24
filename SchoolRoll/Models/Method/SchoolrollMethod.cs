using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models
{
    public class SchoolrollMethod
    {
        /// <summary>
        /// 获取学籍信息 
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public Schoolroll GetRoll(string value)
        {
            var  schoolroll=new Schoolroll();
            using (var dbcontext = new srContext())
            {
                schoolroll = dbcontext.Schoolroll.FirstOrDefault(u => u.Sno == value);
            }
            return schoolroll;
        }
    }
}
