using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    
    public class CetMethod
    {
        /// <summary>
        /// 获取一个学生的四六级信息
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public List<Cet> GetCets(string value)
        {
            List<Cet> cets = new List<Cet>();
            using (var dbcontext = new srContext())
            {
                foreach(var infor in dbcontext.Cet)
                {
                    if (infor.Sno == value)
                        cets.Add(infor);
                }
            }
                return cets;
        }
    }
}
