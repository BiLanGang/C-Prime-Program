using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace SchoolRoll.Models.Method
{
    public class ScoreMethod
    {
        /// <summary>
        /// 获取一个学生的所有课程和成绩
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public List<Score> GetScores(string value)
        {
            List<Score> scores = new List<Score>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Score)
                {
                    if (infor.Sno == value)
                        scores.Add(infor);
                }
            }
            return scores;
        }
        /// <summary>
        /// 获取一个学生没有成绩的课程
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public List<Score> GetnullScores(string value)
        {
            List<Score> scores = new List<Score>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Score)
                {
                    if (infor.Sno == value && infor.Grade == null)
                        scores.Add(infor);
                }
            }
            return scores;
        }
        /// <summary>
        /// 退课
        /// </summary>
        /// <param name="stu_id"></param>
        /// <param name="cou_id"></param>
        /// <returns></returns>
        public void Delscore(string stu_id, string cou_id)
        {
            using (var dbcontext = new srContext())
            {
                var infor = dbcontext.Score.FirstOrDefault(u => u.Sno == stu_id && u.Cno == cou_id);               
                    dbcontext.Score.Remove(infor);
                    dbcontext.SaveChanges();                                  
            }
        }
        /// <summary>
        /// 获取一个学生所有有成绩的课程
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public List<Score> GettureScores(string value)
        {
            List<Score> scores = new List<Score>();
            using (var dbcontext = new srContext())
            {
                foreach (var infor in dbcontext.Score)
                {
                    if (infor.Sno == value && infor.Grade != null)
                        scores.Add(infor);
                }
            }
            return scores;
        }
        /// <summary>
        /// 录入成绩
        /// </summary>
        /// <param name="Sno"></param>
        /// <param name="Cno"></param>
        /// <param name="Grade"></param>
        /// <returns></returns>
        public bool InputScore(string Sno, string Cno, decimal? Grade)
        {
            if (Grade!=null)
            {
                if (Grade > 100)
                    return false;
                else
                {
                    using (var dbcontext = new srContext())
                    {
                        var infor = dbcontext.Score.FirstOrDefault(u => u.Sno == Sno && u.Cno == Cno);
                        infor.Grade = Grade;
                        dbcontext.SaveChanges();
                    }
                    return true;
                }
            }
            else
                return false;

        }
    }
}

