#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "1d05b36e0a7f4d2943d34ecf3d9a8196693eb0bc"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_ProfessionalCore), @"mvc.1.0.razor-page", @"/Views/Student/ProfessionalCore.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Student/ProfessionalCore.cshtml", typeof(AspNetCore.Views_Student_ProfessionalCore), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"1d05b36e0a7f4d2943d34ecf3d9a8196693eb0bc", @"/Views/Student/ProfessionalCore.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_ProfessionalCore : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
  
    var courses = ViewBag.courses as List<Course>;
    Layout = "_StuLayout";

#line default
#line hidden
            BeginContext(149, 392, true);
            WriteLiteral(@"<section class=""panel"">
    <header class=""panel-heading"">
        专业方向课程
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
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 23 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
             for (int i = 0; i < courses.Count(); i++)
            {

#line default
#line hidden
            BeginContext(612, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(659, 1, false);
#line 26 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(660, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(692, 14, false);
#line 27 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(courses[i].Cno);

#line default
#line hidden
            EndContext();
            BeginContext(706, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(738, 16, false);
#line 28 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(courses[i].Cname);

#line default
#line hidden
            EndContext();
            BeginContext(754, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(786, 17, false);
#line 29 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(courses[i].Credit);

#line default
#line hidden
            EndContext();
            BeginContext(803, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(835, 16, false);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(courses[i].Ctype);

#line default
#line hidden
            EndContext();
            BeginContext(851, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(883, 18, false);
#line 31 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
                   Write(courses[i].Cperiod);

#line default
#line hidden
            EndContext();
            BeginContext(901, 27, true);
            WriteLiteral("</td>\r\n                    ");
            EndContext();
            BeginContext(928, 333, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "1d05b36e0a7f4d2943d34ecf3d9a8196693eb0bc6894", async() => {
                BeginContext(995, 80, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"hidden\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1075, "", 1097, 1);
#line 34 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
WriteAttributeValue("", 1082, courses[i].Cno, 1082, 15, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1097, 157, true);
                WriteLiteral(" name=\"Cno\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"选课\" />\r\n\r\n                        </td>\r\n                    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 32 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"
AddHtmlAttributeValue("", 942, Url.Action("Insertcourse","Student"), 942, 37, false);

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
            BeginContext(1261, 25, true);
            WriteLiteral("\r\n                </tr>\r\n");
            EndContext();
#line 40 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ProfessionalCore.cshtml"

            }

#line default
#line hidden
            BeginContext(1303, 48, true);
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Student.ProfessionalCoreModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ProfessionalCoreModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Student.ProfessionalCoreModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Student.ProfessionalCoreModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591