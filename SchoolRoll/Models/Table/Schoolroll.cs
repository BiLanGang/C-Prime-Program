using System;
using System.Collections.Generic;

namespace SchoolRoll.Models
{
    public partial class Schoolroll
    {
        public string Sno { get; set; }
        public string School { get; set; }
        public string Class { get; set; }
        public string Major { get; set; }
        public string Department { get; set; }
        public DateTime? Enter { get; set; }
        public string Type { get; set; }
        public int? Length { get; set; }

        public virtual Student SnoNavigation { get; set; }
    }
}
