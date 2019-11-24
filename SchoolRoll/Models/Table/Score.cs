using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Score
    {
        public string Sno { get; set; }
        public string Cno { get; set; }
        public decimal? Grade { get; set; }

        public virtual Course CnoNavigation { get; set; }
        public virtual Student SnoNavigation { get; set; }
    }
}
