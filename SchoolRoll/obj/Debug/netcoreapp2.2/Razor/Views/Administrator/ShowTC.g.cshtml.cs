#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "ac100e506ca819b2d6198ccb84ef5655f6ccaefd"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Administrator_ShowTC), @"mvc.1.0.razor-page", @"/Views/Administrator/ShowTC.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Administrator/ShowTC.cshtml", typeof(AspNetCore.Views_Administrator_ShowTC), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"ac100e506ca819b2d6198ccb84ef5655f6ccaefd", @"/Views/Administrator/ShowTC.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Administrator_ShowTC : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
  
    Layout = "_AdmLayout";
    var courses = ViewBag.courses as List<Course>;
    var Tno = ViewBag.Tno as string;

#line default
#line hidden
            BeginContext(183, 168, true);
            WriteLiteral("<section class=\"panel\">\r\n    <header class=\"panel-heading\">\r\n        授课信息\r\n    </header>\r\n    <table class=\"table\">\r\n        <thead>\r\n            <tr>\r\n                ");
            EndContext();
            BeginContext(351, 513, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "ac100e506ca819b2d6198ccb84ef5655f6ccaefd4105", async() => {
                BeginContext(423, 216, true);
                WriteLiteral("\r\n                    <th>添加</th>\r\n                    <th>\r\n                        <input type=\"text\" name=\"course_id\" value=\"\" placeholder=\"请输入课程编号\" />\r\n                        <input type=\"text\" name=\"Teacher_id\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 639, "", 650, 1);
#line 19 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
WriteAttributeValue("", 646, Tno, 646, 4, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(650, 207, true);
                WriteLiteral("  style=\"display:none\" />\r\n                    </th>\r\n                    <th>\r\n                        <input type=\"submit\" class=\"btn btn-primary\" value=\"添加\" />\r\n                    </th>\r\n                ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 15 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
AddHtmlAttributeValue("", 365, Url.Action("AddTCcourse","Administrator"), 365, 42, false);

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
            BeginContext(864, 245, true);
            WriteLiteral("\r\n            </tr>\r\n            <tr>\r\n                <th>课程编号</th>\r\n                <th>课程名</th>\r\n                <th>学分</th>\r\n                <th>学时</th>\r\n                <th>课程操作</th>\r\n\r\n            </tr>\r\n        </thead>\r\n        <tbody>\r\n");
            EndContext();
#line 36 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
             for (int i = 0; i < courses.Count(); i++)
            {

#line default
#line hidden
            BeginContext(1180, 46, true);
            WriteLiteral("                <tr>\r\n                    <td>");
            EndContext();
            BeginContext(1227, 14, false);
#line 39 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
                   Write(courses[i].Cno);

#line default
#line hidden
            EndContext();
            BeginContext(1241, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1273, 16, false);
#line 40 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
                   Write(courses[i].Cname);

#line default
#line hidden
            EndContext();
            BeginContext(1289, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1321, 17, false);
#line 41 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
                   Write(courses[i].Credit);

#line default
#line hidden
            EndContext();
            BeginContext(1338, 31, true);
            WriteLiteral("</td>\r\n                    <td>");
            EndContext();
            BeginContext(1370, 18, false);
#line 42 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
                   Write(courses[i].Cperiod);

#line default
#line hidden
            EndContext();
            BeginContext(1388, 27, true);
            WriteLiteral("</td>\r\n                    ");
            EndContext();
            BeginContext(1415, 462, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "ac100e506ca819b2d6198ccb84ef5655f6ccaefd9169", async() => {
                BeginContext(1487, 95, true);
                WriteLiteral("\r\n                        <td>\r\n                            <input type=\"text\" name=\"course_id\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1582, "", 1604, 1);
#line 45 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
WriteAttributeValue("", 1589, courses[i].Cno, 1589, 15, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1604, 90, true);
                WriteLiteral(" style=\"display:none\" />\r\n                            <input type=\"text\" name=\"Teacher_id\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 1694, "", 1705, 1);
#line 46 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
WriteAttributeValue("", 1701, Tno, 1701, 4, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1705, 165, true);
                WriteLiteral(" style=\"display:none\" />\r\n                            <input type=\"submit\" class=\"btn btn-primary\" value=\"删除\" />\r\n                        </td>\r\n                    ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.SingleQuotes);
#line 43 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
AddHtmlAttributeValue("", 1429, Url.Action("DelTCcourse","Administrator"), 1429, 42, false);

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
            BeginContext(1877, 25, true);
            WriteLiteral("\r\n                </tr>\r\n");
            EndContext();
#line 51 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Administrator\ShowTC.cshtml"
            }

#line default
#line hidden
            BeginContext(1917, 42, true);
            WriteLiteral("        </tbody>\r\n    </table>\r\n</section>");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Administrator.ShowTCModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Administrator.ShowTCModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Administrator.ShowTCModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Administrator.ShowTCModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591
