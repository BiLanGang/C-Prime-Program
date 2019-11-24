using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Course
    {
        public Course()
        {
            Score = new HashSet<Score>();
            Teachercourse = new HashSet<Teachercourse>();
        }

        public string Cno { get; set; }
        public string Cname { get; set; }
        public decimal? Credit { get; set; }
        public string Ctype { get; set; }
        public decimal? Cperiod { get; set; }

        public virtual ICollection<Score> Score { get; set; }
        public virtual ICollection<Teachercourse> Teachercourse { get; set; }
    }
}
