using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    public class CerMethod
    {
        /// <summary>
        /// 获取一个学生的所有证书信息
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
       public List<Certificate> GetCertificates(string value)
        {
            List<Certificate> certificates = new List<Certificate>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Certificate)
                {
                    if (infor.Sno == value)
                        certificates.Add(infor);
                }
            }
                return certificates;
        }
        /// <summary>
        /// 判断证书信息是否存在
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public bool Check(string value)
        {
            using (var dbcontext = new srContext())
            {
                if (dbcontext.Certificate.FirstOrDefault(c => c.Cerno == value) != null)
                    return true;
                else
                    return false;

            }
            
        }
    }
}
