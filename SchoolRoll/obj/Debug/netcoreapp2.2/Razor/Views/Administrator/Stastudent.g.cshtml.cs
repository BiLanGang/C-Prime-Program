#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "00879af46a908d5f5a0d8c1f5e0501a0b10e3278"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Administrator_Stastudent), @"mvc.1.0.razor-page", @"/Views/Administrator/Stastudent.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Administrator/Stastudent.cshtml", typeof(AspNetCore.Views_Administrator_Stastudent), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"00879af46a908d5f5a0d8c1f5e0501a0b10e3278", @"/Views/Administrator/Stastudent.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Administrator_Stastudent : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
  
    var students = ViewBag.students as List<List<Student>>;
    Layout = "_AdmLayout";

#line default
#line hidden
            BeginContext(158, 341, true);
            WriteLiteral(@"<section class=""panel"">
    <header class=""panel-heading"">
        全部课程信息
    </header>

    <table class=""table"">
        <thead>           
            <tr>
                <th>序号</th>
                <th>学院名称</th>
                <th>学院人数</th>
                <th>操作</th>
            </tr>
        </thead>
        <tbody>
");
            EndContext();
#line 22 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
             for (int i = 0; i < students.Count(); i++)
            {

#line default
#line hidden
            BeginContext(571, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(618, 1, false);
#line 25 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
                   Write(i);

#line default
#line hidden
            EndContext();
            BeginContext(619, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(651, 36, false);
#line 26 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
                   Write(students[i][0].Schoolroll.Department);

#line default
#line hidden
            EndContext();
            BeginContext(687, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(719, 19, false);
#line 27 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
                   Write(students[i].Count());

#line default
#line hidden
            EndContext();
            BeginContext(738, 46, true);
            WriteLiteral("</td>                   \r\n                    ");
            EndContext();
            BeginContext(784, 379, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "00879af46a908d5f5a0d8c1f5e0501a0b10e32785766", async() => {
                BeginContext(852, 93, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"text\" name=\"Depname\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 945, "", 989, 1);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
WriteAttributeValue("", 952, students[i][0].Schoolroll.Department, 952, 37, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(989, 167, true);
                WriteLiteral(" style=\"display:none\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"查看\" />\r\n\r\n                        </td>\r\n                    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 28 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"
AddHtmlAttributeValue("", 798, Url.Action("ShowDep","Administrator"), 798, 38, false);

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
            BeginContext(1163, 25, true);
            WriteLiteral("\r\n                </tr>\r\n");
            EndContext();
#line 36 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\Stastudent.cshtml"

            }

#line default
#line hidden
            BeginContext(1205, 46, true);
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Administrator.StastudentModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Administrator.StastudentModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Administrator.StastudentModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Administrator.StastudentModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591