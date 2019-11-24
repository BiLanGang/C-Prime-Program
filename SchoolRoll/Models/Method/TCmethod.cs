using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    public class TCmethod
    {
        /// <summary>
        /// 按教师ID获取他所教授的所有课程
        /// </summary>
        /// <param name="Tea_id"></param>
        /// <returns></returns>
        public List<Course> GetCourseByTno(string Tea_id)
        {
            var List = new List<Course>();
            using (var db = new srContext())
            {
                foreach(var infor in db.Teachercourse)
                {
                    if (infor.Tno == Tea_id)
                    {
                        List.Add(db.Course.FirstOrDefault(c=>c.Cno==infor.Cno));
                    }
                }
            }               
            return List;
        }
        /// <summary>
        /// 增加一条老师授课信息
        /// </summary>
        /// <param name="Tid"></param>
        /// <param name="Cid"></param>
        /// <returns></returns>
        public bool AddTC(string Tid,string Cid)
        {
            using (var db = new srContext())
            {
                var value = db.Teachercourse.FirstOrDefault(t => t.Cno == Cid && t.Tno == Tid);
                if (value != null)
                    return false;
                else

                {
                    var TC = new Teachercourse { Tno = Tid, Cno=Cid};
                    db.Teachercourse.Add(TC);
                    db.SaveChanges();
                        return true;
                }
            }
               
        }
        /// <summary>
        /// 删除一条老师授课信息
        /// </summary>
        /// <param name="Tid"></param>
        /// <param name="Cid"></param>
        /// <returns></returns>
        public void DelTC(string Tid, string Cid)
        {
            using (var db = new srContext())
            {
                var value = db.Teachercourse.FirstOrDefault(t => t.Cno == Cid && t.Tno == Tid);
                
                    db.Teachercourse.Remove(value);
                    db.SaveChanges(); 
            }

        }
    }
}
