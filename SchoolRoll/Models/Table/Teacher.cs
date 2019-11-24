using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Teacher
    {
        public Teacher()
        {
            Teachercourse = new HashSet<Teachercourse>();
        }

        public string Tno { get; set; }
        public string Tname { get; set; }
        public string Tsex { get; set; }
        public int? Tage { get; set; }
        public DateTime? Tbirthday { get; set; }
        public string Tphone { get; set; }
        public string Tpassword { get; set; }
        public virtual ICollection<Teachercourse> Teachercourse { get; set; }
    }
}
