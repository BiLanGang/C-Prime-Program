#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "96ead69dcfec0360ccada1b66ba49956906c4c11"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_ChangeInformation), @"mvc.1.0.razor-page", @"/Views/Student/ChangeInformation.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Student/ChangeInformation.cshtml", typeof(AspNetCore.Views_Student_ChangeInformation), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"96ead69dcfec0360ccada1b66ba49956906c4c11", @"/Views/Student/ChangeInformation.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_ChangeInformation : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 2 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
  
    var student = ViewBag.student as Student;
    Layout = "_StuLayout";

#line default
#line hidden
            BeginContext(89, 189, true);
            WriteLiteral("\r\n<section class=\"panel\">\r\n    <header class=\"panel-heading\">\r\n        个人基本信息修改\r\n    </header>\r\n    <div class=\"panel-body\">\r\n        <div class=\"form-horizontal \" action=\"#\">\r\n            ");
            EndContext();
            BeginContext(278, 2307, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "96ead69dcfec0360ccada1b66ba49956906c4c114127", async() => {
                BeginContext(344, 47, true);
                WriteLiteral("\r\n                <input type=\"text\" name=\"Sno\"");
                EndContext();
                BeginWriteAttribute("value", " value=", 391, "", 410, 1);
#line 14 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
WriteAttributeValue("", 398, student.Sno, 398, 12, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(410, 241, true);
                WriteLiteral("  style=\"display:none\" />\r\n                <div class=\"form-group\">\r\n                    <label class=\"control-label col-sm-4\">姓名</label>\r\n                    <div class=\"col-sm-6\">\r\n                        <p size=\"16\" class=\"form-control\">");
                EndContext();
                BeginContext(652, 13, false);
#line 18 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
                                                     Write(student.Sname);

#line default
#line hidden
                EndContext();
                BeginContext(665, 272, true);
                WriteLiteral(@"</p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">年龄</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">");
                EndContext();
                BeginContext(938, 12, false);
#line 24 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
                                                     Write(student.Sage);

#line default
#line hidden
                EndContext();
                BeginContext(950, 272, true);
                WriteLiteral(@"</p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">性别</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">");
                EndContext();
                BeginContext(1223, 12, false);
#line 30 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
                                                     Write(student.Ssex);

#line default
#line hidden
                EndContext();
                BeginContext(1235, 274, true);
                WriteLiteral(@"</p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">出生日期</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">");
                EndContext();
                BeginContext(1510, 17, false);
#line 36 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
                                                     Write(student.Sbirthday);

#line default
#line hidden
                EndContext();
                BeginContext(1527, 338, true);
                WriteLiteral(@"</p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">家庭住址</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Saddress""");
                EndContext();
                BeginWriteAttribute("value", " value=", 1865, "", 1889, 1);
#line 43 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
WriteAttributeValue("", 1872, student.Saddress, 1872, 17, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(1889, 389, true);
                WriteLiteral(@" />                        
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">联系电话</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Sphone""");
                EndContext();
                BeginWriteAttribute("value", " value=", 2278, "", 2300, 1);
#line 51 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
WriteAttributeValue("", 2285, student.Sphone, 2285, 15, false);

#line default
#line hidden
                EndWriteAttribute();
                BeginContext(2300, 278, true);
                WriteLiteral(@" />
                        </p>
                    </div>
                </div>
                <div class=""col-sm-6"">
                    <button type=""submit"" class=""btn btn-primary"" style=""display:block;margin:0 auto"">提交</button>
                </div>
            ");
                EndContext();
            }
            );
            __Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.FormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_FormTagHelper);
            __Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper = CreateTagHelper<global::Microsoft.AspNetCore.Mvc.TagHelpers.RenderAtEndOfFormTagHelper>();
            __tagHelperExecutionContext.Add(__Microsoft_AspNetCore_Mvc_TagHelpers_RenderAtEndOfFormTagHelper);
            BeginAddHtmlAttributeValues(__tagHelperExecutionContext, "action", 1, global::Microsoft.AspNetCore.Razor.TagHelpers.HtmlAttributeValueStyle.DoubleQuotes);
#line 13 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Student\ChangeInformation.cshtml"
AddHtmlAttributeValue("", 292, Url.Action("ChangeInfor","Student"), 292, 36, false);

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
            BeginContext(2585, 43, true);
            WriteLiteral("\r\n        </div>\r\n     </div>\r\n</section>\r\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<Views_Student_ChangeInformation> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<Views_Student_ChangeInformation> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<Views_Student_ChangeInformation>)PageContext?.ViewData;
        public Views_Student_ChangeInformation Model => ViewData.Model;
    }
}
#pragma warning restore 1591