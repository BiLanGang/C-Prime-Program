#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "a8000a676e60f9f41db841005c7c267b2502961c"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_Showcer), @"mvc.1.0.razor-page", @"/Views/Student/Showcer.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Student/Showcer.cshtml", typeof(AspNetCore.Views_Student_Showcer), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"a8000a676e60f9f41db841005c7c267b2502961c", @"/Views/Student/Showcer.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_Showcer : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
  
    var cers = ViewBag.cers as List<Certificate>;
    Layout = "_StuLayout";

#line default
#line hidden
            BeginContext(139, 421, true);
            WriteLiteral(@"<section class=""panel"">
    <header class=""panel-heading"">
        学生证书信息
    </header>
    <table class=""table"">
        <thead>
            <tr>
                <th>序号</th>
                <th>学号</th>
                <th>证书编号</th>
                <th>证书名称</th>
                <th>发证日期</th>
                <th>证书类别</th>
                <th>发证单位</th>
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 24 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
             for (int i = 0; i < cers.Count(); i++)
            {

#line default
#line hidden
            BeginContext(628, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(675, 1, false);
#line 27 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(676, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(708, 11, false);
#line 28 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Sno);

#line default
#line hidden
            EndContext();
            BeginContext(719, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(751, 13, false);
#line 29 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Cerno);

#line default
#line hidden
            EndContext();
            BeginContext(764, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(796, 15, false);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Cername);

#line default
#line hidden
            EndContext();
            BeginContext(811, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(843, 15, false);
#line 31 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Cerdate);

#line default
#line hidden
            EndContext();
            BeginContext(858, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(890, 15, false);
#line 32 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Certype);

#line default
#line hidden
            EndContext();
            BeginContext(905, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(937, 18, false);
#line 33 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
                   Write(cers[i].Cercompany);

#line default
#line hidden
            EndContext();
            BeginContext(955, 30, true);
            WriteLiteral("</td>\r\n                </tr>\r\n");
            EndContext();
#line 35 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcer.cshtml"
            }

#line default
#line hidden
            BeginContext(1000, 44, true);
            WriteLiteral("        </tbody>\r\n    </table>\r\n</section>\r\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Student.ShowcerModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowcerModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowcerModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Student.ShowcerModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591
