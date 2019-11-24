using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Certificate
    {
        public string Sno { get; set; }
        public string Cerno { get; set; }
        public string Cername { get; set; }
        public DateTime? Cerdate { get; set; }
        public string Certype { get; set; }
        public string Cercompany { get; set; }

        public virtual Student SnoNavigation { get; set; }
    }
}
