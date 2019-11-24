using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Teachercourse
    {
        public string Tno { get; set; }
        public string Cno { get; set; }

        public virtual Course CnoNavigation { get; set; }
        public virtual Teacher TnoNavigation { get; set; }
    }
}
