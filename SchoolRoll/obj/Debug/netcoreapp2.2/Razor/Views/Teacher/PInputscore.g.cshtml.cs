#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "cb2039befd14bcbd4a296c783114a2d4c28d5026"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Teacher_PInputscore), @"mvc.1.0.razor-page", @"/Views/Teacher/PInputscore.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Teacher/PInputscore.cshtml", typeof(AspNetCore.Views_Teacher_PInputscore), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"cb2039befd14bcbd4a296c783114a2d4c28d5026", @"/Views/Teacher/PInputscore.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Teacher_PInputscore : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
  
    var students = ViewBag.students as List<Student>;
    Layout = "_TeaLayout";

#line default
#line hidden
            BeginContext(146, 170, true);
            WriteLiteral("<section class=\"panel\">\r\n    <header class=\"panel-heading\">\r\n        学生成绩录入\r\n    </header>\r\n    <table class=\"table\">\r\n        <thead>\r\n            <tr>\r\n                ");
            EndContext();
            BeginContext(316, 397, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "cb2039befd14bcbd4a296c783114a2d4c28d50264064", async() => {
                BeginContext(376, 330, true);
                WriteLiteral(@"
                    <th>搜索</th>
                    <th>
                        <input type=""text"" name=""Sno"" value="""" placeholder=""请输入学生学号"" />
                    </th>
                    <th>
                        <input type=""submit"" class=""btn btn-primary"" value=""选择"" />
                    </th>
                ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
#line 14 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
AddHtmlAttributeValue("", 330, Url.Action("Input","Teacher"), 330, 30, false);

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
            BeginContext(713, 267, true);
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
#line 34 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
             for (int i = 0; i < students.Count(); i++)
            {

#line default
#line hidden
            BeginContext(1052, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(1099, 1, false);
#line 37 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(1100, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1132, 15, false);
#line 38 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
                   Write(students[i].Sno);

#line default
#line hidden
            EndContext();
            BeginContext(1147, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1179, 17, false);
#line 39 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
                   Write(students[i].Sname);

#line default
#line hidden
            EndContext();
            BeginContext(1196, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1228, 28, false);
#line 40 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
                   Write(students[i].Schoolroll.Major);

#line default
#line hidden
            EndContext();
            BeginContext(1256, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1288, 28, false);
#line 41 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
                   Write(students[i].Schoolroll.Class);

#line default
#line hidden
            EndContext();
            BeginContext(1316, 27, true);
            WriteLiteral("</td>\r\n                    ");
            EndContext();
            BeginContext(1343, 327, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "cb2039befd14bcbd4a296c783114a2d4c28d50268973", async() => {
                BeginContext(1403, 80, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"hidden\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1483, "", 1506, 1);
#line 44 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
WriteAttributeValue("", 1490, students[i].Sno, 1490, 16, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1506, 157, true);
                WriteLiteral(" name=\"Sno\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"选择\" />\r\n\r\n                        </td>\r\n                    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
#line 42 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
AddHtmlAttributeValue("", 1357, Url.Action("Input","Teacher"), 1357, 30, false);

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
            BeginContext(1670, 25, true);
            WriteLiteral("\r\n                </tr>\r\n");
            EndContext();
#line 50 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\PInputscore.cshtml"
            }

#line default
#line hidden
            BeginContext(1710, 46, true);
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Teacher.InputscoreModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.InputscoreModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.InputscoreModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Teacher.InputscoreModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591