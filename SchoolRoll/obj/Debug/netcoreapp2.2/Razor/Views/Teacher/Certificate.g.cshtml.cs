#pragma checksum "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Certificate.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "73ccd7207e1e51b3c10b081770d24d58dd568052"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Teacher_Certificate), @"mvc.1.0.razor-page", @"/Views/Teacher/Certificate.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.RazorPages.Infrastructure.RazorPageAttribute(@"/Views/Teacher/Certificate.cshtml", typeof(AspNetCore.Views_Teacher_Certificate), null)]
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
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"73ccd7207e1e51b3c10b081770d24d58dd568052", @"/Views/Teacher/Certificate.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"be3fad64ba03d6e01d9b6f3120302b35526f2d83", @"/Views/_ViewImports.cshtml")]
    public class Views_Teacher_Certificate : global::Microsoft.AspNetCore.Mvc.RazorPages.Page
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
#line 3 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Certificate.cshtml"
  
    Layout = "_TeaLayout";

#line default
#line hidden
            BeginContext(92, 185, true);
            WriteLiteral("<section class=\"panel\">\r\n    <header class=\"panel-heading\">\r\n        证书信息录入\r\n    </header>\r\n    <div class=\"panel-body\">\r\n        <div class=\"form-horizontal \" action=\"#\">\r\n            ");
            EndContext();
            BeginContext(277, 2641, false);
            __tagHelperExecutionContext = __tagHelperScopeManager.Begin("form", global::Microsoft.AspNetCore.Razor.TagHelpers.TagMode.StartTagAndEndTag, "73ccd7207e1e51b3c10b081770d24d58dd5680524026", async() => {
                BeginContext(341, 2570, true);
                WriteLiteral(@"
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">学号</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Sno"" value="""" placeholder=""请输入学号"" />
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">证书编号</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Cerno"" value="""" placeholder=""请输入证书编号"" />
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">证书名称</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                    ");
                WriteLiteral(@"        <input type=""text"" name=""Cername"" value="""" placeholder=""证书名称"" />
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">发证日期</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Cerdate"" value="""" placeholder=""格式（xx-xx-xx）"" />
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label class=""control-label col-sm-4"">证书类别</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Certype"" value="""" placeholder=""请输入类别"" />
                        </p>
                    </div>
                </div>
                <div class=""form-group"">
                    <label cl");
                WriteLiteral(@"ass=""control-label col-sm-4"">发证单位</label>
                    <div class=""col-sm-6"">
                        <p size=""16"" class=""form-control"">
                            <input type=""text"" name=""Cercompany"" value="""" placeholder=""请输入单位名称"" />
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
#line 12 "C:\Users\王奔\source\repos\SchoolRoll\SchoolRoll\Views\Teacher\Certificate.cshtml"
AddHtmlAttributeValue("", 291, Url.Action("Insertcer","Teacher"), 291, 34, false);

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
            BeginContext(2918, 44, true);
            WriteLiteral("\r\n        </div>\r\n    </div>\r\n</section>\r\n\r\n");
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
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<SchoolRoll.Views.Teacher.CertificateModel> Html { get; private set; }
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.CertificateModel> ViewData => (global::Microsoft.AspNetCore.Mvc.ViewFeatures.ViewDataDictionary<SchoolRoll.Views.Teacher.CertificateModel>)PageContext?.ViewData;
        public SchoolRoll.Views.Teacher.CertificateModel Model => ViewData.Model;
    }
}
#pragma warning restore 1591
