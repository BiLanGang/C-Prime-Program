#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "47466e9b9df47454522b28a9c137ce793fd32658"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Teacher_Pirntcer), @"mvc.1.0.razor-page", @"/Views/Teacher/Pirntcer.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Teacher/Pirntcer.cshtml", typeof(AspNetCore.Views_Teacher_Pirntcer), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"47466e9b9df47454522b28a9c137ce793fd32658", @"/Views/Teacher/Pirntcer.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Teacher_Pirntcer : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
  
    var lists = ViewBag.lists as List<Student>;
    Layout = "_TeaLayout";

#line default
#line hidden
            BeginContext(138, 170, true);
            WriteLiteral("<section class=\"panel\">\r\n    <header class=\"panel-heading\">\r\n        证书信息查询\r\n    </header>\r\n    <table class=\"table\">\r\n        <thead>\r\n            <tr>\r\n                ");
            EndContext();
            BeginContext(308, 397, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "47466e9b9df47454522b28a9c137ce793fd326584034", async() => {
                BeginContext(368, 330, true);
                WriteLiteral(@"
                    <th>搜索</th>
                    <th>
                        <input type=""text"" name=""Sno"" value="""" placeholder=""请输入学生学号"" />
                    </th>
                    <th>
                        <input type=""submit"" class=""btn btn-primary"" value=""查看"" />
                    </th>
                ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 14 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
AddHtmlAttributeValue("", 322, Url.Action("Mycer","Teacher"), 322, 30, false);

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
            BeginContext(705, 267, true);
            WriteLiteral(@"
            </tr>
            <tr>
                <th>序号</th>
                <th>学号</th>
                <th>姓名</th>
                <th>专业</th>
                <th>班级</th>
                <th>操作</th>
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 34 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
             for (int i = 0; i < lists.Count(); i++)
            {

#line default
#line hidden
            BeginContext(1041, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(1088, 1, false);
#line 37 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(1089, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1121, 12, false);
#line 38 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
                   Write(lists[i].Sno);

#line default
#line hidden
            EndContext();
            BeginContext(1133, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1165, 14, false);
#line 39 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
                   Write(lists[i].Sname);

#line default
#line hidden
            EndContext();
            BeginContext(1179, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1211, 25, false);
#line 40 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
                   Write(lists[i].Schoolroll.Major);

#line default
#line hidden
            EndContext();
            BeginContext(1236, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1268, 25, false);
#line 41 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
                   Write(lists[i].Schoolroll.Class);

#line default
#line hidden
            EndContext();
            BeginContext(1293, 27, true);
            WriteLiteral("</td>\r\n                    ");
            EndContext();
            BeginContext(1320, 324, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "47466e9b9df47454522b28a9c137ce793fd326588907", async() => {
                BeginContext(1380, 80, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"hidden\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1460, "", 1480, 1);
#line 44 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
WriteAttributeValue("", 1467, lists[i].Sno, 1467, 13, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1480, 157, true);
                WriteLiteral(" name=\"Sno\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"查看\" />\r\n\r\n                        </td>\r\n                    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
#line 42 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
AddHtmlAttributeValue("", 1334, Url.Action("Mycer","Teacher"), 1334, 30, false);

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
            BeginContext(1644, 25, true);
            WriteLiteral("\r\n                </tr>\r\n");
            EndContext();
#line 50 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Pirntcer.cshtml"
            }

#line default
#line hidden
            BeginContext(1684, 44, true);
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Teacher.PirntcerModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.PirntcerModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.PirntcerModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Teacher.PirntcerModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591