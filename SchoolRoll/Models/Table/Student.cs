using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Student
    {
        public Student()
        {
            Certificate = new HashSet<Certificate>();
            Cet = new HashSet<Cet>();
            Score = new HashSet<Score>();
        }

        public string Sno { get; set; }
        public string Sname { get; set; }
        public int? Sage { get; set; }
        public string Ssex { get; set; }
        public DateTime? Sbirthday { get; set; }
        public string Sphone { get; set; }
        public string Spassword { get; set; }
        public string Saddress { get; set; }

        public virtual Schoolroll Schoolroll { get; set; }
        public virtual ICollection<Certificate> Certificate { get; set; }
        public virtual ICollection<Cet> Cet { get; set; }
        public virtual ICollection<Score> Score { get; set; }
    }
}
