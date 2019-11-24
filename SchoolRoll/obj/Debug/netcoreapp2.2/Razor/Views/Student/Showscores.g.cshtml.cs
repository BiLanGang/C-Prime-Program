#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "3544380ab61a52fd9fb3f4bdb8f5a4a47cefd1b5"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_Showscores), @"mvc.1.0.razor-page", @"/Views/Student/Showscores.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Student/Showscores.cshtml", typeof(AspNetCore.Views_Student_Showscores), null)]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#line 1 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\_ViewImports.cshtml"
using SchoolRoll;

#line default
#line hidden
#line 2 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\_ViewImports.cshtml"
using SchoolRoll.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"3544380ab61a52fd9fb3f4bdb8f5a4a47cefd1b5", @"/Views/Student/Showscores.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_Showscores : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
  
    var courses = ViewBag.courses as List<Course>;
    var scores = ViewBag.scores as List<Score>;
    var credit = ViewBag.credit as string;
    Layout = "_StuLayout";

#line default
#line hidden
            BeginContext(236, 374, true);
            WriteLiteral(@"<section class=""panel"">
    <header class=""panel-heading"">
        个人课程
    </header>
    <table class=""table"">
        <thead>
            <tr>
                <th>序号</th>
                <th>课程编号</th>
                <th>课程名称</th>
                <th>课程学分</th>               
                <th>课程成绩</th>
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 24 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
             for (int i = 0; i < courses.Count() + 1; i++)
            {
                if (i != courses.Count())
                {

#line default
#line hidden
            BeginContext(747, 54, true);
            WriteLiteral("                    <tr>\r\n                        <td>");
            EndContext();
            BeginContext(802, 1, false);
#line 29 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(803, 35, true);
            WriteLiteral("</td>\r\n                        <td>");
            EndContext();
            BeginContext(839, 14, false);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(courses[i].Cno);

#line default
#line hidden
            EndContext();
            BeginContext(853, 35, true);
            WriteLiteral("</td>\r\n                        <td>");
            EndContext();
            BeginContext(889, 16, false);
#line 31 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(courses[i].Cname);

#line default
#line hidden
            EndContext();
            BeginContext(905, 35, true);
            WriteLiteral("</td>\r\n                        <td>");
            EndContext();
            BeginContext(941, 17, false);
#line 32 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(courses[i].Credit);

#line default
#line hidden
            EndContext();
            BeginContext(958, 35, true);
            WriteLiteral("</td>\r\n                        <td>");
            EndContext();
            BeginContext(994, 15, false);
#line 33 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(scores[i].Grade);

#line default
#line hidden
            EndContext();
            BeginContext(1009, 34, true);
            WriteLiteral("</td>\r\n                    </tr>\r\n");
            EndContext();
#line 35 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                }
                else
                {

#line default
#line hidden
            BeginContext(1103, 96, true);
            WriteLiteral("                    <tr>\r\n\r\n                        <td>已获得学分</td>\r\n                        <td>");
            EndContext();
            BeginContext(1200, 6, false);
#line 41 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                       Write(credit);

#line default
#line hidden
            EndContext();
            BeginContext(1206, 145, true);
            WriteLiteral("</td>\r\n                        <td>  </td>\r\n                        <td>  </td>\r\n                        <td>  </td>\r\n                    </tr>\r\n");
            EndContext();
#line 46 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showscores.cshtml"
                }
            }

#line default
#line hidden
            BeginContext(1385, 48, true);
            WriteLiteral("        </tbody>\r\n    </table>\r\n</section>\r\n\r\n\r\n");
            EndContext();
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Student.ShowscoresModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowscoresModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowscoresModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Student.ShowscoresModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591
