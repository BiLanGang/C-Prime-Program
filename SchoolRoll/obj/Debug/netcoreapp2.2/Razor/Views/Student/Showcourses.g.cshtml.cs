#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "ab96543c5b59282580ec64ea763d20b19d72b536"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_Showcourses), @"mvc.1.0.razor-page", @"/Views/Student/Showcourses.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Student/Showcourses.cshtml", typeof(AspNetCore.Views_Student_Showcourses), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"ab96543c5b59282580ec64ea763d20b19d72b536", @"/Views/Student/Showcourses.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_Showcourses : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
    {
        private static readonly global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute __tagHelperAttribute_0 = new global::Microsoft.AspNetCore.Razor.TagHelpers.TagHelperAttribute("method", "post", global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
        #line hidden
        #pragma warning disable 0169
        private string __tagHelperStringValueBuffer;
        #pragma warning restore 0169
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperExecutionContext __tagHelperExecutionContext;
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperRunner __tagHelperRunner = new global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperRunner();
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager __backed__tagHelperScopeManager = null;
        private global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager __tagHelperScopeManager
        {
            get
            {
                if (__backed__tagHelperScopeManager == null)
                {
                    __backed__tagHelperScopeManager = new global::Microsoft.AspNetCore.Razor.Runtime.TagHelpers.TagHelperScopeManager(StartTagHelperWritingScope, EndTagHelperWritingScope);
                }
                return __backed__tagHelperScopeManager;
            }
        }
        private global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper;
        private global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper;
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
  
    var courses = ViewBag.courses as List<Course>;
    var scores = ViewBag.scores;
    Layout = "_StuLayout";

#line default
#line hidden
            BeginContext(178, 419, true);
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
                <th>课程类别</th>
                <th>课程学时</th>
                <th>备注</th>
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 25 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
             for (int i = 0; i < courses.Count(); i++)
            {

#line default
#line hidden
            BeginContext(668, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(715, 1, false);
#line 28 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(716, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(748, 14, false);
#line 29 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(courses[i].Cno);

#line default
#line hidden
            EndContext();
            BeginContext(762, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(794, 16, false);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(courses[i].Cname);

#line default
#line hidden
            EndContext();
            BeginContext(810, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(842, 17, false);
#line 31 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(courses[i].Credit);

#line default
#line hidden
            EndContext();
            BeginContext(859, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(891, 16, false);
#line 32 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(courses[i].Ctype);

#line default
#line hidden
            EndContext();
            BeginContext(907, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(939, 18, false);
#line 33 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                   Write(courses[i].Cperiod);

#line default
#line hidden
            EndContext();
            BeginContext(957, 7, true);
            WriteLiteral("</td>\r\n");
            EndContext();
#line 34 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                       if (scores[i].Grade == null)
                        {

#line default
#line hidden
            BeginContext(1044, 21, true);
            WriteLiteral("                     ");
            EndContext();
            BeginContext(1065, 337, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "ab96543c5b59282580ec64ea763d20b19d72b5367185", async() => {
                BeginContext(1130, 80, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"hidden\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1210, "", 1232, 1);
#line 38 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
WriteAttributeValue("", 1217, courses[i].Cno, 1217, 15, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1232, 163, true);
                WriteLiteral(" name=\"course_id\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"退课\" />\r\n                        </td>\r\n                      ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 36 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
AddHtmlAttributeValue("", 1079, Url.Action("Delcourse", "Student"), 1079, 35, false);

#line default
#line hidden
            EndAddHtmlAttributeValues(__tagHelperExecutionContext);
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper.Method = (string)__tagHelperAttribute_0.Value;
            __tagHelperExecutionContext.AddTagHelperAttribute(__tagHelperAttribute_0);
            await __tagHelperRunner.RunAsync(__tagHelperExecutionContext);
            if (!__tagHelperExecutionContext.Output.IsContentModified)
            {
                await __tagHelperExecutionContext.SetOutputContentAsync();
            }
            Write(__tagHelperExecutionContext.Output);
            __tagHelperExecutionContext = __tagHelperScopeManager.End();
            EndContext();
            BeginContext(1402, 2, true);
            WriteLiteral("\r\n");
            EndContext();
#line 42 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                        }
                        else
                        {

#line default
#line hidden
            BeginContext(1488, 42, true);
            WriteLiteral("                            <td>已修读</td>\r\n");
            EndContext();
#line 46 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"
                        }
                        

#line default
#line hidden
            BeginContext(1584, 27, true);
            WriteLiteral("\r\n\r\n                </tr>\r\n");
            EndContext();
#line 51 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\Showcourses.cshtml"

            }

#line default
#line hidden
            BeginContext(1628, 46, true);
            WriteLiteral("        </tbody>\r\n    </table>\r\n</section>\r\n\r\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Student.ShowcoursesModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowcoursesModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ShowcoursesModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Student.ShowcoursesModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591
