using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Cet
    {
        public int Eno { get; set; }
        public string Sno { get; set; }
        public string Etype { get; set; }
        public decimal? Egade { get; set; }

        public virtual Student SnoNavigation { get; set; }
    }
}
