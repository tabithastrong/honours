#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Collections.Generic.ICollection`1<Newtonsoft.Json.Converters.IXmlNode>
struct ICollection_1_t6B73DF825EDF4D40BAF229BE5B2F243DE578A320;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>
struct IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct KeyCollection_t34BD3DC7B6AF1A7C0E4E029F67E6D7F5FEEFF1A7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE;
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct ValueCollection_t80B1B4C5AB0920432CFE083DB1D0263653DBE26A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>[]
struct EntryU5BU5D_t9A9DDAFC35A7F055097CB97DBAFEC3AF7D3E4BBB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5;
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Newtonsoft.Json.Converters.IXmlNode[]
struct IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext[]
struct ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1;
// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8;
// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09;
// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB;
// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE;
// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423;
// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1;
// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4;
// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Xml.DomNameTable
struct DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Converters.IXmlDocument
struct IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726;
// Newtonsoft.Json.Converters.IXmlElement
struct IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF;
// Newtonsoft.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// Newtonsoft.Json.Converters.XContainerWrapper
struct XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// Newtonsoft.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6;
// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909;
// Newtonsoft.Json.Converters.XElementWrapper
struct XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61;
// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C;
// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C;
// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// Newtonsoft.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624;
// System.Xml.XmlImplementation
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B;
// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF;
// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0;
IL2CPP_EXTERN_C String_t* _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F;
IL2CPP_EXTERN_C String_t* _stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E;
IL2CPP_EXTERN_C String_t* _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075;
IL2CPP_EXTERN_C String_t* _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93;
IL2CPP_EXTERN_C String_t* _stringLiteral1613296BA787F8ADE0D3584C042EB5CB7EE8B9EC;
IL2CPP_EXTERN_C String_t* _stringLiteral161567E318CEB965509FE84CE4198A12E62440AF;
IL2CPP_EXTERN_C String_t* _stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894;
IL2CPP_EXTERN_C String_t* _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973;
IL2CPP_EXTERN_C String_t* _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564;
IL2CPP_EXTERN_C String_t* _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
IL2CPP_EXTERN_C String_t* _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5;
IL2CPP_EXTERN_C String_t* _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D;
IL2CPP_EXTERN_C String_t* _stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral810C723B6D33105E6B3277736A780EFDA0438806;
IL2CPP_EXTERN_C String_t* _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1D2D945693CD525D0A8B33864CE6DE9C583278;
IL2CPP_EXTERN_C String_t* _stringLiteral8F520303D59E86AC4C7A7D3637D6BFB77BF0A90F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA;
IL2CPP_EXTERN_C String_t* _stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2;
IL2CPP_EXTERN_C String_t* _stringLiteral9A514EDAC534931C94A111265660666E05658496;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18;
IL2CPP_EXTERN_C String_t* _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73;
IL2CPP_EXTERN_C String_t* _stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45;
IL2CPP_EXTERN_C String_t* _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029;
IL2CPP_EXTERN_C String_t* _stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionUtils_IsNullOrEmpty_TisIXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_mC2AFA22D33E84D3181065F694089A762D26AE451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFD7E775C8CC485679562031627B69B74FC0C5556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m92C744D5C7754975415AF800D969C4BC9CDAF840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m525922E71F47CBC23945A74F44EAF148B5B4D827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6F503D135D9875E6C5EC2AE33CCB3CD3BD513D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE1299A8580EC7869F8C751D0A54B0930C8F5357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4D7366AFA49151C356A17BADDABE9825BC8C4E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m050BB355FCDC625D10AC0F3B470B943B1FF36E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BB6C47BF7BDF19E19DFDA5F36D84C1A9286B223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1D190BFD87B61A6BAD48FB60B305A246EB42781F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9A9DDAFC35A7F055097CB97DBAFEC3AF7D3E4BBB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t34BD3DC7B6AF1A7C0E4E029F67E6D7F5FEEFF1A7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t80B1B4C5AB0920432CFE083DB1D0263653DBE26A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>
struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonPropertyU5BU5D_tE77AACFC9C5CEE1F990C258B77C2C1BBBBC583E5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>
struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonTokenU5BU5D_tE5ED6E776E77B95220ED90B899FC35F33C39BD07* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXmlNodeU5BU5D_tC17675D27C440349A4AC7A7A4967E9E2245B5CD8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>
struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContainerContextU5BU5D_tE42AA5D2C4E0FD7AC139F4E619241748C176783E* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09  : public RuntimeObject
{
	// System.IO.BinaryWriter Newtonsoft.Json.Bson.BsonBinaryWriter::_writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ____writer_1;
	// System.Byte[] Newtonsoft.Json.Bson.BsonBinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_2;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::<DateTimeKindHandling>k__BackingField
	int32_t ___U3CDateTimeKindHandlingU3Ek__BackingField_3;
};

struct BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields
{
	// System.Text.Encoding Newtonsoft.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
};

// Newtonsoft.Json.Bson.BsonObjectId
struct BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2  : public RuntimeObject
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_0;
};

// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CValueU3Ek__BackingField_1;
};

// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___U3CParentU3Ek__BackingField_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonToken::<CalculatedSize>k__BackingField
	int32_t ___U3CCalculatedSizeU3Ek__BackingField_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C  : public RuntimeObject
{
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::_ns
	XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ____ns_0;
	// System.String System.Xml.Linq.XName::_localName
	String_t* ____localName_1;
	// System.Int32 System.Xml.Linq.XName::_hashCode
	int32_t ____hashCode_2;
};

// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C  : public RuntimeObject
{
	// System.String System.Xml.Linq.XNamespace::_namespaceName
	String_t* ____namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::_hashCode
	int32_t ____hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::_names
	XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5* ____names_6;
};

struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C_StaticFields
{
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::s_namespaces
	XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46* ___s_namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refNone
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXml
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXmlns
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXmlns_3;
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// Newtonsoft.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16  : public RuntimeObject
{
	// System.Xml.Linq.XObject Newtonsoft.Json.Converters.XObjectWrapper::_xmlObject
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ____xmlObject_1;
};

struct XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_StaticFields
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XObjectWrapper::EmptyChildNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___EmptyChildNodes_0;
};

// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F  : public RuntimeObject
{
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode_0;
};

// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991  : public RuntimeObject
{
	// System.Xml.XmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ____node_0;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____childNodes_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_attributes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____attributes_2;
};

// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF  : public RuntimeObject
{
};

// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A  : public RuntimeObject
{
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonProperty>
struct Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Bson.BsonToken>
struct Enumerator_t597C435D76D0912631AF7909B79461C347020E0C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>
struct Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Newtonsoft.Json.Bson.BsonArray
struct BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::_children
	List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* ____children_2;
};

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::_children
	List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* ____children_2;
};

// Newtonsoft.Json.Bson.BsonRegex
struct BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3CPatternU3Ek__BackingField_2;
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___U3COptionsU3Ek__BackingField_3;
};

// Newtonsoft.Json.Bson.BsonValue
struct BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660  : public BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4
{
	// System.Object Newtonsoft.Json.Bson.BsonValue::_value
	RuntimeObject* ____value_2;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::_type
	int8_t ____type_3;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46  : public XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8
{
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::entries
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* ___entries_0;
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_1;
	// System.Int32 System.Xml.NameTable::mask
	int32_t ___mask_2;
	// System.Int32 System.Xml.NameTable::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;
};

// Newtonsoft.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
};

// Newtonsoft.Json.Converters.XContainerWrapper
struct XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9  : public XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XContainerWrapper::_childNodes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____childNodes_2;
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45* ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject* ___objLock_40;
};

struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;
};

// Newtonsoft.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624  : public XmlNodeWrapper_tE399A7CC58A6C5CE54C6EFE0D075A7B88C71B991
{
	// System.Xml.XmlDocument Newtonsoft.Json.Converters.XmlDocumentWrapper::_document
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ____document_3;
};

// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// System.String Newtonsoft.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_9;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE__padding[6];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>
struct Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2100A0BC4744267E7860382071B8C5AC5C15E6CD_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::3DE43C11C7130AF9014115BCDC2584DFE6B50579
	__StaticArrayInitTypeSizeU3D6_tDB565845177A27186A10B7E9A656A02A889729EE ___3DE43C11C7130AF9014115BCDC2584DFE6B50579_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t0100FD18FF65715BC25E2BF08EC7C3052FDE2A77 ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_tE90359F0CD1BEDE1C7689E8B514B601C509627D0 ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t2D94270D7B052DF2B0E1709CF65BBFB0CC814D8F ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_tAB96EF88882201B83E07D300C007D1D396914920 ___E92B39D8233061927D9ACDE54665E68E7535635A_5;
};

// Newtonsoft.Json.Bson.BsonBinary
struct BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::<BinaryType>k__BackingField
	uint8_t ___U3CBinaryTypeU3Ek__BackingField_4;
};

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE  : public BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660
{
	// System.Int32 Newtonsoft.Json.Bson.BsonString::<ByteCount>k__BackingField
	int32_t ___U3CByteCountU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Bson.BsonString::<IncludeLength>k__BackingField
	bool ___U3CIncludeLengthU3Ek__BackingField_5;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_12;
};

struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTempate_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// Newtonsoft.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6  : public XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9
{
};

// Newtonsoft.Json.Converters.XElementWrapper
struct XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61  : public XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XElementWrapper::_attributes
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ____attributes_3;
};

// Newtonsoft.Json.Bson.BsonReader
struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423  : public JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765
{
	// System.IO.BinaryReader Newtonsoft.Json.Bson.BsonReader::_reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____reader_20;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext> Newtonsoft.Json.Bson.BsonReader::_stack
	List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* ____stack_21;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_22;
	// System.Char[] Newtonsoft.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_23;
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_24;
	// Newtonsoft.Json.Bson.BsonReader/BsonReaderState Newtonsoft.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_25;
	// Newtonsoft.Json.Bson.BsonReader/ContainerContext Newtonsoft.Json.Bson.BsonReader::_currentContext
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ____currentContext_26;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_27;
	// System.Boolean Newtonsoft.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_28;
	// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_29;
};

struct BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields
{
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange1_16;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange2_17;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange3_18;
	// System.Byte[] Newtonsoft.Json.Bson.BsonReader::SeqRange4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange4_19;
};

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456  : public JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3
{
	// Newtonsoft.Json.Bson.BsonBinaryWriter Newtonsoft.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* ____writer_13;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____root_14;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ____parent_15;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_16;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_4;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___lastAttr_5;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
};

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsNullOrEmpty<System.Object>(System.Collections.Generic.ICollection`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionUtils_IsNullOrEmpty_TisRuntimeObject_mAFCACA9516012D50B5C162DB94770E10C8587B22_gshared (RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::.ctor()
inline void List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object Newtonsoft.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) ;
// System.Xml.Linq.XAttribute Newtonsoft.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3 (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::WrapNode(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_WrapNode_mEB4F3360D23E79A87515F9D7B437F9BFE59793B5 (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___node0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XContainerWrapper::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___container0, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement Newtonsoft.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m26111A020919619F03525ED30091D4501090075B (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, RuntimeObject* ___content0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Add(T)
inline void List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::GetEnumerator()
inline Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::Dispose()
inline void Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Newtonsoft.Json.Converters.IXmlNode>::MoveNext()
inline bool Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88 (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_op_Implicit_mFC85EBDA8EF02294034DF34A29E49812427EA566 (String_t* ___expandedName0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0 (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Insert(System.Int32,T)
inline void List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XContainerWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42 (XContainerWrapper_t7B103CDF831C64B07E4BABE6307FB7D605328AF9* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* XNamespace_op_Implicit_mB3CFEDB71BE0ADF3DA186F884778281AF3F96D3E (String_t* ___namespaceName0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ___ns0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.NameTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* __this, XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_mE6D50930A0A54ADB2FB665891D9CA1F669F11AE0 (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Reverse()
inline void List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.String System.Xml.XmlConvert::DecodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_DecodeName_m0A515523E8424058C10863C8B3B0FDA0B63DD329 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlConvert_ToBoolean_mC9C05B76ECCD48E206BF6AD704A9742C88A6DBB4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::.ctor()
inline void Dictionary_2__ctor_m6F503D135D9875E6C5EC2AE33CCB3CD3BD513D8D (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815 (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m525922E71F47CBC23945A74F44EAF148B5B4D827 (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* __this, String_t* ___key0, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598*, String_t*, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFD7E775C8CC485679562031627B69B74FC0C5556 (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* __this, String_t* ___key0, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598*, String_t*, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::get_Count()
inline int32_t List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::GetEnumerator()
inline Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718 Dictionary_2_GetEnumerator_m92C744D5C7754975415AF800D969C4BC9CDAF840 (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718 (*) (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::Dispose()
inline void Enumerator_Dispose_mCE1299A8580EC7869F8C751D0A54B0930C8F5357 (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::get_Current()
inline KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 Enumerator_get_Current_m050BB355FCDC625D10AC0F3B470B943B1FF36E57_inline (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 (*) (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::get_Value()
inline List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* KeyValuePair_2_get_Value_m1D190BFD87B61A6BAD48FB60B305A246EB42781F_inline (KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1* __this, const RuntimeMethod* method)
{
	return ((  List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* (*) (KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BB6C47BF7BDF19E19DFDA5F36D84C1A9286B223_inline (KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>>::MoveNext()
inline bool Enumerator_MoveNext_m4D7366AFA49151C356A17BADDABE9825BC8C4E8F (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::AllSameName(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_m504FAB958B80F2F01CA37C6F79043FC5F5550E2E (RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___c0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsNullOrEmpty<Newtonsoft.Json.Converters.IXmlNode>(System.Collections.Generic.ICollection`1<T>)
inline bool CollectionUtils_IsNullOrEmpty_TisIXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_mC2AFA22D33E84D3181065F694089A762D26AE451 (RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))CollectionUtils_IsNullOrEmpty_TisRuntimeObject_mAFCACA9516012D50B5C162DB94770E10C8587B22_gshared)(___collection0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XDocumentWrapper::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___document0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentWrapper__ctor_m2DDFA872888661813F74523693DB4A34FE765DFE (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XNode::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9 (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateDocumentType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_GetPrefix_m45A910FD0A5FBC96A5425EDC5BD480F788777D2F (String_t* ___qualifiedName0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_StartsWith_m5A1479282B22C45AF2AB1A67DB9AF70A8B4B82D9 (String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddAttribute(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_mD51E6A2203E35BD6E82C4D6CE85877AB53CAE7F8 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___attributeName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___attributePrefix5, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) ;
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.Xml.XmlConvert::EncodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EncodeName_m42879CBB7E33F534E7BA93890E4A830C5E5C6392 (String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mA1406B21E08189BC896A2260B9753AF60570DE1F (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m107060D51F6846EEE17E3F25663DE8CBF0D531B7 (int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mFA07C846C46E12A04FE92E9388CBE27146C47720 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m5E4CB5F0119A790789813DACE87198037B503361 (float ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mDD0C8022294099032F3EB91C4F6E0D4EEE2A270F (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m9AB2822ABA7C73BBABFA7A3D8318B602CD73C10B (double ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mB0FE0EF8913B62A513A8604E24D832B4F5CC9379 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mD498DD0E8B82A9E93A66FE61A9A977523C5D01CD (bool ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m1916FE1D2DEAAFF8E94A53DFF9C07DD1A996A8A9 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m61905AF8CBAC88A4891F90E763A1EFAE8B3EA74E (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeUtils_ToSerializationMode_m15A9BD3C2566B79A88A915187DE6BB7CE0FAEDA5 (int32_t ___kind0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m53BEA31146914B2252CA6CAFE2DA2360FA254078 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___dateTimeOption1, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonTokenUtils_IsPrimitiveToken_m98B1B260A486820D52E43B411B1655C15BFF9AEA (int32_t ___token0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Utilities.MathUtils::IntLength(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_IntLength_mBAFEF09419CEA67F2644A0723D668BE4E6400DE0 (uint64_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m2BB2FCE52968B106528283B6E972DCEB875128D9 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m8B6566AC54130989488A438E1145011B92E1F0D3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTimeOffset::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m1A78A1FC9604E80121288A6985CEF352038067C2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___offset1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___encoderShouldEmitUTF8Identifier0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587 (RuntimeObject* ___value0, String_t* ___parameterName1, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::.ctor()
inline void List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___newToken0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, int32_t ___newToken0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___newContext0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Count()
inline int32_t List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::get_Item(System.Int32)
inline ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98 (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonReader/ContainerContext>::Add(T)
inline void List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m15C298BDE61E3537C216A843315CD45862704BBD (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_ConvertJavaScriptTicksToDateTime_m06106AA819E24221772E74B545C218B6B4270E60 (int64_t ___javaScriptTicks0, const RuntimeMethod* method) ;
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::Add(T)
inline void List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::GetEnumerator()
inline Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011 (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty>::.ctor()
inline void List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::Add(T)
inline void List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::GetEnumerator()
inline Enumerator_t597C435D76D0912631AF7909B79461C347020E0C List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t597C435D76D0912631AF7909B79461C347020E0C (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken>::.ctor()
inline void List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1 (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonString::set_IncludeLength(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) ;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, String_t* ___message1, Exception_t* ___ex2, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___container0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___name0, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Char::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8 (Il2CppChar* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int8_t ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_EnsureDateTime_m5E553913ADE441BBA1B99CE6B1F4918111909837 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___timeZone1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::UpdateScopeWithFinishedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804 (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, int32_t ___tokenBeingWritten0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddWithResize(T)
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = ___xmlObject0;
		__this->____xmlObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xmlObject_1), (void*)L_0);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XObjectWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObjectWrapper_get_NodeType_m0EC8D2F38FAC096C9A1C91B78A107C89FE08B867 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_LocalName_mF7CD25C52F1D0EE14C5D9063035C27E1B237F421 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XObjectWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XObjectWrapper_get_ChildNodes_m43561E35BC5ECC8A22C56C1CB479B4CE638EB5B7 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ((XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_StaticFields*)il2cpp_codegen_static_fields_for(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XObjectWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XObjectWrapper_get_Attributes_m7C1E335535C8FB2A6685770BE0308503578EEFE5 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_0 = NULL;
	{
		V_0 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = V_0;
		return L_0;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_ParentNode_mFEE478450A586823D4E4F27B439C3B7CBD3167BE (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_Value_mE59398A1F64A5FB46732FF84DF7E263FB201CE38 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876 (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_set_Value_m722090806963BEA2AEE1CA30D109FAAA63A84876_RuntimeMethod_var)));
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_AppendChild_m93FD89B25381B97A651348E158D8E33E4F37821B_RuntimeMethod_var)));
	}
}
// System.String Newtonsoft.Json.Converters.XObjectWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_NamespaceUri_m5CD84D5CD1475CAC24C1535FBF1D65147E58987F (XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XObjectWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__cctor_m180B267BAB6CCE2154DCCE115E5167412C062E78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_0, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		((XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_StaticFields*)il2cpp_codegen_static_fields_for(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var))->___EmptyChildNodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_StaticFields*)il2cpp_codegen_static_fields_for(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var))->___EmptyChildNodes_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.Linq.XAttribute Newtonsoft.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573(__this, NULL);
		V_0 = ((XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)CastclassClass((RuntimeObject*)L_0, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0 = ___attribute0;
		il2cpp_codegen_runtime_class_init_inline(XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		XObjectWrapper__ctor_m24EB638F7E591225CA536A66FEE9B6EE6D7E8330(__this, L_0, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_Value_m8B697AE38E2DDBC0E31E7860009689FF5DA89BC2 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Converters.XAttributeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper_set_Value_mD597A9910BDDB6736C58E67F5D48D8E295FE242E (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_LocalName_m972043B9A5DD764604E5A3929625E04C0451D596 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Newtonsoft.Json.Converters.XAttributeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_NamespaceUri_m6923813F42B9F0ABB8F8B542EFE3BA4B797DABFF (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XAttributeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XAttributeWrapper_get_ParentNode_mA27F66095E98A673B04FBC961F3023F2D92467C8 (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_3;
		L_3 = XAttributeWrapper_get_Attribute_m64F72E3BA361213F069AF1897D47A9586F6FA2E6(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = XContainerWrapper_WrapNode_mEB4F3360D23E79A87515F9D7B437F9BFE59793B5(L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.Linq.XElement Newtonsoft.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573(__this, NULL);
		V_0 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_0, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper__ctor_mADC48A43A4BBD8C2FEBF88F4A45ED0CA69FAEC7F (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* ___element0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0 = ___element0;
		XContainerWrapper__ctor_mDA5B56465A0FE70773B861EC590E47653923DFC4(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_SetAttributeNode_m87ADF1FE3CAA994A2B35154DB1EA020E530FF195 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, RuntimeObject* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___attribute0;
		V_0 = ((XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16*)CastclassClass((RuntimeObject*)L_0, XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		XObjectWrapper_t1932FA32F64A100673DEC2063AF00052A6CE1B16* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XObjectWrapper_get_WrappedNode_m3CA9623838D4D4A96DCF882FC3C592D3D64D7573(L_2, NULL);
		NullCheck(L_1);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B(L_1, L_3, NULL);
		__this->____attributes_3 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_3), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XElementWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* XElementWrapper_get_Attributes_mBCEC2D09F107433A944B9DC2DA694454C4B2FA49 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_11 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = __this->____attributes_3;
		V_0 = (bool)((((RuntimeObject*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0151;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_2 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_2, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		__this->____attributes_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_3), (void*)L_2);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_3;
		L_3 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0060;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0060:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_0031_1:
			{
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_9;
				L_9 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_8);
				V_3 = L_9;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_10 = __this->____attributes_3;
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_11 = V_3;
				XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_12 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_12, L_11, NULL);
				NullCheck(L_10);
				List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_10, L_12, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
			}

IL_004c_1:
			{
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String Newtonsoft.Json.Converters.XObjectWrapper::get_NamespaceUri() */, __this);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_16, NULL);
		if (L_17)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_18 = V_1;
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XObjectWrapper::get_ParentNode() */, __this);
		RuntimeObject* L_20 = L_19;
		G_B11_0 = L_20;
		G_B11_1 = L_18;
		if (L_20)
		{
			G_B12_0 = L_20;
			G_B12_1 = L_18;
			goto IL_007e;
		}
	}
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_1;
		goto IL_0083;
	}

IL_007e:
	{
		NullCheck(G_B12_0);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, G_B12_0);
		G_B13_0 = L_21;
		G_B13_1 = G_B12_1;
	}

IL_0083:
	{
		bool L_22;
		L_22 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(G_B13_1, G_B13_0, NULL);
		G_B15_0 = ((int32_t)(L_22));
		goto IL_008b;
	}

IL_008a:
	{
		G_B15_0 = 0;
	}

IL_008b:
	{
		V_4 = (bool)G_B15_0;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_0150;
		}
	}
	{
		String_t* L_24 = V_1;
		String_t* L_25;
		L_25 = XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19(__this, L_24, NULL);
		bool L_26;
		L_26 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_25, NULL);
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_014f;
		}
	}
	{
		V_6 = (bool)0;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_28 = __this->____attributes_3;
		NullCheck(L_28);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_29;
		L_29 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_28, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_7 = L_29;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_7), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0105_1;
			}

IL_00be_1:
			{
				RuntimeObject* L_30;
				L_30 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_7), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_8 = L_30;
				RuntimeObject* L_31 = V_8;
				NullCheck(L_31);
				String_t* L_32;
				L_32 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_31);
				bool L_33;
				L_33 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_32, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (!L_33)
				{
					goto IL_00f8_1;
				}
			}
			{
				RuntimeObject* L_34 = V_8;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_34);
				bool L_36;
				L_36 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_35, NULL);
				if (!L_36)
				{
					goto IL_00f8_1;
				}
			}
			{
				RuntimeObject* L_37 = V_8;
				NullCheck(L_37);
				String_t* L_38;
				L_38 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_37);
				String_t* L_39 = V_1;
				bool L_40;
				L_40 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, L_39, NULL);
				G_B23_0 = ((int32_t)(L_40));
				goto IL_00f9_1;
			}

IL_00f8_1:
			{
				G_B23_0 = 0;
			}

IL_00f9_1:
			{
				V_9 = (bool)G_B23_0;
				bool L_41 = V_9;
				if (!L_41)
				{
					goto IL_0104_1;
				}
			}
			{
				V_6 = (bool)1;
			}

IL_0104_1:
			{
			}

IL_0105_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_7), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00be_1;
				}
			}
			{
				goto IL_011f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011f:
	{
		bool L_43 = V_6;
		V_10 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_014e;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_45 = __this->____attributes_3;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_46;
		L_46 = XName_op_Implicit_mFC85EBDA8EF02294034DF34A29E49812427EA566(_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		String_t* L_47 = V_1;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_48 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_48, L_46, L_47, NULL);
		XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547* L_49 = (XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547*)il2cpp_codegen_object_new(XAttributeWrapper_t1FC7334561AD249FF39775D06CEF7BCECEBD9547_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		XAttributeWrapper__ctor_mCD158BF6A02EA1460BD22E3C99816A3308E2DC39(L_49, L_48, NULL);
		NullCheck(L_45);
		List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926(L_45, 0, L_49, List_1_Insert_mB42244832CF5462EF2726D9EBEB081FE9426C926_RuntimeMethod_var);
	}

IL_014e:
	{
	}

IL_014f:
	{
	}

IL_0150:
	{
	}

IL_0151:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_50 = __this->____attributes_3;
		V_11 = L_50;
		goto IL_015b;
	}

IL_015b:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_51 = V_11;
		return L_51;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XElementWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElementWrapper_AppendChild_m7F2CE9197158F3EFF8555A062D195E207530AFAC (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		RuntimeObject* L_1;
		L_1 = XContainerWrapper_AppendChild_mD0C76048C57DBC7BE2A08BC215761BEF2552BC42(__this, L_0, NULL);
		V_0 = L_1;
		__this->____attributes_3 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_3), (void*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL);
		RuntimeObject* L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_Value_m8610D6D1BBD66BFD3DB13666D4FFF031F6C6F561 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Converters.XElementWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_set_Value_m9E6B42A554CCFA2498C1D26C9DF352347E8EEDC1 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66(L_0, L_1, NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_LocalName_mA47C683BF562D2B6AD547329F99FB15945037BDF (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_NamespaceUri_m537A5A8F6039B89961825F2EFFBD0D57F8EB0B04 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Newtonsoft.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m6E8DA9B2D4BAF02CD2660213C9CA4405575F1D19 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		String_t* L_1 = ___namespaceUri0;
		XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* L_2;
		L_2 = XNamespace_op_Implicit_mB3CFEDB71BE0ADF3DA186F884778281AF3F96D3E(L_1, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XElementWrapper::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_get_IsEmpty_mF42A83AA38E3BA1A7F55EC274D4D7ECAB1DDB880 (XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mCE45E811C472BF01E89449EAD91DB4C37B5B2074(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_DeserializeRootElementName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_DeserializeRootElementName_m3BF71E4654215F114EDE08F035A62A886E87821A (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeserializeRootElementNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeserializeRootElementNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_WriteArrayAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_WriteArrayAttribute_mDB9B899CAC005A16290D1AE4688D6114195A1F24 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CWriteArrayAttributeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::set_OmitRootObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_OmitRootObject_mA3B18200974DB101932BFFD9AE802656815C7729 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COmitRootObjectU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteJson_mC9928FB4E2184CDC9F294BB9AD22AC5F5E8E0CF9 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___value1, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___value1;
		RuntimeObject* L_1;
		L_1 = XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228(__this, L_0, NULL);
		V_0 = L_1;
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_2 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_2, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_3 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_3, L_2, NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = V_1;
		XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3(__this, L_4, L_5, NULL);
		bool L_6;
		L_6 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___writer0;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_8);
	}

IL_0033:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_9 = ___writer0;
		RuntimeObject* L_10 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = V_1;
		bool L_12;
		L_12 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_9, L_10, L_11, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
		bool L_13;
		L_13 = XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline(__this, NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_15);
	}

IL_005c:
	{
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)IsInstClass((RuntimeObject*)L_0, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		RuntimeObject* L_3;
		L_3 = XContainerWrapper_WrapNode_mEB4F3360D23E79A87515F9D7B437F9BFE59793B5(((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)CastclassClass((RuntimeObject*)L_2, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_3;
		goto IL_0049;
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___value0;
		V_2 = (bool)((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)IsInstClass((RuntimeObject*)L_4, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		RuntimeObject* L_7;
		L_7 = XmlNodeWrapper_WrapNode_mE6D50930A0A54ADB2FB665891D9CA1F669F11AE0(((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)CastclassClass((RuntimeObject*)L_6, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_7;
		goto IL_0049;
	}

IL_0039:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_WrapXml_m75EF1038542649689A89FBF5A3F2CED042EBF228_RuntimeMethod_var)));
	}

IL_0049:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::PushParentNamespaces(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m72AF63B5C2C7D78F06FA7A495DADCA6759027AA3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	int32_t G_B15_0 = 0;
	{
		V_0 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)NULL;
		RuntimeObject* L_0 = ___node0;
		V_1 = L_0;
		goto IL_0030;
	}

IL_0007:
	{
		RuntimeObject* L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_1);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_4 = V_0;
		V_3 = (bool)((((RuntimeObject*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_6 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_6, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0026:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_7 = V_0;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_7, L_8, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
	}

IL_002f:
	{
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::get_ParentNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = L_10;
		V_1 = L_11;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0007;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_13 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_010e;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_15 = V_0;
		NullCheck(L_15);
		List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627(L_15, List_1_Reverse_m650275B7F9E56003CC1A1616FFA5A3BBC3541627_RuntimeMethod_var);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_16 = V_0;
		NullCheck(L_16);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_17;
		L_17 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_16, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fe:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_6), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f0_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_6), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_7 = L_18;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_19 = ___manager1;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_19);
				RuntimeObject* L_20 = V_7;
				NullCheck(L_20);
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_21;
				L_21 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_22;
				L_22 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_21, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
				V_8 = L_22;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e0_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_8), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00d5_2;
					}

IL_0086_2:
					{
						RuntimeObject* L_23;
						L_23 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_8), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
						V_9 = L_23;
						RuntimeObject* L_24 = V_9;
						NullCheck(L_24);
						String_t* L_25;
						L_25 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_24);
						bool L_26;
						L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
						if (!L_26)
						{
							goto IL_00b6_2;
						}
					}
					{
						RuntimeObject* L_27 = V_9;
						NullCheck(L_27);
						String_t* L_28;
						L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_27);
						bool L_29;
						L_29 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_28, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
						G_B15_0 = ((int32_t)(L_29));
						goto IL_00b7_2;
					}

IL_00b6_2:
					{
						G_B15_0 = 0;
					}

IL_00b7_2:
					{
						V_10 = (bool)G_B15_0;
						bool L_30 = V_10;
						if (!L_30)
						{
							goto IL_00d4_2;
						}
					}
					{
						XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_31 = ___manager1;
						RuntimeObject* L_32 = V_9;
						NullCheck(L_32);
						String_t* L_33;
						L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_32);
						RuntimeObject* L_34 = V_9;
						NullCheck(L_34);
						String_t* L_35;
						L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_34);
						NullCheck(L_31);
						VirtualActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_31, L_33, L_35);
					}

IL_00d4_2:
					{
					}

IL_00d5_2:
					{
						bool L_36;
						L_36 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_8), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
						if (L_36)
						{
							goto IL_0086_2;
						}
					}
					{
						goto IL_00ef_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ef_1:
			{
			}

IL_00f0_1:
			{
				bool L_37;
				L_37 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_6), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
	}

IL_010e:
	{
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ResolveFullName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_2 = ___node0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_5 = ___node0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (L_7)
		{
			goto IL_003b;
		}
	}

IL_002d:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager1;
		RuntimeObject* L_9 = ___node0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_8, L_10);
		G_B5_0 = L_11;
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_003c:
	{
		V_0 = G_B5_0;
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_15 = V_0;
		RuntimeObject* L_16 = ___node0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_16);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = XmlConvert_DecodeName_m0A515523E8424058C10863C8B3B0FDA0B63DD329(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_15, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_18, NULL);
		V_2 = L_19;
		goto IL_0073;
	}

IL_0064:
	{
		RuntimeObject* L_20 = ___node0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_20);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = XmlConvert_DecodeName_m0A515523E8424058C10863C8B3B0FDA0B63DD329(L_21, NULL);
		V_2 = L_22;
		goto IL_0073;
	}

IL_0073:
	{
		String_t* L_23 = V_2;
		return L_23;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::GetPropertyName(Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0121;
			}
			case 3:
			{
				goto IL_009d;
			}
			case 4:
			{
				goto IL_0131;
			}
			case 5:
			{
				goto IL_0131;
			}
			case 6:
			{
				goto IL_00e7;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0131;
			}
			case 9:
			{
				goto IL_00fc;
			}
			case 10:
			{
				goto IL_0131;
			}
			case 11:
			{
				goto IL_0131;
			}
			case 12:
			{
				goto IL_0129;
			}
			case 13:
			{
				goto IL_0119;
			}
			case 14:
			{
				goto IL_0131;
			}
			case 15:
			{
				goto IL_0131;
			}
			case 16:
			{
				goto IL_0111;
			}
		}
	}
	{
		goto IL_0131;
	}

IL_0059:
	{
		RuntimeObject* L_3 = ___node0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_7 = ___node0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_8, NULL);
		V_2 = L_9;
		goto IL_014c;
	}

IL_0084:
	{
		RuntimeObject* L_10 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = ___manager1;
		String_t* L_12;
		L_12 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_10, L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_12, NULL);
		V_2 = L_13;
		goto IL_014c;
	}

IL_009d:
	{
		V_2 = _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
		goto IL_014c;
	}

IL_00a8:
	{
		V_2 = _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
		goto IL_014c;
	}

IL_00b3:
	{
		RuntimeObject* L_14 = ___node0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_14);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00db;
		}
	}
	{
		RuntimeObject* L_18 = ___node0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_18);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_19, NULL);
		V_2 = L_20;
		goto IL_014c;
	}

IL_00db:
	{
		RuntimeObject* L_21 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_22 = ___manager1;
		String_t* L_23;
		L_23 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_21, L_22, NULL);
		V_2 = L_23;
		goto IL_014c;
	}

IL_00e7:
	{
		RuntimeObject* L_24 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_25 = ___manager1;
		String_t* L_26;
		L_26 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_24, L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_26, NULL);
		V_2 = L_27;
		goto IL_014c;
	}

IL_00fc:
	{
		RuntimeObject* L_28 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_29 = ___manager1;
		String_t* L_30;
		L_30 = XmlNodeConverter_ResolveFullName_mC5F07F462B6FE5B4EB555D78255961F40B8C3616(__this, L_28, L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, L_30, NULL);
		V_2 = L_31;
		goto IL_014c;
	}

IL_0111:
	{
		V_2 = _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
		goto IL_014c;
	}

IL_0119:
	{
		V_2 = _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
		goto IL_014c;
	}

IL_0121:
	{
		V_2 = _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
		goto IL_014c;
	}

IL_0129:
	{
		V_2 = _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
		goto IL_014c;
	}

IL_0131:
	{
		RuntimeObject* L_32 = ___node0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), L_32);
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), &L_34);
		String_t* L_36;
		L_36 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral810C723B6D33105E6B3277736A780EFDA0438806)), L_35, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_37 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5_RuntimeMethod_var)));
	}

IL_014c:
	{
		String_t* L_38 = V_2;
		return L_38;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsArray(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((!(((RuntimeObject*)(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_3 = ___node0;
		NullCheck(L_3);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_4;
		L_4 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_5;
		L_5 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_4, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_1), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0061_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_1), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_2 = L_6;
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
				if (!L_9)
				{
					goto IL_004b_1;
				}
			}
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_10);
				bool L_12;
				L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				G_B6_0 = ((int32_t)(L_12));
				goto IL_004c_1;
			}

IL_004b_1:
			{
				G_B6_0 = 0;
			}

IL_004c_1:
			{
				V_3 = (bool)G_B6_0;
				bool L_13 = V_3;
				if (!L_13)
				{
					goto IL_0060_1;
				}
			}
			{
				RuntimeObject* L_14 = V_2;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_14);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = XmlConvert_ToBoolean_mC9C05B76ECCD48E206BF6AD704A9742C88A6DBB4(L_15, NULL);
				V_4 = L_16;
				goto IL_0081;
			}

IL_0060_1:
			{
			}

IL_0061_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_1), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
	}

IL_007c:
	{
		V_4 = (bool)0;
		goto IL_0081;
	}

IL_0081:
	{
		bool L_18 = V_4;
		return L_18;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFD7E775C8CC485679562031627B69B74FC0C5556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m92C744D5C7754975415AF800D969C4BC9CDAF840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m525922E71F47CBC23945A74F44EAF148B5B4D827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6F503D135D9875E6C5EC2AE33CCB3CD3BD513D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE1299A8580EC7869F8C751D0A54B0930C8F5357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4D7366AFA49151C356A17BADDABE9825BC8C4E8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m050BB355FCDC625D10AC0F3B470B943B1FF36E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BB6C47BF7BDF19E19DFDA5F36D84C1A9286B223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1D190BFD87B61A6BAD48FB60B305A246EB42781F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718 V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 V_8;
	memset((&V_8), 0, sizeof(V_8));
	List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	{
		Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* L_0 = (Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598*)il2cpp_codegen_object_new(Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6F503D135D9875E6C5EC2AE33CCB3CD3BD513D8D(L_0, Dictionary_2__ctor_m6F503D135D9875E6C5EC2AE33CCB3CD3BD513D8D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0055;
	}

IL_000b:
	{
		RuntimeObject* L_1 = ___node1;
		NullCheck(L_1);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_2;
		L_2 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_2, L_3, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_6 = ___manager2;
		String_t* L_7;
		L_7 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_5, L_6, NULL);
		V_3 = L_7;
		Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* L_8 = V_0;
		String_t* L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m525922E71F47CBC23945A74F44EAF148B5B4D827(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_m525922E71F47CBC23945A74F44EAF148B5B4D827_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_12 = (List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E*)il2cpp_codegen_object_new(List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37(L_12, List_1__ctor_m99AF43FA43C38A915F0A8AF9F07EFF9D3183EA37_RuntimeMethod_var);
		V_4 = L_12;
		Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* L_13 = V_0;
		String_t* L_14 = V_3;
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_15 = V_4;
		NullCheck(L_13);
		Dictionary_2_Add_mFD7E775C8CC485679562031627B69B74FC0C5556(L_13, L_14, L_15, Dictionary_2_Add_mFD7E775C8CC485679562031627B69B74FC0C5556_RuntimeMethod_var);
	}

IL_0047:
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_16 = V_4;
		RuntimeObject* L_17 = V_2;
		NullCheck(L_16);
		List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_inline(L_16, L_17, List_1_Add_m398158DFE48F62CF2C479A46F0D6C5A6E3206CF2_RuntimeMethod_var);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0055:
	{
		int32_t L_19 = V_1;
		RuntimeObject* L_20 = ___node1;
		NullCheck(L_20);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_21;
		L_21 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_21, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000b;
		}
	}
	{
		Dictionary_2_t5FA91F104BA66DD13AC20EEB6CB4462B40CA5598* L_24 = V_0;
		NullCheck(L_24);
		Enumerator_tED777B6DE34527EAFFFB41F905115080D992D718 L_25;
		L_25 = Dictionary_2_GetEnumerator_m92C744D5C7754975415AF800D969C4BC9CDAF840(L_24, Dictionary_2_GetEnumerator_m92C744D5C7754975415AF800D969C4BC9CDAF840_RuntimeMethod_var);
		V_7 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0141:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE1299A8580EC7869F8C751D0A54B0930C8F5357((&V_7), Enumerator_Dispose_mCE1299A8580EC7869F8C751D0A54B0930C8F5357_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0133_1;
			}

IL_0077_1:
			{
				KeyValuePair_2_tD11270031ED311D59FE12AFA1E90CA4BCCA9EBA1 L_26;
				L_26 = Enumerator_get_Current_m050BB355FCDC625D10AC0F3B470B943B1FF36E57_inline((&V_7), Enumerator_get_Current_m050BB355FCDC625D10AC0F3B470B943B1FF36E57_RuntimeMethod_var);
				V_8 = L_26;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_27;
				L_27 = KeyValuePair_2_get_Value_m1D190BFD87B61A6BAD48FB60B305A246EB42781F_inline((&V_8), KeyValuePair_2_get_Value_m1D190BFD87B61A6BAD48FB60B305A246EB42781F_RuntimeMethod_var);
				V_9 = L_27;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_28 = V_9;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_28, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
				V_11 = (bool)((((int32_t)L_29) == ((int32_t)1))? 1 : 0);
				bool L_30 = V_11;
				if (!L_30)
				{
					goto IL_00ae_1;
				}
			}
			{
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_31 = V_9;
				NullCheck(L_31);
				RuntimeObject* L_32;
				L_32 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_31, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
				bool L_33;
				L_33 = XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48(__this, L_32, NULL);
				V_10 = L_33;
				goto IL_00b3_1;
			}

IL_00ae_1:
			{
				V_10 = (bool)1;
			}

IL_00b3_1:
			{
				bool L_34 = V_10;
				V_12 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
				bool L_35 = V_12;
				if (!L_35)
				{
					goto IL_00d5_1;
				}
			}
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_36 = ___writer0;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_37 = V_9;
				NullCheck(L_37);
				RuntimeObject* L_38;
				L_38 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_37, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_39 = ___manager2;
				bool L_40 = ___writePropertyName3;
				XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_36, L_38, L_39, L_40, NULL);
				goto IL_0132_1;
			}

IL_00d5_1:
			{
				String_t* L_41;
				L_41 = KeyValuePair_2_get_Key_m6BB6C47BF7BDF19E19DFDA5F36D84C1A9286B223_inline((&V_8), KeyValuePair_2_get_Key_m6BB6C47BF7BDF19E19DFDA5F36D84C1A9286B223_RuntimeMethod_var);
				V_13 = L_41;
				bool L_42 = ___writePropertyName3;
				V_14 = L_42;
				bool L_43 = V_14;
				if (!L_43)
				{
					goto IL_00f2_1;
				}
			}
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_44 = ___writer0;
				String_t* L_45 = V_13;
				NullCheck(L_44);
				VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_44, L_45);
			}

IL_00f2_1:
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_46 = ___writer0;
				NullCheck(L_46);
				VirtualActionInvoker0::Invoke(10 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_46);
				V_15 = 0;
				goto IL_0119_1;
			}

IL_00fe_1:
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_47 = ___writer0;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_48 = V_9;
				int32_t L_49 = V_15;
				NullCheck(L_48);
				RuntimeObject* L_50;
				L_50 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_48, L_49, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_51 = ___manager2;
				XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_47, L_50, L_51, (bool)0, NULL);
				int32_t L_52 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_52, 1));
			}

IL_0119_1:
			{
				int32_t L_53 = V_15;
				List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_54 = V_9;
				NullCheck(L_54);
				int32_t L_55;
				L_55 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_54, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
				V_16 = (bool)((((int32_t)L_53) < ((int32_t)L_55))? 1 : 0);
				bool L_56 = V_16;
				if (L_56)
				{
					goto IL_00fe_1;
				}
			}
			{
				JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_57 = ___writer0;
				NullCheck(L_57);
				VirtualActionInvoker0::Invoke(11 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_57);
			}

IL_0132_1:
			{
			}

IL_0133_1:
			{
				bool L_58;
				L_58 = Enumerator_MoveNext_m4D7366AFA49151C356A17BADDABE9825BC8C4E8F((&V_7), Enumerator_MoveNext_m4D7366AFA49151C356A17BADDABE9825BC8C4E8F_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_0077_1;
				}
			}
			{
				goto IL_0150;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0150:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::SerializeNode(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionUtils_IsNullOrEmpty_TisIXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_mC2AFA22D33E84D3181065F694089A762D26AE451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t G_B7_0 = 0;
	String_t* G_B15_0 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B48_0 = 0;
	{
		RuntimeObject* L_0 = ___node1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0275;
			}
			case 2:
			{
				goto IL_0275;
			}
			case 3:
			{
				goto IL_0275;
			}
			case 4:
			{
				goto IL_049d;
			}
			case 5:
			{
				goto IL_049d;
			}
			case 6:
			{
				goto IL_0275;
			}
			case 7:
			{
				goto IL_0259;
			}
			case 8:
			{
				goto IL_0059;
			}
			case 9:
			{
				goto IL_03bb;
			}
			case 10:
			{
				goto IL_0059;
			}
			case 11:
			{
				goto IL_049d;
			}
			case 12:
			{
				goto IL_0275;
			}
			case 13:
			{
				goto IL_0275;
			}
			case 14:
			{
				goto IL_049d;
			}
			case 15:
			{
				goto IL_049d;
			}
			case 16:
			{
				goto IL_0305;
			}
		}
	}
	{
		goto IL_049d;
	}

IL_0059:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_3 = ___writer0;
		RuntimeObject* L_4 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager2;
		bool L_6 = ___writePropertyName3;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_3, L_4, L_5, L_6, NULL);
		goto IL_04b8;
	}

IL_006a:
	{
		RuntimeObject* L_7 = ___node1;
		bool L_8;
		L_8 = XmlNodeConverter_IsArray_mF83080575E162DED85AA9E7F30384F4FCECF4A48(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_9 = ___node1;
		bool L_10;
		L_10 = XmlNodeConverter_AllSameName_m504FAB958B80F2F01CA37C6F79043FC5F5550E2E(L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_11 = ___node1;
		NullCheck(L_11);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_12;
		L_12 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_12, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_008c;
	}

IL_008b:
	{
		G_B7_0 = 0;
	}

IL_008c:
	{
		V_3 = (bool)G_B7_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_15 = ___writer0;
		RuntimeObject* L_16 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_17 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_15, L_16, L_17, (bool)0, NULL);
		goto IL_0254;
	}

IL_00a2:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_18 = ___manager2;
		NullCheck(L_18);
		VirtualActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_18);
		RuntimeObject* L_19 = ___node1;
		NullCheck(L_19);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_20;
		L_20 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_21;
		L_21 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_20, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_4 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0125:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_4), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011a_1;
			}

IL_00ba_1:
			{
				RuntimeObject* L_22;
				L_22 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_4), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_5 = L_22;
				RuntimeObject* L_23 = V_5;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_23);
				bool L_25;
				L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
				V_6 = L_25;
				bool L_26 = V_6;
				if (!L_26)
				{
					goto IL_0119_1;
				}
			}
			{
				RuntimeObject* L_27 = V_5;
				NullCheck(L_27);
				String_t* L_28;
				L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_27);
				bool L_29;
				L_29 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_28, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (L_29)
				{
					goto IL_00f6_1;
				}
			}
			{
				String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B15_0 = L_30;
				goto IL_0102_1;
			}

IL_00f6_1:
			{
				RuntimeObject* L_31 = V_5;
				NullCheck(L_31);
				String_t* L_32;
				L_32 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_31);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_33;
				L_33 = XmlConvert_DecodeName_m0A515523E8424058C10863C8B3B0FDA0B63DD329(L_32, NULL);
				G_B15_0 = L_33;
			}

IL_0102_1:
			{
				V_7 = G_B15_0;
				RuntimeObject* L_34 = V_5;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_34);
				V_8 = L_35;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_36 = ___manager2;
				String_t* L_37 = V_7;
				String_t* L_38 = V_8;
				NullCheck(L_36);
				VirtualActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
			}

IL_0119_1:
			{
			}

IL_011a_1:
			{
				bool L_39;
				L_39 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_4), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_00ba_1;
				}
			}
			{
				goto IL_0134;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0134:
	{
		bool L_40 = ___writePropertyName3;
		V_9 = L_40;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_014d;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_42 = ___writer0;
		RuntimeObject* L_43 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_44 = ___manager2;
		String_t* L_45;
		L_45 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_43, L_44, NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_42, L_45);
	}

IL_014d:
	{
		RuntimeObject* L_46 = ___node1;
		NullCheck(L_46);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_47;
		L_47 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_46);
		bool L_48;
		L_48 = XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090(__this, L_47, NULL);
		if (L_48)
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_49 = ___node1;
		NullCheck(L_49);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_50;
		L_50 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_50, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_52 = ___node1;
		NullCheck(L_52);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_53;
		L_53 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_53, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_54);
		G_B26_0 = ((((int32_t)L_55) == ((int32_t)3))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B26_0 = 0;
	}

IL_0180:
	{
		V_10 = (bool)G_B26_0;
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_01a5;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_57 = ___writer0;
		RuntimeObject* L_58 = ___node1;
		NullCheck(L_58);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_59;
		L_59 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_59, 0, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		NullCheck(L_60);
		String_t* L_61;
		L_61 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_57, L_61);
		goto IL_024c;
	}

IL_01a5:
	{
		RuntimeObject* L_62 = ___node1;
		NullCheck(L_62);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_63;
		L_63 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_63, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		if (L_64)
		{
			goto IL_01bf;
		}
	}
	{
		RuntimeObject* L_65 = ___node1;
		NullCheck(L_65);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_66;
		L_66 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_65);
		bool L_67;
		L_67 = CollectionUtils_IsNullOrEmpty_TisIXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_mC2AFA22D33E84D3181065F694089A762D26AE451(L_66, CollectionUtils_IsNullOrEmpty_TisIXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_mC2AFA22D33E84D3181065F694089A762D26AE451_RuntimeMethod_var);
		G_B31_0 = ((int32_t)(L_67));
		goto IL_01c0;
	}

IL_01bf:
	{
		G_B31_0 = 0;
	}

IL_01c0:
	{
		V_11 = (bool)G_B31_0;
		bool L_68 = V_11;
		if (!L_68)
		{
			goto IL_01f8;
		}
	}
	{
		RuntimeObject* L_69 = ___node1;
		V_12 = ((RuntimeObject*)Castclass((RuntimeObject*)L_69, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var));
		RuntimeObject* L_70 = V_12;
		NullCheck(L_70);
		bool L_71;
		L_71 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Newtonsoft.Json.Converters.IXmlElement::get_IsEmpty() */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_70);
		V_13 = L_71;
		bool L_72 = V_13;
		if (!L_72)
		{
			goto IL_01e7;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_73 = ___writer0;
		NullCheck(L_73);
		VirtualActionInvoker0::Invoke(22 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_73);
		goto IL_01f5;
	}

IL_01e7:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_74 = ___writer0;
		String_t* L_75 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_74);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_74, L_75);
	}

IL_01f5:
	{
		goto IL_024c;
	}

IL_01f8:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_76 = ___writer0;
		NullCheck(L_76);
		VirtualActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_76);
		V_14 = 0;
		goto IL_0224;
	}

IL_0205:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_77 = ___writer0;
		RuntimeObject* L_78 = ___node1;
		NullCheck(L_78);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_79;
		L_79 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_78);
		int32_t L_80 = V_14;
		NullCheck(L_79);
		RuntimeObject* L_81;
		L_81 = List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815(L_79, L_80, List_1_get_Item_m49F224E7B5DC4879C5A553E58943A24FA8E42815_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_82 = ___manager2;
		XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA(__this, L_77, L_81, L_82, (bool)1, NULL);
		int32_t L_83 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0224:
	{
		int32_t L_84 = V_14;
		RuntimeObject* L_85 = ___node1;
		NullCheck(L_85);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_86;
		L_86 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(3 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		int32_t L_87;
		L_87 = List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_inline(L_86, List_1_get_Count_m5101BD6DFA5618FEB8E0D6CCF45C06C872577D0B_RuntimeMethod_var);
		V_15 = (bool)((((int32_t)L_84) < ((int32_t)L_87))? 1 : 0);
		bool L_88 = V_15;
		if (L_88)
		{
			goto IL_0205;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_89 = ___writer0;
		RuntimeObject* L_90 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_91 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_m2310D6C0E3FA9FCDBFC1677DEFE3CFB237E6BC0E(__this, L_89, L_90, L_91, (bool)1, NULL);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_92 = ___writer0;
		NullCheck(L_92);
		VirtualActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_92);
	}

IL_024c:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_93 = ___manager2;
		NullCheck(L_93);
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_93);
	}

IL_0254:
	{
		goto IL_04b8;
	}

IL_0259:
	{
		bool L_95 = ___writePropertyName3;
		V_16 = L_95;
		bool L_96 = V_16;
		if (!L_96)
		{
			goto IL_0270;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_97 = ___writer0;
		RuntimeObject* L_98 = ___node1;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_98);
		NullCheck(L_97);
		VirtualActionInvoker1< String_t* >::Invoke(64 /* System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String) */, L_97, L_99);
	}

IL_0270:
	{
		goto IL_04b8;
	}

IL_0275:
	{
		RuntimeObject* L_100 = ___node1;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_100);
		bool L_102;
		L_102 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_101, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (!L_102)
		{
			goto IL_0299;
		}
	}
	{
		RuntimeObject* L_103 = ___node1;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_103);
		bool L_105;
		L_105 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_104, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		G_B48_0 = ((int32_t)(L_105));
		goto IL_029a;
	}

IL_0299:
	{
		G_B48_0 = 0;
	}

IL_029a:
	{
		V_17 = (bool)G_B48_0;
		bool L_106 = V_17;
		if (!L_106)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_04b8;
	}

IL_02a6:
	{
		RuntimeObject* L_107 = ___node1;
		NullCheck(L_107);
		String_t* L_108;
		L_108 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_107);
		bool L_109;
		L_109 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_108, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_18 = L_109;
		bool L_110 = V_18;
		if (!L_110)
		{
			goto IL_02da;
		}
	}
	{
		RuntimeObject* L_111 = ___node1;
		NullCheck(L_111);
		String_t* L_112;
		L_112 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_111);
		bool L_113;
		L_113 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_112, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
		V_19 = L_113;
		bool L_114 = V_19;
		if (!L_114)
		{
			goto IL_02d9;
		}
	}
	{
		goto IL_04b8;
	}

IL_02d9:
	{
	}

IL_02da:
	{
		bool L_115 = ___writePropertyName3;
		V_20 = L_115;
		bool L_116 = V_20;
		if (!L_116)
		{
			goto IL_02f3;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_117 = ___writer0;
		RuntimeObject* L_118 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_119 = ___manager2;
		String_t* L_120;
		L_120 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_118, L_119, NULL);
		NullCheck(L_117);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_117, L_120);
	}

IL_02f3:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_121 = ___writer0;
		RuntimeObject* L_122 = ___node1;
		NullCheck(L_122);
		String_t* L_123;
		L_123 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_Value() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_121);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_121, L_123);
		goto IL_04b8;
	}

IL_0305:
	{
		RuntimeObject* L_124 = ___node1;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_124, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var));
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_125 = ___writer0;
		RuntimeObject* L_126 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_127 = ___manager2;
		String_t* L_128;
		L_128 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_126, L_127, NULL);
		NullCheck(L_125);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_125, L_128);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_129 = ___writer0;
		NullCheck(L_129);
		VirtualActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_129);
		RuntimeObject* L_130 = V_1;
		NullCheck(L_130);
		String_t* L_131;
		L_131 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_130);
		bool L_132;
		L_132 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_131, NULL);
		V_21 = (bool)((((int32_t)L_132) == ((int32_t)0))? 1 : 0);
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_0351;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_134 = ___writer0;
		NullCheck(L_134);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_134, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_135 = ___writer0;
		RuntimeObject* L_136 = V_1;
		NullCheck(L_136);
		String_t* L_137;
		L_137 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_136);
		NullCheck(L_135);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_135, L_137);
	}

IL_0351:
	{
		RuntimeObject* L_138 = V_1;
		NullCheck(L_138);
		String_t* L_139;
		L_139 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_138);
		bool L_140;
		L_140 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_139, NULL);
		V_22 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_22;
		if (!L_141)
		{
			goto IL_0380;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_142 = ___writer0;
		NullCheck(L_142);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_142, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_143 = ___writer0;
		RuntimeObject* L_144 = V_1;
		NullCheck(L_144);
		String_t* L_145;
		L_145 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_144);
		NullCheck(L_143);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_143, L_145);
	}

IL_0380:
	{
		RuntimeObject* L_146 = V_1;
		NullCheck(L_146);
		String_t* L_147;
		L_147 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_146);
		bool L_148;
		L_148 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_147, NULL);
		V_23 = (bool)((((int32_t)L_148) == ((int32_t)0))? 1 : 0);
		bool L_149 = V_23;
		if (!L_149)
		{
			goto IL_03af;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_150 = ___writer0;
		NullCheck(L_150);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_150, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_151 = ___writer0;
		RuntimeObject* L_152 = V_1;
		NullCheck(L_152);
		String_t* L_153;
		L_153 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_tA018518C777A8F9CD2D3BD397D9CAB3C3723AAA1_il2cpp_TypeInfo_var, L_152);
		NullCheck(L_151);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_151, L_153);
	}

IL_03af:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_154 = ___writer0;
		NullCheck(L_154);
		VirtualActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_154);
		goto IL_04b8;
	}

IL_03bb:
	{
		RuntimeObject* L_155 = ___node1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_155, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var));
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_156 = ___writer0;
		RuntimeObject* L_157 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_158 = ___manager2;
		String_t* L_159;
		L_159 = XmlNodeConverter_GetPropertyName_mC4EBA7F268695B3CE90E87702E7CDF96ABB01BA5(__this, L_157, L_158, NULL);
		NullCheck(L_156);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_156, L_159);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_160 = ___writer0;
		NullCheck(L_160);
		VirtualActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_160);
		RuntimeObject* L_161 = V_2;
		NullCheck(L_161);
		String_t* L_162;
		L_162 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_161);
		bool L_163;
		L_163 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_162, NULL);
		V_24 = (bool)((((int32_t)L_163) == ((int32_t)0))? 1 : 0);
		bool L_164 = V_24;
		if (!L_164)
		{
			goto IL_0407;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_165 = ___writer0;
		NullCheck(L_165);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_165, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_166 = ___writer0;
		RuntimeObject* L_167 = V_2;
		NullCheck(L_167);
		String_t* L_168;
		L_168 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_167);
		NullCheck(L_166);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_166, L_168);
	}

IL_0407:
	{
		RuntimeObject* L_169 = V_2;
		NullCheck(L_169);
		String_t* L_170;
		L_170 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_169);
		bool L_171;
		L_171 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_170, NULL);
		V_25 = (bool)((((int32_t)L_171) == ((int32_t)0))? 1 : 0);
		bool L_172 = V_25;
		if (!L_172)
		{
			goto IL_0436;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_173 = ___writer0;
		NullCheck(L_173);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_173, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_174 = ___writer0;
		RuntimeObject* L_175 = V_2;
		NullCheck(L_175);
		String_t* L_176;
		L_176 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_175);
		NullCheck(L_174);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_174, L_176);
	}

IL_0436:
	{
		RuntimeObject* L_177 = V_2;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_177);
		bool L_179;
		L_179 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_178, NULL);
		V_26 = (bool)((((int32_t)L_179) == ((int32_t)0))? 1 : 0);
		bool L_180 = V_26;
		if (!L_180)
		{
			goto IL_0465;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_181 = ___writer0;
		NullCheck(L_181);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_181, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_182 = ___writer0;
		RuntimeObject* L_183 = V_2;
		NullCheck(L_183);
		String_t* L_184;
		L_184 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_183);
		NullCheck(L_182);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_182, L_184);
	}

IL_0465:
	{
		RuntimeObject* L_185 = V_2;
		NullCheck(L_185);
		String_t* L_186;
		L_186 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_185);
		bool L_187;
		L_187 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_186, NULL);
		V_27 = (bool)((((int32_t)L_187) == ((int32_t)0))? 1 : 0);
		bool L_188 = V_27;
		if (!L_188)
		{
			goto IL_0494;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_189 = ___writer0;
		NullCheck(L_189);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_189, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_190 = ___writer0;
		RuntimeObject* L_191 = V_2;
		NullCheck(L_191);
		String_t* L_192;
		L_192 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Newtonsoft.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_tC37DB53E9079EB1E489BE94B2A02E06A818BD11D_il2cpp_TypeInfo_var, L_191);
		NullCheck(L_190);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_190, L_192);
	}

IL_0494:
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_193 = ___writer0;
		NullCheck(L_193);
		VirtualActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_193);
		goto IL_04b8;
	}

IL_049d:
	{
		RuntimeObject* L_194 = ___node1;
		NullCheck(L_194);
		int32_t L_195;
		L_195 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var)), L_194);
		int32_t L_196 = L_195;
		RuntimeObject* L_197 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), &L_196);
		String_t* L_198;
		L_198 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1)), L_197, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_199 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_199);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_199, L_198, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_199, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_SerializeNode_mBBB1AA0A7AC24A39675F1B210F51870CE932D6AA_RuntimeMethod_var)));
	}

IL_04b8:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::AllSameName(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_m504FAB958B80F2F01CA37C6F79043FC5F5550E2E (RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_2;
		L_2 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_1, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_0), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_0), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_4);
				RuntimeObject* L_6 = ___node0;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_6);
				bool L_8;
				L_8 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_5, L_7, NULL);
				V_2 = L_8;
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0033_1;
				}
			}
			{
				V_3 = (bool)0;
				goto IL_0052;
			}

IL_0033_1:
			{
			}

IL_0034_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_0), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		V_3 = (bool)1;
		goto IL_0052;
	}

IL_0052:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Object Newtonsoft.Json.Converters.XmlNodeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_15 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B16_0 = 0;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_4 = NULL;
		goto IL_0191;
	}

IL_0018:
	{
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_3 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_3, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_4 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_4, L_3, NULL);
		V_0 = L_4;
		V_1 = (RuntimeObject*)NULL;
		V_2 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		Type_t* L_7 = ___objectType1;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_6, L_7);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		Type_t* L_10 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		if ((((RuntimeObject*)(Type_t*)L_10) == ((RuntimeObject*)(Type_t*)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		Type_t* L_13 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		G_B6_0 = ((((int32_t)((((RuntimeObject*)(Type_t*)L_13) == ((RuntimeObject*)(Type_t*)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005e;
	}

IL_005d:
	{
		G_B6_0 = 0;
	}

IL_005e:
	{
		V_7 = (bool)G_B6_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_17 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F520303D59E86AC4C7A7D3637D6BFB77BF0A90F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_0070:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_18 = (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)il2cpp_codegen_object_new(XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD(L_18, NULL);
		V_6 = L_18;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_19 = V_6;
		XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6* L_20 = (XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6*)il2cpp_codegen_object_new(XDocumentWrapper_t3C3117E449826BEB20F7BFB77214046EE4D86AD6_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		XDocumentWrapper__ctor_mE05A6619DC930C9ABB32122C06DC694533611BDB(L_20, L_19, NULL);
		V_1 = L_20;
		RuntimeObject* L_21 = V_1;
		V_2 = L_21;
	}

IL_0082:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		Type_t* L_24 = ___objectType1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_23, L_24);
		V_8 = L_25;
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00d6;
		}
	}
	{
		Type_t* L_27 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_28, NULL);
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_27) == ((RuntimeObject*)(Type_t*)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_31 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1613296BA787F8ADE0D3584C042EB5CB7EE8B9EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_00bb:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_32 = (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)il2cpp_codegen_object_new(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC(L_32, NULL);
		V_9 = L_32;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_33 = V_9;
		NullCheck(L_33);
		VirtualActionInvoker1< XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* >::Invoke(48 /* System.Void System.Xml.XmlDocument::set_XmlResolver(System.Xml.XmlResolver) */, L_33, (XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF*)NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_34 = V_9;
		XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624* L_35 = (XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624*)il2cpp_codegen_object_new(XmlDocumentWrapper_t2C596BBEC57603F9B8DA72446CAABDC3DE251624_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		XmlDocumentWrapper__ctor_m2DDFA872888661813F74523693DB4A34FE765DFE(L_35, L_34, NULL);
		V_1 = L_35;
		RuntimeObject* L_36 = V_1;
		V_2 = L_36;
	}

IL_00d6:
	{
		RuntimeObject* L_37 = V_1;
		if (!L_37)
		{
			goto IL_00df;
		}
	}
	{
		RuntimeObject* L_38 = V_2;
		G_B16_0 = ((((RuntimeObject*)(RuntimeObject*)L_38) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_00e0;
	}

IL_00df:
	{
		G_B16_0 = 1;
	}

IL_00e0:
	{
		V_11 = (bool)G_B16_0;
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_00f8;
		}
	}
	{
		Type_t* L_40 = ___objectType1;
		String_t* L_41;
		L_41 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18)), L_40, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_42 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_42);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_00f8:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_43 = ___reader0;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_43);
		V_12 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_12;
		if (!L_45)
		{
			goto IL_0116;
		}
	}
	{
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_46 = (JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		JsonSerializationException__ctor_m0DDDC290916A23CCCE7A780AF876F9CE5FE58E4A(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m439264C33B17C4B9AB9EB03EDB14D20DD339FDD1_RuntimeMethod_var)));
	}

IL_0116:
	{
		String_t* L_47;
		L_47 = XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline(__this, NULL);
		bool L_48;
		L_48 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_47, NULL);
		V_13 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013f;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_50 = ___reader0;
		RuntimeObject* L_51 = V_1;
		RuntimeObject* L_52 = V_2;
		String_t* L_53;
		L_53 = XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline(__this, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_54 = V_0;
		XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8(__this, L_50, L_51, L_52, L_53, L_54, NULL);
		goto IL_0153;
	}

IL_013f:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_55 = ___reader0;
		NullCheck(L_55);
		bool L_56;
		L_56 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_55);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_57 = ___reader0;
		RuntimeObject* L_58 = V_1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_59 = V_0;
		RuntimeObject* L_60 = V_2;
		XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C(__this, L_57, L_58, L_59, L_60, NULL);
	}

IL_0153:
	{
		Type_t* L_61 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_62, NULL);
		V_14 = (bool)((((RuntimeObject*)(Type_t*)L_61) == ((RuntimeObject*)(Type_t*)L_63))? 1 : 0);
		bool L_64 = V_14;
		if (!L_64)
		{
			goto IL_0187;
		}
	}
	{
		RuntimeObject* L_65 = V_1;
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_66);
		V_15 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_67, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_68 = V_15;
		NullCheck(L_68);
		XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9(L_68, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_69 = V_15;
		V_4 = L_69;
		goto IL_0191;
	}

IL_0187:
	{
		RuntimeObject* L_70 = V_1;
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Newtonsoft.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_70);
		V_4 = L_71;
		goto IL_0191;
	}

IL_0191:
	{
		RuntimeObject* L_72 = V_4;
		return L_72;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeValue(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0 = ___propertyName3;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655, NULL);
		if (L_4)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520, NULL);
		if (L_6)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C, NULL);
		if (L_8)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00af;
	}

IL_003a:
	{
		RuntimeObject* L_9 = ___currentNode4;
		RuntimeObject* L_10 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_10, L_13);
		NullCheck(L_9);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_9, L_14);
		goto IL_012c;
	}

IL_0058:
	{
		RuntimeObject* L_16 = ___currentNode4;
		RuntimeObject* L_17 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_18);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_17);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateCDataSection(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_17, L_20);
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_16, L_21);
		goto IL_012c;
	}

IL_0076:
	{
		RuntimeObject* L_23 = ___currentNode4;
		RuntimeObject* L_24 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_25 = ___reader0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_25);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(3 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateWhitespace(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_24, L_27);
		NullCheck(L_23);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_23, L_28);
		goto IL_012c;
	}

IL_0094:
	{
		RuntimeObject* L_30 = ___currentNode4;
		RuntimeObject* L_31 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_32 = ___reader0;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_32);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		NullCheck(L_31);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateSignificantWhitespace(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_31, L_34);
		NullCheck(L_30);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_30, L_35);
		goto IL_012c;
	}

IL_00af:
	{
		String_t* L_37 = ___propertyName3;
		bool L_38;
		L_38 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_37, NULL);
		if (L_38)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_39 = ___propertyName3;
		NullCheck(L_39);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_39, 0, NULL);
		G_B12_0 = ((((int32_t)L_40) == ((int32_t)((int32_t)63)))? 1 : 0);
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B12_0 = 0;
	}

IL_00c7:
	{
		V_1 = (bool)G_B12_0;
		bool L_41 = V_1;
		if (!L_41)
		{
			goto IL_00dc;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_42 = ___reader0;
		RuntimeObject* L_43 = ___document1;
		RuntimeObject* L_44 = ___currentNode4;
		String_t* L_45 = ___propertyName3;
		XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006(__this, L_42, L_43, L_44, L_45, NULL);
		goto IL_012a;
	}

IL_00dc:
	{
		String_t* L_46 = ___propertyName3;
		bool L_47;
		L_47 = String_Equals_m80124ECC809968E69F952E2A49EBC03F81A23E43(L_46, _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73, 5, NULL);
		V_2 = L_47;
		bool L_48 = V_2;
		if (!L_48)
		{
			goto IL_00fc;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_49 = ___reader0;
		RuntimeObject* L_50 = ___document1;
		RuntimeObject* L_51 = ___currentNode4;
		XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA(__this, L_49, L_50, L_51, NULL);
		goto IL_012a;
	}

IL_00fc:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_52 = ___reader0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_52);
		V_3 = (bool)((((int32_t)L_53) == ((int32_t)2))? 1 : 0);
		bool L_54 = V_3;
		if (!L_54)
		{
			goto IL_011b;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_55 = ___reader0;
		RuntimeObject* L_56 = ___document1;
		String_t* L_57 = ___propertyName3;
		RuntimeObject* L_58 = ___currentNode4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_59 = ___manager2;
		XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6(__this, L_55, L_56, L_57, L_58, L_59, NULL);
		goto IL_012c;
	}

IL_011b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_60 = ___reader0;
		RuntimeObject* L_61 = ___document1;
		RuntimeObject* L_62 = ___currentNode4;
		String_t* L_63 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_64 = ___manager2;
		XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8(__this, L_60, L_61, L_62, L_63, L_64, NULL);
	}

IL_012a:
	{
		goto IL_012c;
	}

IL_012c:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_4;
		L_4 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadElement_m09C859D452268EBC6B893181FDF83B8CC7BDFAD8_RuntimeMethod_var)));
	}

IL_0019:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_6 = ___manager4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7;
		L_7 = XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049(__this, L_5, L_6, NULL);
		V_0 = L_7;
		String_t* L_8 = ___propertyName3;
		String_t* L_9;
		L_9 = MiscellaneousUtils_GetPrefix_m45A910FD0A5FBC96A5425EDC5BD480F788777D2F(L_8, NULL);
		V_1 = L_9;
		String_t* L_10 = ___propertyName3;
		bool L_11;
		L_11 = StringUtils_StartsWith_m5A1479282B22C45AF2AB1A67DB9AF70A8B4B82D9(L_10, ((int32_t)64), NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_13 = ___propertyName3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, 1, NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16;
		L_16 = MiscellaneousUtils_GetPrefix_m45A910FD0A5FBC96A5425EDC5BD480F788777D2F(L_15, NULL);
		V_5 = L_16;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_17 = ___reader0;
		RuntimeObject* L_18 = ___document1;
		RuntimeObject* L_19 = ___currentNode2;
		String_t* L_20 = V_4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_21 = ___manager4;
		String_t* L_22 = V_5;
		XmlNodeConverter_AddAttribute_mD51E6A2203E35BD6E82C4D6CE85877AB53CAE7F8(L_17, L_18, L_19, L_20, L_21, L_22, NULL);
		goto IL_0122;
	}

IL_0060:
	{
		String_t* L_23 = ___propertyName3;
		bool L_24;
		L_24 = StringUtils_StartsWith_m5A1479282B22C45AF2AB1A67DB9AF70A8B4B82D9(L_23, ((int32_t)36), NULL);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_26 = ___propertyName3;
		V_7 = L_26;
		String_t* L_27 = V_7;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_28)
		{
			goto IL_00bf;
		}
	}
	{
		String_t* L_29 = V_7;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_30)
		{
			goto IL_00e8;
		}
	}
	{
		String_t* L_31 = V_7;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_32)
		{
			goto IL_00e8;
		}
	}
	{
		String_t* L_33 = V_7;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_34)
		{
			goto IL_00e8;
		}
	}
	{
		String_t* L_35 = V_7;
		bool L_36;
		L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (L_36)
		{
			goto IL_00e8;
		}
	}
	{
		goto IL_0111;
	}

IL_00bf:
	{
		String_t* L_37 = ___propertyName3;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_37, 1, NULL);
		___propertyName3 = L_38;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_39 = ___manager4;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_39, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_1 = L_40;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_41 = ___reader0;
		RuntimeObject* L_42 = ___document1;
		RuntimeObject* L_43 = ___currentNode2;
		String_t* L_44 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_45 = ___manager4;
		String_t* L_46 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = V_0;
		XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
		goto IL_0122;
	}

IL_00e8:
	{
		String_t* L_48 = ___propertyName3;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_48, 1, NULL);
		V_8 = L_49;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_50 = ___manager4;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_50, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_9 = L_51;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_52 = ___reader0;
		RuntimeObject* L_53 = ___document1;
		RuntimeObject* L_54 = ___currentNode2;
		String_t* L_55 = V_8;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_56 = ___manager4;
		String_t* L_57 = V_9;
		XmlNodeConverter_AddAttribute_mD51E6A2203E35BD6E82C4D6CE85877AB53CAE7F8(L_52, L_53, L_54, L_55, L_56, L_57, NULL);
		goto IL_0122;
	}

IL_0111:
	{
	}

IL_0112:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_58 = ___reader0;
		RuntimeObject* L_59 = ___document1;
		RuntimeObject* L_60 = ___currentNode2;
		String_t* L_61 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_62 = ___manager4;
		String_t* L_63 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_64 = V_0;
		XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819(__this, L_58, L_59, L_60, L_61, L_62, L_63, L_64, NULL);
	}

IL_0122:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_mB62D7411435EBF38A92DDD2E3F37325D14CC5819 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	RuntimeObject* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	int32_t G_B17_0 = 0;
	{
		String_t* L_0 = ___elementName3;
		RuntimeObject* L_1 = ___document1;
		String_t* L_2 = ___elementPrefix5;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_3 = ___manager4;
		RuntimeObject* L_4;
		L_4 = XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = ___currentNode2;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_5, L_6);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___attributeNameValues6;
		NullCheck(L_8);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_9;
		L_9 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_8, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_1), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_0022_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_10;
				L_10 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_1), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_2 = L_10;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_12;
				L_12 = XmlConvert_EncodeName_m42879CBB7E33F534E7BA93890E4A830C5E5C6392(L_11, NULL);
				V_3 = L_12;
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_14;
				L_14 = MiscellaneousUtils_GetPrefix_m45A910FD0A5FBC96A5425EDC5BD480F788777D2F(L_13, NULL);
				V_4 = L_14;
				String_t* L_15 = V_4;
				bool L_16;
				L_16 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_15, NULL);
				if (!L_16)
				{
					goto IL_005f_1;
				}
			}
			{
				RuntimeObject* L_17 = ___document1;
				String_t* L_18 = V_3;
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_17);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_17, L_18, L_19);
				G_B7_0 = L_20;
				goto IL_007f_1;
			}

IL_005f_1:
			{
				RuntimeObject* L_21 = ___document1;
				String_t* L_22 = V_3;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_23 = ___manager4;
				String_t* L_24 = V_4;
				NullCheck(L_23);
				String_t* L_25;
				L_25 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_23, L_24);
				String_t* L_26 = L_25;
				G_B5_0 = L_26;
				G_B5_1 = L_22;
				G_B5_2 = L_21;
				if (L_26)
				{
					G_B6_0 = L_26;
					G_B6_1 = L_22;
					G_B6_2 = L_21;
					goto IL_0073_1;
				}
			}
			{
				String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B6_0 = L_27;
				G_B6_1 = G_B5_1;
				G_B6_2 = G_B5_2;
			}

IL_0073_1:
			{
				String_t* L_28;
				L_28 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(G_B6_2);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0, L_28);
				G_B7_0 = L_29;
			}

IL_007f_1:
			{
				V_5 = G_B7_0;
				RuntimeObject* L_30 = V_0;
				RuntimeObject* L_31 = V_5;
				NullCheck(L_30);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_30, L_31);
			}

IL_008b_1:
			{
				bool L_32;
				L_32 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_1), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_00a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_33 = ___reader0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_33);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)9))))
		{
			goto IL_00d7;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_35 = ___reader0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_35);
		if ((((int32_t)L_36) == ((int32_t)7)))
		{
			goto IL_00d7;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_37 = ___reader0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_37);
		if ((((int32_t)L_38) == ((int32_t)8)))
		{
			goto IL_00d7;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_39 = ___reader0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_39);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)10))))
		{
			goto IL_00d7;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_41 = ___reader0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_41);
		G_B17_0 = ((((int32_t)L_42) == ((int32_t)((int32_t)16)))? 1 : 0);
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B17_0 = 1;
	}

IL_00d8:
	{
		V_6 = (bool)G_B17_0;
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_0107;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_44 = ___reader0;
		String_t* L_45;
		L_45 = XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D(__this, L_44, NULL);
		V_7 = L_45;
		String_t* L_46 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_46) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_8;
		if (!L_47)
		{
			goto IL_0104;
		}
	}
	{
		RuntimeObject* L_48 = V_0;
		RuntimeObject* L_49 = ___document1;
		String_t* L_50 = V_7;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_49, L_50);
		NullCheck(L_48);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_48, L_51);
	}

IL_0104:
	{
		goto IL_0162;
	}

IL_0107:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_53 = ___reader0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_53);
		V_9 = (bool)((((int32_t)L_54) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_55 = V_9;
		if (!L_55)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_0162;
	}

IL_011b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_56 = ___reader0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_56);
		V_10 = (bool)((((int32_t)((((int32_t)L_57) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_014d;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_59 = ___manager4;
		NullCheck(L_59);
		VirtualActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_59);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_60 = ___reader0;
		RuntimeObject* L_61 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_62 = ___manager4;
		RuntimeObject* L_63 = V_0;
		XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C(__this, L_60, L_61, L_62, L_63, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_64 = ___manager4;
		NullCheck(L_64);
		bool L_65;
		L_65 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_64);
	}

IL_014d:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_66 = ___manager4;
		String_t* L_67 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_68 = ___manager4;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_68);
		NullCheck(L_66);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_66, L_67, L_69);
	}

IL_0162:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddAttribute(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_mD51E6A2203E35BD6E82C4D6CE85877AB53CAE7F8 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___attributeName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___attributePrefix5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		String_t* L_0 = ___attributeName3;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_EncodeName_m42879CBB7E33F534E7BA93890E4A830C5E5C6392(L_0, NULL);
		V_0 = L_1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___reader0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_1 = L_4;
		String_t* L_5 = ___attributePrefix5;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_7 = ___document1;
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		G_B3_0 = L_10;
		goto IL_0038;
	}

IL_0027:
	{
		RuntimeObject* L_11 = ___document1;
		String_t* L_12 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_13 = ___manager4;
		String_t* L_14 = ___attributePrefix5;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_13, L_14);
		String_t* L_16 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_11, L_12, L_15, L_16);
		G_B3_0 = L_17;
	}

IL_0038:
	{
		V_2 = G_B3_0;
		RuntimeObject* L_18 = ___currentNode2;
		RuntimeObject* L_19 = V_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_18, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var)), L_19);
		return;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	String_t* G_B4_0 = NULL;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___reader0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0026;
	}

IL_001b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B4_0 = L_7;
	}

IL_0026:
	{
		V_1 = G_B4_0;
		goto IL_0198;
	}

IL_002c:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)7))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_11);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_14;
		L_14 = Convert_ToInt64_mA1406B21E08189BC896A2260B9753AF60570DE1F(L_12, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = XmlConvert_ToString_m107060D51F6846EEE17E3F25663DE8CBF0D531B7(L_14, NULL);
		V_1 = L_15;
		goto IL_0198;
	}

IL_0055:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_16);
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)8))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00d4;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_19);
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_20, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___reader0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = XmlConvert_ToString_mFA07C846C46E12A04FE92E9388CBE27146C47720(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_23, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_24;
		goto IL_0198;
	}

IL_008e:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_25 = ___reader0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_25);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_26, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_28 = ___reader0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_28);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = XmlConvert_ToString_m5E4CB5F0119A790789813DACE87198037B503361(((*(float*)((float*)(float*)UnBox(L_29, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_30;
		goto IL_0198;
	}

IL_00b9:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_31 = ___reader0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_31);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_33;
		L_33 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = Convert_ToDouble_mDD0C8022294099032F3EB91C4F6E0D4EEE2A270F(L_32, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = XmlConvert_ToString_m9AB2822ABA7C73BBABFA7A3D8318B602CD73C10B(L_34, NULL);
		V_1 = L_35;
		goto IL_0198;
	}

IL_00d4:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_36 = ___reader0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_36);
		V_6 = (bool)((((int32_t)L_37) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_0100;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_39 = ___reader0;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_39);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_41;
		L_41 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Convert_ToBoolean_mB0FE0EF8913B62A513A8604E24D832B4F5CC9379(L_40, L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = XmlConvert_ToString_mD498DD0E8B82A9E93A66FE61A9A977523C5D01CD(L_42, NULL);
		V_1 = L_43;
		goto IL_0198;
	}

IL_0100:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_44 = ___reader0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_44);
		V_7 = (bool)((((int32_t)L_45) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_0161;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_47 = ___reader0;
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_47);
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_48, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_49 = V_9;
		if (!L_49)
		{
			goto IL_0139;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_50 = ___reader0;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_50);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = XmlConvert_ToString_m1916FE1D2DEAAFF8E94A53DFF9C07DD1A996A8A9(((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_51, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_52;
		goto IL_0198;
	}

IL_0139:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_53 = ___reader0;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_53);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_55;
		L_55 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_56;
		L_56 = Convert_ToDateTime_m61905AF8CBAC88A4891F90E763A1EFAE8B3EA74E(L_54, L_55, NULL);
		V_8 = L_56;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_57 = V_8;
		int32_t L_58;
		L_58 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int32_t L_59;
		L_59 = DateTimeUtils_ToSerializationMode_m15A9BD3C2566B79A88A915187DE6BB7CE0FAEDA5(L_58, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_60;
		L_60 = XmlConvert_ToString_m53BEA31146914B2252CA6CAFE2DA2360FA254078(L_57, L_59, NULL);
		V_1 = L_60;
		goto IL_0198;
	}

IL_0161:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_61 = ___reader0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_61);
		V_10 = (bool)((((int32_t)L_62) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_0176;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0198;
	}

IL_0176:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_64 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_65;
		L_65 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_66 = ___reader0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_66);
		int32_t L_68 = L_67;
		RuntimeObject* L_69 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), &L_68);
		String_t* L_70;
		L_70 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894)), L_65, L_69, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_71;
		L_71 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_64, L_70, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D_RuntimeMethod_var)));
	}

IL_0198:
	{
		String_t* L_72 = V_1;
		return L_72;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::ReadArrayElements(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.String,Newtonsoft.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m3A4E70784167D3D49FB40746E404602CA282B3D6 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		String_t* L_0 = ___propertyName2;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetPrefix_m45A910FD0A5FBC96A5425EDC5BD480F788777D2F(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___propertyName2;
		RuntimeObject* L_3 = ___document1;
		String_t* L_4 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager4;
		RuntimeObject* L_6;
		L_6 = XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65(__this, L_2, L_3, L_4, L_5, NULL);
		V_1 = L_6;
		RuntimeObject* L_7 = ___currentNode3;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = 0;
		goto IL_0034;
	}

IL_0021:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_10 = ___reader0;
		RuntimeObject* L_11 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_12 = ___manager4;
		String_t* L_13 = ___propertyName2;
		RuntimeObject* L_14 = V_1;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_10, L_11, L_12, L_13, L_14, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0034:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_16);
		if (!L_17)
		{
			goto IL_004b;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_18);
		G_B5_0 = ((((int32_t)((((int32_t)L_19) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_3 = (bool)G_B5_0;
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0021;
		}
	}
	{
		bool L_21;
		L_21 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_23 = V_1;
		RuntimeObject* L_24 = ___document1;
		XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_23, L_24, NULL);
	}

IL_0067:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_26;
		L_26 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		G_B11_0 = ((int32_t)(L_26));
		goto IL_0074;
	}

IL_0073:
	{
		G_B11_0 = 0;
	}

IL_0074:
	{
		V_5 = (bool)G_B11_0;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_28 = V_1;
		NullCheck(L_28);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_29;
		L_29 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_30;
		L_30 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_29, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_6 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_6), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_31;
				L_31 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_6), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_7 = L_31;
				RuntimeObject* L_32 = V_7;
				V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var));
				RuntimeObject* L_33 = V_8;
				if (!L_33)
				{
					goto IL_00b1_1;
				}
			}
			{
				RuntimeObject* L_34 = V_8;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_34);
				String_t* L_36 = ___propertyName2;
				bool L_37;
				L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, L_36, NULL);
				G_B17_0 = ((int32_t)(L_37));
				goto IL_00b2_1;
			}

IL_00b1_1:
			{
				G_B17_0 = 0;
			}

IL_00b2_1:
			{
				V_9 = (bool)G_B17_0;
				bool L_38 = V_9;
				if (!L_38)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_39 = V_8;
				RuntimeObject* L_40 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_39, L_40, NULL);
				goto IL_00cf_1;
			}

IL_00c5_1:
			{
			}

IL_00c6_1:
			{
				bool L_41;
				L_41 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_6), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_008b_1;
				}
			}

IL_00cf_1:
			{
				goto IL_00e0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
	}

IL_00e1:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Newtonsoft.Json.Converters.IXmlElement,Newtonsoft.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A514EDAC534931C94A111265660666E05658496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___element0;
		RuntimeObject* L_1 = ___document1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_1, _stringLiteral9A514EDAC534931C94A111265660666E05658496, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_3 = ___element0;
		V_0 = (bool)((!(((RuntimeObject*)(XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)((XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61*)IsInstClass((RuntimeObject*)L_3, XElementWrapper_t15082EFC96DF60AC9ACF10A1D60C1E04207FCA61_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_5 = ___element0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlElement::GetPrefixOfNamespace(System.String) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_5, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_8 = ___element0;
		RuntimeObject* L_9 = ___document1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_9, _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Newtonsoft.Json.Converters.IXmlElement::SetAttributeNode(Newtonsoft.Json.Converters.IXmlNode) */, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var, L_8, L_10);
	}

IL_005b:
	{
	}

IL_005c:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Newtonsoft.Json.Converters.XmlNodeConverter::ReadAttributeElements(Newtonsoft.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	String_t* V_8 = NULL;
	Il2CppChar V_9 = 0x0;
	String_t* V_10 = NULL;
	bool V_11 = false;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	bool V_14 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_20 = NULL;
	int32_t G_B8_0 = 0;
	String_t* G_B42_0 = NULL;
	int32_t G_B57_0 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (bool)0;
		V_2 = (bool)0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___reader0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___reader0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)11))))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_5 = ___reader0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_5);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)10))))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_7);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_9);
		if ((((int32_t)L_10) == ((int32_t)8)))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_11);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)16))))
		{
			goto IL_0053;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_13);
		G_B8_0 = ((((int32_t)((((int32_t)L_14) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B8_0 = 0;
	}

IL_0054:
	{
		V_3 = (bool)G_B8_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_02cb;
		}
	}
	{
		goto IL_02b2;
	}

IL_0061:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_16);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)4)))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_0071;
	}

IL_0071:
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)5)))
		{
			goto IL_0291;
		}
	}
	{
		goto IL_007b;
	}

IL_007b:
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)13))))
		{
			goto IL_028d;
		}
	}
	{
		goto IL_0295;
	}

IL_0089:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_21 = ___reader0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		V_5 = L_23;
		String_t* L_24 = V_5;
		bool L_25;
		L_25 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_24, NULL);
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0287;
		}
	}
	{
		String_t* L_27 = V_5;
		NullCheck(L_27);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, 0, NULL);
		V_7 = L_28;
		Il2CppChar L_29 = V_7;
		V_9 = L_29;
		Il2CppChar L_30 = V_9;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)36))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		Il2CppChar L_31 = V_9;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)64))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0280;
	}

IL_00cb:
	{
		String_t* L_32 = V_5;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_32, 1, NULL);
		V_5 = L_33;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_34 = ___reader0;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_34);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_36 = ___reader0;
		String_t* L_37;
		L_37 = XmlNodeConverter_ConvertTokenToXmlValue_m1D07C5BEE5206E724B94ACD8231788702F3BBA2D(__this, L_36, NULL);
		V_8 = L_37;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = V_0;
		String_t* L_39 = V_5;
		String_t* L_40 = V_8;
		NullCheck(L_38);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_38, L_39, L_40, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		String_t* L_41 = V_5;
		bool L_42;
		L_42 = XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868(__this, L_41, (&V_10), NULL);
		V_11 = L_42;
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_010d;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_44 = ___manager1;
		String_t* L_45 = V_10;
		String_t* L_46 = V_8;
		NullCheck(L_44);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_44, L_45, L_46);
	}

IL_010d:
	{
		goto IL_0284;
	}

IL_0112:
	{
		String_t* L_47 = V_5;
		V_12 = L_47;
		String_t* L_48 = V_12;
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_49)
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_50 = V_12;
		bool L_51;
		L_51 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_50, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_51)
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_52 = V_12;
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_53)
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_54 = V_12;
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_55)
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_56 = V_12;
		bool L_57;
		L_57 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_56, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (L_57)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_027a;
	}

IL_0161:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_58 = ___manager1;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(15 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_58, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_13 = L_59;
		String_t* L_60 = V_13;
		V_14 = (bool)((((RuntimeObject*)(String_t*)L_60) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_61 = V_14;
		if (!L_61)
		{
			goto IL_01f0;
		}
	}
	{
		il2cpp_codegen_initobj((&V_15), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		goto IL_0196;
	}

IL_0184:
	{
		int32_t L_62;
		L_62 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_15), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&V_15), ((int32_t)il2cpp_codegen_add(L_62, 1)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
	}

IL_0196:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_63 = ___manager1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_64 = V_15;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_65 = L_64;
		RuntimeObject* L_66 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_66, NULL);
		NullCheck(L_63);
		String_t* L_68;
		L_68 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_63, L_67);
		V_16 = (bool)((!(((RuntimeObject*)(String_t*)L_68) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_69 = V_16;
		if (L_69)
		{
			goto IL_0184;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_70 = V_15;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_71 = L_70;
		RuntimeObject* L_72 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_71);
		String_t* L_73;
		L_73 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_72, NULL);
		V_13 = L_73;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_74 = V_0;
		String_t* L_75 = V_13;
		String_t* L_76;
		L_76 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F, L_75, NULL);
		NullCheck(L_74);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_74, L_76, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_77 = ___manager1;
		String_t* L_78 = V_13;
		NullCheck(L_77);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_77, L_78, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
	}

IL_01f0:
	{
		String_t* L_79 = V_5;
		bool L_80;
		L_80 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_79, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		V_17 = L_80;
		bool L_81 = V_17;
		if (!L_81)
		{
			goto IL_0207;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_027e;
	}

IL_0207:
	{
		String_t* L_82 = V_5;
		NullCheck(L_82);
		String_t* L_83;
		L_83 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_82, 1, NULL);
		V_5 = L_83;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_84 = ___reader0;
		NullCheck(L_84);
		bool L_85;
		L_85 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_84);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_86 = ___reader0;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_86);
		bool L_88;
		L_88 = JsonTokenUtils_IsPrimitiveToken_m98B1B260A486820D52E43B411B1655C15BFF9AEA(L_87, NULL);
		V_18 = (bool)((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		bool L_89 = V_18;
		if (!L_89)
		{
			goto IL_0249;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_90 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_91 = ___reader0;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_91);
		int32_t L_93 = L_92;
		RuntimeObject* L_94 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), &L_93);
		String_t* L_95;
		L_95 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_94, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_96;
		L_96 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_90, L_95, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var)));
	}

IL_0249:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_97 = ___reader0;
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_97);
		if (L_98)
		{
			goto IL_0254;
		}
	}
	{
		G_B42_0 = ((String_t*)(NULL));
		goto IL_025f;
	}

IL_0254:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_99 = ___reader0;
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_99);
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_100);
		G_B42_0 = L_101;
	}

IL_025f:
	{
		V_8 = G_B42_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_102 = V_0;
		String_t* L_103 = V_13;
		String_t* L_104 = V_5;
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_103, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_104, NULL);
		String_t* L_106 = V_8;
		NullCheck(L_102);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_102, L_105, L_106, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_027e;
	}

IL_027a:
	{
		V_1 = (bool)1;
		goto IL_027e;
	}

IL_027e:
	{
		goto IL_0284;
	}

IL_0280:
	{
		V_1 = (bool)1;
		goto IL_0284;
	}

IL_0284:
	{
		goto IL_028b;
	}

IL_0287:
	{
		V_1 = (bool)1;
	}

IL_028b:
	{
		goto IL_02b1;
	}

IL_028d:
	{
		V_2 = (bool)1;
		goto IL_02b1;
	}

IL_0291:
	{
		V_2 = (bool)1;
		goto IL_02b1;
	}

IL_0295:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_107 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_108 = ___reader0;
		NullCheck(L_108);
		int32_t L_109;
		L_109 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_108);
		int32_t L_110 = L_109;
		RuntimeObject* L_111 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), &L_110);
		String_t* L_112;
		L_112 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_111, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_113;
		L_113 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_107, L_112, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m9B56D685A23448B661C73F3483B9B4063D55C049_RuntimeMethod_var)));
	}

IL_02b1:
	{
	}

IL_02b2:
	{
		bool L_114 = V_1;
		if (L_114)
		{
			goto IL_02c0;
		}
	}
	{
		bool L_115 = V_2;
		if (L_115)
		{
			goto IL_02c0;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_116 = ___reader0;
		NullCheck(L_116);
		bool L_117;
		L_117 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_116);
		G_B57_0 = ((int32_t)(L_117));
		goto IL_02c1;
	}

IL_02c0:
	{
		G_B57_0 = 0;
	}

IL_02c1:
	{
		V_19 = (bool)G_B57_0;
		bool L_118 = V_19;
		if (L_118)
		{
			goto IL_0061;
		}
	}
	{
	}

IL_02cb:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_119 = V_0;
		V_20 = L_119;
		goto IL_02d0;
	}

IL_02d0:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_120 = V_20;
		return L_120;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateInstruction(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00e9;
		}
	}
	{
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		goto IL_00b1;
	}

IL_0020:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_3 = ___reader0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_5 = L_5;
		String_t* L_6 = V_5;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564, NULL);
		if (L_7)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_8 = V_5;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A, NULL);
		if (L_9)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_10 = V_5;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062, NULL);
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0099;
	}

IL_005a:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_12 = ___reader0;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_12);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_14 = ___reader0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_14);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_1 = L_16;
		goto IL_00b0;
	}

IL_006f:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_17 = ___reader0;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_17);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_19);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_2 = L_21;
		goto IL_00b0;
	}

IL_0084:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_22 = ___reader0;
		NullCheck(L_22);
		bool L_23;
		L_23 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_22);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_24 = ___reader0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_24);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_3 = L_26;
		goto IL_00b0;
	}

IL_0099:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_27 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_28 = ___reader0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_28);
		String_t* L_30;
		L_30 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8)), L_29, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_31;
		L_31 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_27, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateInstruction_m7A5C6039FEC825B248B75841D11C1DB284F78006_RuntimeMethod_var)));
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_32 = ___reader0;
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_32);
		if (!L_33)
		{
			goto IL_00c8;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_34);
		G_B14_0 = ((((int32_t)((((int32_t)L_35) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B14_0 = 0;
	}

IL_00c9:
	{
		V_6 = (bool)G_B14_0;
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_37 = ___document1;
		String_t* L_38 = V_1;
		String_t* L_39 = V_2;
		String_t* L_40 = V_3;
		NullCheck(L_37);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(5 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateXmlDeclaration(System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_37, L_38, L_39, L_40);
		V_4 = L_41;
		RuntimeObject* L_42 = ___currentNode2;
		RuntimeObject* L_43 = V_4;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_42, L_43);
		goto IL_010f;
	}

IL_00e9:
	{
		RuntimeObject* L_45 = ___document1;
		String_t* L_46 = ___propertyName3;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_46, 1, NULL);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_48 = ___reader0;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_48);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		NullCheck(L_45);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateProcessingInstruction(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		V_7 = L_51;
		RuntimeObject* L_52 = ___currentNode2;
		RuntimeObject* L_53 = V_7;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_52, L_53);
	}

IL_010f:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::CreateDocumentType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B15_0 = 0;
	{
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		goto IL_00c2;
	}

IL_000e:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_5 = L_2;
		String_t* L_3 = V_5;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F, NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_5 = V_5;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E, NULL);
		if (L_6)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_7 = V_5;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94, NULL);
		if (L_8)
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_9 = V_5;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692, NULL);
		if (L_10)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00aa;
	}

IL_0056:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_11);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_13 = ___reader0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_0 = L_15;
		goto IL_00c1;
	}

IL_006b:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_16);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_18 = ___reader0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_18);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_1 = L_20;
		goto IL_00c1;
	}

IL_0080:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_21 = ___reader0;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_21);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_23 = ___reader0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_23);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		V_2 = L_25;
		goto IL_00c1;
	}

IL_0095:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_26 = ___reader0;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_26);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_28 = ___reader0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_28);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		V_3 = L_30;
		goto IL_00c1;
	}

IL_00aa:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_31 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_32 = ___reader0;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8)), L_33, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_35;
		L_35 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_31, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateDocumentType_m4438D07E2CC5D23244A39CC98EE3F75B74B06FFA_RuntimeMethod_var)));
	}

IL_00c1:
	{
	}

IL_00c2:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_36 = ___reader0;
		NullCheck(L_36);
		bool L_37;
		L_37 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_36);
		if (!L_37)
		{
			goto IL_00d9;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_38 = ___reader0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_38);
		G_B15_0 = ((((int32_t)((((int32_t)L_39) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00da;
	}

IL_00d9:
	{
		G_B15_0 = 0;
	}

IL_00da:
	{
		V_6 = (bool)G_B15_0;
		bool L_40 = V_6;
		if (L_40)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_41 = ___document1;
		String_t* L_42 = V_0;
		String_t* L_43 = V_1;
		String_t* L_44 = V_2;
		String_t* L_45 = V_3;
		NullCheck(L_41);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker4< RuntimeObject*, String_t*, String_t*, String_t*, String_t* >::Invoke(6 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateXmlDocumentType(System.String,System.String,System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_41, L_42, L_43, L_44, L_45);
		V_4 = L_46;
		RuntimeObject* L_47 = ___currentNode2;
		RuntimeObject* L_48 = V_4;
		NullCheck(L_47);
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_47, L_48);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.XmlNodeConverter::CreateElement(System.String,Newtonsoft.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_mD8BF7ADE4CB3682433E964C9986042FFE403FE65 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		String_t* L_0 = ___elementName0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_EncodeName_m42879CBB7E33F534E7BA93890E4A830C5E5C6392(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___elementPrefix2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_4 = ___manager3;
		String_t* L_5 = ___elementPrefix2;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_4, L_5);
		G_B3_0 = L_6;
		goto IL_0021;
	}

IL_001a:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_7 = ___manager3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_7);
		G_B3_0 = L_8;
	}

IL_0021:
	{
		V_1 = G_B3_0;
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_11 = ___document1;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(8 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::CreateElement(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_11, L_12);
		G_B6_0 = L_13;
		goto IL_003b;
	}

IL_0033:
	{
		RuntimeObject* L_14 = ___document1;
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(9 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::CreateElement(System.String,System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		G_B6_0 = L_17;
	}

IL_003b:
	{
		V_2 = G_B6_0;
		RuntimeObject* L_18 = V_2;
		V_3 = L_18;
		goto IL_0040;
	}

IL_0040:
	{
		RuntimeObject* L_19 = V_3;
		return L_19;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::DeserializeNode(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	{
	}

IL_0001:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_0144;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0181;
			}
		}
	}
	{
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_019c;
		}
	}
	{
		goto IL_019e;
	}

IL_002e:
	{
		RuntimeObject* L_4 = ___currentNode3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Newtonsoft.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_6 = ___document1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Newtonsoft.Json.Converters.IXmlElement Newtonsoft.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_6);
		G_B8_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 0;
	}

IL_0045:
	{
		V_3 = (bool)G_B8_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_9 = ___reader0;
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_10;
		L_10 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D1D2D945693CD525D0A8B33864CE6DE9C583278)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var)));
	}

IL_0056:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_11 = ___reader0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_1 = L_13;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_14 = ___reader0;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_14);
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_16);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0133;
		}
	}
	{
		V_5 = 0;
		goto IL_0096;
	}

IL_0081:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_19 = ___reader0;
		RuntimeObject* L_20 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_21 = ___manager2;
		String_t* L_22 = V_1;
		RuntimeObject* L_23 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_19, L_20, L_21, L_22, L_23, NULL);
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0096:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_25 = ___reader0;
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_25);
		if (!L_26)
		{
			goto IL_00ad;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_27 = ___reader0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_27);
		G_B16_0 = ((((int32_t)((((int32_t)L_28) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B16_0 = 0;
	}

IL_00ae:
	{
		V_6 = (bool)G_B16_0;
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_30 = V_5;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00c1;
		}
	}
	{
		bool L_31;
		L_31 = XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline(__this, NULL);
		G_B20_0 = ((int32_t)(L_31));
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B20_0 = 0;
	}

IL_00c2:
	{
		V_7 = (bool)G_B20_0;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_0130;
		}
	}
	{
		RuntimeObject* L_33 = ___currentNode3;
		NullCheck(L_33);
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_34;
		L_34 = InterfaceFuncInvoker0< List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* >::Invoke(2 /* System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_35;
		L_35 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_34, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_8 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0120:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_8), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0115_1;
			}

IL_00da_1:
			{
				RuntimeObject* L_36;
				L_36 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_8), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_9 = L_36;
				RuntimeObject* L_37 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IXmlElement_t48C6FEA57F31ACF88F9D9AB22BDDD0523D1D4780_il2cpp_TypeInfo_var));
				RuntimeObject* L_38 = V_10;
				if (!L_38)
				{
					goto IL_0100_1;
				}
			}
			{
				RuntimeObject* L_39 = V_10;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_39);
				String_t* L_41 = V_1;
				bool L_42;
				L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_40, L_41, NULL);
				G_B26_0 = ((int32_t)(L_42));
				goto IL_0101_1;
			}

IL_0100_1:
			{
				G_B26_0 = 0;
			}

IL_0101_1:
			{
				V_11 = (bool)G_B26_0;
				bool L_43 = V_11;
				if (!L_43)
				{
					goto IL_0114_1;
				}
			}
			{
				RuntimeObject* L_44 = V_10;
				RuntimeObject* L_45 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m2B9B98BC1EC11FEDB63C71314C1FD3312E20A800(__this, L_44, L_45, NULL);
				goto IL_011e_1;
			}

IL_0114_1:
			{
			}

IL_0115_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_8), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_00da_1;
				}
			}

IL_011e_1:
			{
				goto IL_012f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012f:
	{
	}

IL_0130:
	{
		goto IL_0142;
	}

IL_0133:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_47 = ___reader0;
		RuntimeObject* L_48 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_49 = ___manager2;
		String_t* L_50 = V_1;
		RuntimeObject* L_51 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_47, L_48, L_49, L_50, L_51, NULL);
	}

IL_0142:
	{
		goto IL_01ba;
	}

IL_0144:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_52 = ___reader0;
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_52);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		V_2 = L_54;
		goto IL_0161;
	}

IL_0152:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_55 = ___reader0;
		RuntimeObject* L_56 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_57 = ___manager2;
		String_t* L_58 = V_2;
		RuntimeObject* L_59 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m6D20454FDBBEEE2CABB0ED3EC1BCF8F2E0067AF0(__this, L_55, L_56, L_57, L_58, L_59, NULL);
	}

IL_0161:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_60 = ___reader0;
		NullCheck(L_60);
		bool L_61;
		L_61 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_60);
		if (!L_61)
		{
			goto IL_0178;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_62 = ___reader0;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_62);
		G_B41_0 = ((((int32_t)((((int32_t)L_63) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0179;
	}

IL_0178:
	{
		G_B41_0 = 0;
	}

IL_0179:
	{
		V_12 = (bool)G_B41_0;
		bool L_64 = V_12;
		if (L_64)
		{
			goto IL_0152;
		}
	}
	{
		goto IL_01ba;
	}

IL_0181:
	{
		RuntimeObject* L_65 = ___currentNode3;
		RuntimeObject* L_66 = ___document1;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_67 = ___reader0;
		NullCheck(L_67);
		RuntimeObject* L_68;
		L_68 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_67);
		NullCheck(L_66);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlDocument::CreateComment(System.String) */, IXmlDocument_tEF9A1A455D7969D9E4EE72346C887F3648F81726_il2cpp_TypeInfo_var, L_66, ((String_t*)CastclassSealed((RuntimeObject*)L_68, String_t_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.IXmlNode::AppendChild(Newtonsoft.Json.Converters.IXmlNode) */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_65, L_69);
		goto IL_01ba;
	}

IL_019c:
	{
		goto IL_01d6;
	}

IL_019e:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_71 = ___reader0;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_72 = ___reader0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_72);
		int32_t L_74 = L_73;
		RuntimeObject* L_75 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5_il2cpp_TypeInfo_var)), &L_74);
		String_t* L_76;
		L_76 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A)), L_75, NULL);
		JsonSerializationException_t00F36890DFAC04F2FDE779151340B9C5563612EC* L_77;
		L_77 = JsonSerializationException_Create_m6C7554AD803E3362DCC52A8DB9DC068469CE1D84(L_71, L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m7CF6B466118CB9E0CF4CAC90CA34BC769B45229C_RuntimeMethod_var)));
	}

IL_01ba:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_78 = ___reader0;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_78);
		if ((((int32_t)L_79) == ((int32_t)4)))
		{
			goto IL_01cc;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_80 = ___reader0;
		NullCheck(L_80);
		bool L_81;
		L_81 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_80);
		G_B49_0 = ((int32_t)(L_81));
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B49_0 = 1;
	}

IL_01cd:
	{
		V_13 = (bool)G_B49_0;
		bool L_82 = V_13;
		if (L_82)
		{
			goto IL_0001;
		}
	}

IL_01d6:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_mD9C356F879F0FF7F1006E34842F95ADE42128868 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0 = ___attributeName0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, 4, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___attributeName0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		String_t** L_6 = ___prefix1;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		V_2 = (bool)1;
		goto IL_0058;
	}

IL_002b:
	{
		String_t* L_8 = ___attributeName0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, 5, NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)58)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		String_t** L_11 = ___prefix1;
		String_t* L_12 = ___attributeName0;
		String_t* L_13 = ___attributeName0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		NullCheck(L_12);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, 6, ((int32_t)il2cpp_codegen_subtract(L_14, 6)), NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_15);
		V_2 = (bool)1;
		goto IL_0058;
	}

IL_0050:
	{
	}

IL_0051:
	{
		String_t** L_16 = ___prefix1;
		*((RuntimeObject**)L_16) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)NULL);
		V_2 = (bool)0;
		goto IL_0058;
	}

IL_0058:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m2E3B5735173BB3088B0395F6266B6BCFFF7D6090 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		List_1_tCA41878C726B03CC852C13E2FB0D9FFA9CEE458E* L_0 = ___c0;
		NullCheck(L_0);
		Enumerator_t5D6B89D2864E6CA1D667C75E2375831735B2B941 L_1;
		L_1 = List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E(L_0, List_1_GetEnumerator_m8E48B727D08C794BA9EB42BB47747FD56F55C10E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD((&V_0), Enumerator_Dispose_mC2891A1E295FEF8B5B64E96EB62B5945149DF7BD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_inline((&V_0), Enumerator_get_Current_m894DFFA678072980ECF786B52912E28891E006DB_RuntimeMethod_var);
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Newtonsoft.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_tF33B9C36278838790766F098BDF3C8649F0ED47B_il2cpp_TypeInfo_var, L_3);
				bool L_5;
				L_5 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_002d_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_004c;
			}

IL_002d_1:
			{
			}

IL_002e_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88((&V_0), Enumerator_MoveNext_m8A802F6DDB7EA4435FEE6877988C792B8B583F88_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		V_3 = (bool)0;
		goto IL_004c;
	}

IL_004c:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_CanConvert_m2489573A00FFEB412ECFAB91B0CA2EA83C5D1D32 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, Type_t* ___valueType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Type_t* L_2 = ___valueType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_001a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		Type_t* L_7 = ___valueType0;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_6, L_7);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0033:
	{
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter__ctor_m5EA79F6E3B52F680FC2F5DA529993033645D62C3 (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(__this, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		__this->____writer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		int32_t L_1;
		L_1 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___t0;
		BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_3 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_5 = NULL;
	uint64_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_8 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_9 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_10 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_11 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_12 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_13 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_14 = NULL;
	int64_t V_15 = 0;
	bool V_16 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_20;
	memset((&V_20), 0, sizeof(V_20));
	BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* V_21 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_22 = NULL;
	BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* V_23 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_24 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_25 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0203;
			}
			case 1:
			{
				goto IL_022f;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_0102;
			}
			case 4:
			{
				goto IL_033f;
			}
			case 5:
			{
				goto IL_028d;
			}
			case 6:
			{
				goto IL_038d;
			}
			case 7:
			{
				goto IL_0266;
			}
			case 8:
			{
				goto IL_0292;
			}
			case 9:
			{
				goto IL_028d;
			}
			case 10:
			{
				goto IL_03b8;
			}
			case 11:
			{
				goto IL_0420;
			}
			case 12:
			{
				goto IL_0420;
			}
			case 13:
			{
				goto IL_0420;
			}
			case 14:
			{
				goto IL_0420;
			}
			case 15:
			{
				goto IL_01ab;
			}
			case 16:
			{
				goto IL_0420;
			}
			case 17:
			{
				goto IL_01d7;
			}
		}
	}
	{
		goto IL_0420;
	}

IL_005d:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___t0;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = __this->____writer_1;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, L_6);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00ee:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_0081_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_12;
				L_12 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_14 = V_3;
				NullCheck(L_14);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_15;
				L_15 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_14, NULL);
				NullCheck(L_15);
				int8_t L_16;
				L_16 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_15);
				NullCheck(L_13);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_13, L_16);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_17 = V_3;
				NullCheck(L_17);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_18;
				L_18 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_17, NULL);
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_18, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_20 = V_3;
				NullCheck(L_20);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_21;
				L_21 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_20, NULL);
				NullCheck(L_21);
				int32_t L_22;
				L_22 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_21, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), L_22, L_23, NULL);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_24 = V_3;
				NullCheck(L_24);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_25;
				L_25 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_24, NULL);
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_25, NULL);
			}

IL_00da_1:
			{
				RuntimeObject* L_26 = V_2;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0081_1;
				}
			}
			{
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = __this->____writer_1;
		NullCheck(L_28);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_28, (uint8_t)0);
		goto IL_0445;
	}

IL_0102:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_29 = ___t0;
		V_5 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_29, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = __this->____writer_1;
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_31, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_30, L_32);
		V_6 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_33 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_33, NULL);
		V_7 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_7;
					if (!L_35)
					{
						goto IL_0197;
					}
				}
				{
					RuntimeObject* L_36 = V_7;
					NullCheck(L_36);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
				}

IL_0197:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0180_1;
			}

IL_012e_1:
			{
				RuntimeObject* L_37 = V_7;
				NullCheck(L_37);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_38;
				L_38 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_37);
				V_8 = L_38;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = __this->____writer_1;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_40 = V_8;
				NullCheck(L_40);
				int8_t L_41;
				L_41 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_40);
				NullCheck(L_39);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_39, L_41);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
				L_42 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
				String_t* L_43;
				L_43 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&V_6), L_42, NULL);
				uint64_t L_44 = V_6;
				int32_t L_45;
				L_45 = MathUtils_IntLength_mBAFEF09419CEA67F2644A0723D668BE4E6400DE0(L_44, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_46 = V_4;
				BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, L_43, L_45, L_46, NULL);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_47 = V_8;
				BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E(__this, L_47, NULL);
				uint64_t L_48 = V_6;
				V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)1)));
			}

IL_0180_1:
			{
				RuntimeObject* L_49 = V_7;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_012e_1;
				}
			}
			{
				goto IL_0198;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0198:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = __this->____writer_1;
		NullCheck(L_51);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_51, (uint8_t)0);
		goto IL_0445;
	}

IL_01ab:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_52 = ___t0;
		V_9 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_52, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_54 = V_9;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Convert_ToInt32_m2BB2FCE52968B106528283B6E972DCEB875128D9(L_55, L_56, NULL);
		NullCheck(L_53);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_53, L_57);
		goto IL_0445;
	}

IL_01d7:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_58 = ___t0;
		V_10 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_58, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_60 = V_10;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_62;
		L_62 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_63;
		L_63 = Convert_ToInt64_mA1406B21E08189BC896A2260B9753AF60570DE1F(L_61, L_62, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_59, L_63);
		goto IL_0445;
	}

IL_0203:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_64 = ___t0;
		V_11 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_64, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_65 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_66 = V_11;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_68;
		L_68 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = Convert_ToDouble_mDD0C8022294099032F3EB91C4F6E0D4EEE2A270F(L_67, L_68, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_65, L_69);
		goto IL_0445;
	}

IL_022f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_70 = ___t0;
		V_12 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_70, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_71 = V_12;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_71, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_73, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_75 = V_12;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_75, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_77), ((int32_t)il2cpp_codegen_subtract(L_76, 4)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)), L_74, L_77, NULL);
		goto IL_0445;
	}

IL_0266:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_78 = ___t0;
		V_13 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_78, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_79 = __this->____writer_1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_80 = V_13;
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_80, NULL);
		NullCheck(L_79);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_79, ((*(bool*)((bool*)(bool*)UnBox(L_81, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))));
		goto IL_0445;
	}

IL_028d:
	{
		goto IL_0445;
	}

IL_0292:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_82 = ___t0;
		V_14 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_82, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		V_15 = ((int64_t)0);
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_83 = V_14;
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_83, NULL);
		V_16 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_84, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_85 = V_16;
		if (!L_85)
		{
			goto IL_0306;
		}
	}
	{
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_86 = V_14;
		NullCheck(L_86);
		RuntimeObject* L_87;
		L_87 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_86, NULL);
		V_17 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_87, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		int32_t L_88;
		L_88 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		V_18 = (bool)((((int32_t)L_88) == ((int32_t)1))? 1 : 0);
		bool L_89 = V_18;
		if (!L_89)
		{
			goto IL_02df;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_90;
		L_90 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_17), NULL);
		V_17 = L_90;
		goto IL_02f9;
	}

IL_02df:
	{
		int32_t L_91;
		L_91 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(__this, NULL);
		V_19 = (bool)((((int32_t)L_91) == ((int32_t)2))? 1 : 0);
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_02f9;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_93;
		L_93 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_17), NULL);
		V_17 = L_93;
	}

IL_02f9:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_94 = V_17;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_95;
		L_95 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m8B6566AC54130989488A438E1145011B92E1F0D3(L_94, (bool)0, NULL);
		V_15 = L_95;
		goto IL_032b;
	}

IL_0306:
	{
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_96 = V_14;
		NullCheck(L_96);
		RuntimeObject* L_97;
		L_97 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_96, NULL);
		V_20 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_97, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_98;
		L_98 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&V_20), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_99;
		L_99 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&V_20), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		int64_t L_100;
		L_100 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m1A78A1FC9604E80121288A6985CEF352038067C2(L_98, L_99, NULL);
		V_15 = L_100;
	}

IL_032b:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_101 = __this->____writer_1;
		int64_t L_102 = V_15;
		NullCheck(L_101);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_101, L_102);
		goto IL_0445;
	}

IL_033f:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_103 = ___t0;
		V_21 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_103, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_104 = V_21;
		NullCheck(L_104);
		RuntimeObject* L_105;
		L_105 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_104, NULL);
		V_22 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_105, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_106 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_22;
		NullCheck(L_107);
		NullCheck(L_106);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_106, ((int32_t)(((RuntimeArray*)L_107)->max_length)));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_108 = __this->____writer_1;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_109 = V_21;
		NullCheck(L_109);
		uint8_t L_110;
		L_110 = BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline(L_109, NULL);
		NullCheck(L_108);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_108, L_110);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_111 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_22;
		NullCheck(L_111);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_111, L_112);
		goto IL_0445;
	}

IL_038d:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_113 = ___t0;
		V_23 = ((BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)CastclassClass((RuntimeObject*)L_113, BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var));
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_114 = V_23;
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_114, NULL);
		V_24 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_115, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_116 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = V_24;
		NullCheck(L_116);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_116, L_117);
		goto IL_0445;
	}

IL_03b8:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_118 = ___t0;
		V_25 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_118, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_119 = V_25;
		NullCheck(L_119);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_120;
		L_120 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_119, NULL);
		NullCheck(L_120);
		RuntimeObject* L_121;
		L_121 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_120, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_122 = V_25;
		NullCheck(L_122);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_123;
		L_123 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_122, NULL);
		NullCheck(L_123);
		int32_t L_124;
		L_124 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_123, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_125 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_121, String_t_il2cpp_TypeInfo_var)), L_124, L_125, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_126 = V_25;
		NullCheck(L_126);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_127;
		L_127 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_126, NULL);
		NullCheck(L_127);
		RuntimeObject* L_128;
		L_128 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_127, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_129 = V_25;
		NullCheck(L_129);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_130;
		L_130 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_129, NULL);
		NullCheck(L_130);
		int32_t L_131;
		L_131 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_130, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_132 = V_4;
		BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)), L_131, L_132, NULL);
		goto IL_0445;
	}

IL_0420:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_133;
		L_133 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_134 = ___t0;
		NullCheck(L_134);
		int8_t L_135;
		L_135 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_134);
		int8_t L_136 = L_135;
		RuntimeObject* L_137 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_136);
		String_t* L_138;
		L_138 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_133, L_137, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_139 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_139);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_139, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_138, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_139, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_WriteTokenInternal_m54C0EA96679D81C5022FD97C4499657E1D38DA7E_RuntimeMethod_var)));
	}

IL_0445:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m8614BA54CB21C5D68D63EE7B4377049F8C838801 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___calculatedlengthPrefix2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = __this->____writer_1;
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&___calculatedlengthPrefix2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, L_3);
	}

IL_0021:
	{
		String_t* L_4 = ___s0;
		int32_t L_5 = ___byteCount1;
		BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB(__this, L_4, L_5, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = __this->____writer_1;
		NullCheck(L_6);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, (uint8_t)0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_m8D5ECCD51C6AB60CE140EF0AF33E9E5C6A1485AB (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		String_t* L_0 = ___s0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0086;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____largeByteBuffer_2;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____largeByteBuffer_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____largeByteBuffer_2), (void*)L_4);
	}

IL_0029:
	{
		int32_t L_5 = ___byteCount1;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)256)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_8 = ___s0;
		String_t* L_9 = ___s0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____largeByteBuffer_2;
		NullCheck(L_7);
		int32_t L_12;
		L_12 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_7, L_8, 0, L_10, L_11, 0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____largeByteBuffer_2;
		int32_t L_15 = ___byteCount1;
		NullCheck(L_13);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		goto IL_0085;
	}

IL_006a:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_17 = ___s0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_19 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_19, L_20);
	}

IL_0085:
	{
	}

IL_0086:
	{
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___stringByteCount0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0007;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___includeSize1;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 5;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___stringByteCount0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907 (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* V_7 = NULL;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* V_11 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* V_12 = NULL;
	String_t* V_13 = NULL;
	BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* V_16 = NULL;
	int32_t V_17 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B25_0 = NULL;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* G_B26_1 = NULL;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0169;
			}
			case 1:
			{
				goto IL_0171;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_01e5;
			}
			case 5:
			{
				goto IL_01d5;
			}
			case 6:
			{
				goto IL_0215;
			}
			case 7:
			{
				goto IL_01cd;
			}
			case 8:
			{
				goto IL_01dd;
			}
			case 9:
			{
				goto IL_01d5;
			}
			case 10:
			{
				goto IL_021b;
			}
			case 11:
			{
				goto IL_0260;
			}
			case 12:
			{
				goto IL_0260;
			}
			case 13:
			{
				goto IL_0260;
			}
			case 14:
			{
				goto IL_0260;
			}
			case 15:
			{
				goto IL_0159;
			}
			case 16:
			{
				goto IL_0260;
			}
			case 17:
			{
				goto IL_0161;
			}
		}
	}
	{
		goto IL_0260;
	}

IL_005d:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_3 = ___t0;
		V_1 = ((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_3, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var));
		V_2 = 4;
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_0071_1:
			{
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_9;
				L_9 = InterfaceFuncInvoker0< BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tE241CB87CC95A73A720D51ACEC78F0245F877C86_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				V_5 = 1;
				int32_t L_10 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_11 = V_4;
				NullCheck(L_11);
				BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_12;
				L_12 = BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline(L_11, NULL);
				int32_t L_13;
				L_13 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_12, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
				int32_t L_14 = V_5;
				BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_15 = V_4;
				NullCheck(L_15);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_16;
				L_16 = BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline(L_15, NULL);
				int32_t L_17;
				L_17 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_16, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
				int32_t L_18 = V_2;
				int32_t L_19 = V_5;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
			}

IL_00a7_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0071_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_23, L_24, NULL);
		int32_t L_25 = V_2;
		V_6 = L_25;
		goto IL_0285;
	}

IL_00d0:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_26 = ___t0;
		V_7 = ((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_26, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var));
		V_8 = 4;
		V_9 = ((int64_t)0);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_27 = V_7;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(L_27, NULL);
		V_10 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_10;
					if (!L_29)
					{
						goto IL_013a;
					}
				}
				{
					RuntimeObject* L_30 = V_10;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_013a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0123_1;
			}

IL_00ec_1:
			{
				RuntimeObject* L_31 = V_10;
				NullCheck(L_31);
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_32;
				L_32 = InterfaceFuncInvoker0< BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_t02CD314CF6671EA4E8F21A8C41D664B043C07DD3_il2cpp_TypeInfo_var, L_31);
				V_11 = L_32;
				int32_t L_33 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				int32_t L_34 = V_8;
				uint64_t L_35 = V_9;
				int32_t L_36;
				L_36 = MathUtils_IntLength_mBAFEF09419CEA67F2644A0723D668BE4E6400DE0(L_35, NULL);
				int32_t L_37;
				L_37 = BsonBinaryWriter_CalculateSize_m2AF1B2832ECDC9964A31AA22CD528C0514BCAE46(__this, L_36, NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_34, L_37));
				int32_t L_38 = V_8;
				BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_39 = V_11;
				int32_t L_40;
				L_40 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_39, NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_38, L_40));
				uint64_t L_41 = V_9;
				V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)1)));
			}

IL_0123_1:
			{
				RuntimeObject* L_42 = V_10;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00ec_1;
				}
			}
			{
				goto IL_013b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_45 = V_7;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_45, L_46, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_47 = V_7;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_47, NULL);
		V_6 = L_48;
		goto IL_0285;
	}

IL_0159:
	{
		V_6 = 4;
		goto IL_0285;
	}

IL_0161:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_0169:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_0171:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_49 = ___t0;
		V_12 = ((BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)CastclassClass((RuntimeObject*)L_49, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_50 = V_12;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_50, NULL);
		V_13 = ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var));
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_52 = V_12;
		String_t* L_53 = V_13;
		G_B24_0 = L_52;
		if (L_53)
		{
			G_B25_0 = L_52;
			goto IL_0191;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_019d;
	}

IL_0191:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_54 = ((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56;
		L_56 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_54, L_55);
		G_B26_0 = L_56;
		G_B26_1 = G_B25_0;
	}

IL_019d:
	{
		NullCheck(G_B26_1);
		BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline(G_B26_1, G_B26_0, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_57 = V_12;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_58 = V_12;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline(L_58, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_60 = V_12;
		NullCheck(L_60);
		bool L_61;
		L_61 = BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline(L_60, NULL);
		int32_t L_62;
		L_62 = BsonBinaryWriter_CalculateSizeWithLength_mB26898787AEA883063A203D7B1C2325586B6E737(__this, L_59, L_61, NULL);
		NullCheck(L_57);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_57, L_62, NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_63 = V_12;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_63, NULL);
		V_6 = L_64;
		goto IL_0285;
	}

IL_01cd:
	{
		V_6 = 1;
		goto IL_0285;
	}

IL_01d5:
	{
		V_6 = 0;
		goto IL_0285;
	}

IL_01dd:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_01e5:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_65 = ___t0;
		V_14 = ((BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)CastclassClass((RuntimeObject*)L_65, BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_66 = V_14;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2(L_66, NULL);
		V_15 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_67, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_68 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_15;
		NullCheck(L_69);
		NullCheck(L_68);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_68, ((int32_t)il2cpp_codegen_add(5, ((int32_t)(((RuntimeArray*)L_69)->max_length)))), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_70 = V_14;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_70, NULL);
		V_6 = L_71;
		goto IL_0285;
	}

IL_0215:
	{
		V_6 = ((int32_t)12);
		goto IL_0285;
	}

IL_021b:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_72 = ___t0;
		V_16 = ((BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)CastclassClass((RuntimeObject*)L_72, BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var));
		V_17 = 0;
		int32_t L_73 = V_17;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_74 = V_16;
		NullCheck(L_74);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_75;
		L_75 = BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline(L_74, NULL);
		int32_t L_76;
		L_76 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_75, NULL);
		V_17 = ((int32_t)il2cpp_codegen_add(L_73, L_76));
		int32_t L_77 = V_17;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_78 = V_16;
		NullCheck(L_78);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_79;
		L_79 = BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline(L_78, NULL);
		int32_t L_80;
		L_80 = BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907(__this, L_79, NULL);
		V_17 = ((int32_t)il2cpp_codegen_add(L_77, L_80));
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_81 = V_16;
		int32_t L_82 = V_17;
		NullCheck(L_81);
		BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline(L_81, L_82, NULL);
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_83 = V_16;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline(L_83, NULL);
		V_6 = L_84;
		goto IL_0285;
	}

IL_0260:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_85;
		L_85 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_86 = ___t0;
		NullCheck(L_86);
		int8_t L_87;
		L_87 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_86);
		int8_t L_88 = L_87;
		RuntimeObject* L_89 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_88);
		String_t* L_90;
		L_90 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_85, L_89, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_91 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_91);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_91, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_90, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_CalculateSize_mC09EDD18FAF0B2E65A36FCC6D0C7615EE1544907_RuntimeMethod_var)));
	}

IL_0285:
	{
		int32_t L_92 = V_6;
		return L_92;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__cctor_m5C0FA312AD56363C4534AE5DDF9134D815C1CFD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var))->___Encoding_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_JsonNet35BinaryCompatibility_m429C63D604BDC2BBF8CFE35248B4D41371C1DAFE (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____jsonNet35BinaryCompatibility_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_JsonNet35BinaryCompatibility_mE3AB448A934B558F6A32630E0D70440616570807 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____jsonNet35BinaryCompatibility_28 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::get_ReadRootValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_ReadRootValueAsArray_mA61EBEBB08A8483EFB848CC9FD3476F413FF0F24 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____readRootValueAsArray_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_ReadRootValueAsArray_m2FC5A40C553833F78193274168325865E54ABABA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____readRootValueAsArray_27 = L_0;
		return;
	}
}
// System.DateTimeKind Newtonsoft.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_DateTimeKindHandling_m9D015B7C7A3BD6C2C5418B42F7C0E1BBFB510E84 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dateTimeKindHandling_29 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mA390BC9C2C09F1B1A97A0F26430A1E1149D3AE9F (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m8DDC7432406DEBDC42DC0930E73ADC28E767C92B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF744C7E937F79AB3421D775693B583EB820168BF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		__this->____reader_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_2);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_3, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_3);
		bool L_4 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_4;
		int32_t L_5 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_5;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m5991340F78C61D5938CF823F1C7D309FEF4037FC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m1C65CDB90A8B108668938BBE17329FEC76D62C27(__this, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587(L_0, _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___reader0;
		__this->____reader_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_1);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_2 = (List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9*)il2cpp_codegen_object_new(List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC(L_2, List_1__ctor_m51ABD0EBEBE9673A2608650D331CEE679D5029FC_RuntimeMethod_var);
		__this->____stack_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_2);
		bool L_3 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_3;
		int32_t L_4 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_4;
		return;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int8_t L_0;
		L_0 = BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691(__this, NULL);
		__this->____currentElementType_24 = L_0;
		String_t* L_1;
		L_1 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->____bsonReaderState_25;
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0035_1;
				}
				case 1:
				{
					goto IL_003e_1;
				}
				case 2:
				{
					goto IL_003e_1;
				}
				case 3:
				{
					goto IL_003e_1;
				}
				case 4:
				{
					goto IL_0047_1;
				}
				case 5:
				{
					goto IL_0047_1;
				}
				case 6:
				{
					goto IL_0047_1;
				}
				case 7:
				{
					goto IL_0047_1;
				}
				case 8:
				{
					goto IL_0047_1;
				}
			}
		}
		{
			goto IL_0050_1;
		}

IL_0035_1:
		{
			bool L_2;
			L_2 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
			V_0 = L_2;
			goto IL_0071_1;
		}

IL_003e_1:
		{
			bool L_3;
			L_3 = BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4(__this, NULL);
			V_0 = L_3;
			goto IL_0071_1;
		}

IL_0047_1:
		{
			bool L_4;
			L_4 = BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E(__this, NULL);
			V_0 = L_4;
			goto IL_0071_1;
		}

IL_0050_1:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
			int32_t L_6 = __this->____bsonReaderState_25;
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_7);
			String_t* L_9;
			L_9 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338)), L_5, L_8, NULL);
			JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_10;
			L_10 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_Read_mFEBE910985E708117F1DFB084E839D4EC4432C70_RuntimeMethod_var)));
		}

IL_0071_1:
		{
			bool L_11 = V_0;
			V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_0086_1;
			}
		}
		{
			JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
			V_3 = (bool)0;
			goto IL_0098;
		}

IL_0086_1:
		{
			V_3 = (bool)1;
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.IO.EndOfStreamException)
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 0, NULL);
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0098;
	}// end catch (depth: 1)

IL_0098:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_Close_mD087C7D1ACBF9FEB47490BA47BE24298DFD86EC5 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		JsonReader_Close_m68AD33DBE5DA0990DB82A21F3AB2D1F91AE49F84(__this, NULL);
		bool L_0;
		L_0 = JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		G_B3_0 = ((!(((RuntimeObject*)(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = __this->____reader_20;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryReader::Close() */, L_3);
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->____bsonReaderState_25;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_00b9;
			}
			case 4:
			{
				goto IL_00e3;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_0029:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029, NULL);
		__this->____bsonReaderState_25 = 5;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0044:
	{
		int32_t L_2;
		L_2 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		String_t* L_3;
		L_3 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_3, NULL);
		__this->____bsonReaderState_25 = 6;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0068:
	{
		int32_t L_4;
		L_4 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699(__this, NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93, NULL);
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0087:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 7;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_6, 3, NULL);
		V_4 = L_6;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_4;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_7, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_8 = V_4;
		int32_t L_9;
		L_9 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_8);
		L_8->___Length_1 = L_9;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_00b9:
	{
		bool L_10;
		L_10 = BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF(__this, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, __this);
		G_B10_0 = ((((int32_t)L_12) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B10_0 = 0;
	}

IL_00d0:
	{
		V_5 = (bool)G_B10_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00df;
		}
	}
	{
		__this->____bsonReaderState_25 = 8;
	}

IL_00df:
	{
		bool L_14 = V_1;
		V_2 = L_14;
		goto IL_00fd;
	}

IL_00e3:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_00f7:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadCodeWScope_m0DA7805CE5A3D1CC83E1554C8015207538D1FF3E_RuntimeMethod_var)));
	}

IL_00fd:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_010e;
	}

IL_0020:
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		__this->____bsonReaderState_25 = 2;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_003c:
	{
		int32_t L_4 = __this->____bsonReaderState_25;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_6;
		L_6 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_6, NULL);
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_0061:
	{
		int32_t L_7 = __this->____bsonReaderState_25;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_9, NULL);
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_0087:
	{
		int32_t L_10 = __this->____bsonReaderState_25;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_12, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_14;
		L_14 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_00a4:
	{
		int32_t L_15 = __this->____bsonReaderState_25;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00cd;
		}
	}
	{
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		__this->____bsonReaderState_25 = 3;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_00cd:
	{
		int32_t L_17 = __this->____bsonReaderState_25;
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)3))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00f1;
		}
	}
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_00f1:
	{
		int32_t L_19 = __this->____bsonReaderState_25;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tD4B4396ABF029DAD64E0389C71168E3C4949B41F_il2cpp_TypeInfo_var)), &L_20);
		String_t* L_22;
		L_22 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_21, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_23;
		L_23 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_010e:
	{
		int32_t L_24;
		L_24 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699(__this, NULL);
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_26, NULL);
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_28;
		L_28 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mB9A96BD71CDF91482061F6C9074C2A83CB56E5F4_RuntimeMethod_var)));
	}

IL_012a:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int8_t V_4 = 0;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m2B6FA669883053CDABF108A980F808CDC9F13699(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00b0;
			}
			case 4:
			{
				goto IL_01ab;
			}
			case 5:
			{
				goto IL_00b0;
			}
			case 6:
			{
				goto IL_01ab;
			}
			case 7:
			{
				goto IL_0092;
			}
			case 8:
			{
				goto IL_00b0;
			}
			case 9:
			{
				goto IL_01a3;
			}
			case 10:
			{
				goto IL_01a5;
			}
			case 11:
			{
				goto IL_01a7;
			}
			case 12:
			{
				goto IL_01a9;
			}
		}
	}
	{
		goto IL_01ab;
	}

IL_0047:
	{
		bool L_2 = __this->____readRootValueAsArray_27;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
	}

IL_0054:
	{
		V_3 = G_B5_0;
		bool L_3 = __this->____readRootValueAsArray_27;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 3;
	}

IL_0061:
	{
		V_4 = G_B8_0;
		int32_t L_4 = V_3;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_4, NULL);
		int8_t L_5 = V_4;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_6 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_6, L_5, NULL);
		V_5 = L_6;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_7 = V_5;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_7, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_8 = V_5;
		int32_t L_9;
		L_9 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_8);
		L_8->___Length_1 = L_9;
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0092:
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_009a:
	{
		int8_t L_10 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_10, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_00b0:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_11 = __this->____currentContext_26;
		V_1 = L_11;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_12 = V_1;
		V_7 = (bool)((((RuntimeObject*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_00ca:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Length_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Position_2;
		int32_t L_18 = V_2;
		V_8 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0126;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_20 = V_1;
		NullCheck(L_20);
		int8_t L_21 = L_20->___Type_0;
		V_9 = (bool)((((int32_t)L_21) == ((int32_t)4))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_23;
		L_23 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		int8_t L_24 = __this->____currentElementType_24;
		BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB(__this, L_24, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_010f:
	{
		String_t* L_25;
		L_25 = BsonReader_ReadElement_m51016B8553A73DB79F38CF122BF6292662F4D754(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 4, L_25, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0126:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Position_2;
		int32_t L_28 = V_2;
		V_10 = (bool)((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_0196;
		}
	}
	{
		uint8_t L_30;
		L_30 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		V_12 = (bool)((!(((uint32_t)L_30) <= ((uint32_t)0)))? 1 : 0);
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_0152;
		}
	}
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_32;
		L_32 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_0152:
	{
		BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312(__this, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_33 = __this->____currentContext_26;
		V_13 = (bool)((!(((RuntimeObject*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_0177;
		}
	}
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Length_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_36, NULL);
	}

IL_0177:
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_37 = V_1;
		NullCheck(L_37);
		int8_t L_38 = L_37->___Type_0;
		if ((((int32_t)L_38) == ((int32_t)3)))
		{
			goto IL_0184;
		}
	}
	{
		G_B25_0 = ((int32_t)14);
		goto IL_0186;
	}

IL_0184:
	{
		G_B25_0 = ((int32_t)13);
	}

IL_0186:
	{
		V_11 = G_B25_0;
		int32_t L_39 = V_11;
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, L_39, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0196:
	{
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_40;
		L_40 = JsonReaderException_Create_m7C3451F04FD7F5BB5425F3A71D5BADB719860C26(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_01a3:
	{
		goto IL_01b1;
	}

IL_01a5:
	{
		goto IL_01b1;
	}

IL_01a7:
	{
		goto IL_01b1;
	}

IL_01a9:
	{
		goto IL_01b1;
	}

IL_01ab:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_41 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m048652A5459D2B5D052FB068C5EC478734122EBF_RuntimeMethod_var)));
	}

IL_01b1:
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_01b6:
	{
		bool L_42 = V_6;
		return L_42;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_m63825894764D148A8EE7451048A0761FF27BE312 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_1 = __this->____stack_21;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_1, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_m157C47B733293E34DDC19F26D66D2C959F8251FE_RuntimeMethod_var);
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_3 = __this->____stack_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_3, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		__this->____currentContext_26 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)NULL);
		goto IL_0057;
	}

IL_0037:
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_6 = __this->____stack_21;
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_7 = __this->____stack_21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_inline(L_7, List_1_get_Count_m543633880DCEC6159BABF4A6C35B9FFD0F7D5079_RuntimeMethod_var);
		NullCheck(L_6);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_9;
		L_9 = List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_mF6B5797FA7FC75AAAE66FC325B93A5C2AC311E98_RuntimeMethod_var);
		__this->____currentContext_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_9);
	}

IL_0057:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::PushContext(Newtonsoft.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* ___newContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t944CCF3A156F251D4FD98B25EC08251DB21ADBC9* L_0 = __this->____stack_21;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = ___newContext0;
		NullCheck(L_0);
		List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_inline(L_0, L_1, List_1_Add_mFB02AD1C6DBE2CCEC757E8633ED0353BFCA3A415_RuntimeMethod_var);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_2 = ___newContext0;
		__this->____currentContext_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_2);
		return;
	}
}
// System.Byte Newtonsoft.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::ReadType(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	double V_1 = 0.0;
	uint8_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_8;
	memset((&V_8), 0, sizeof(V_8));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	bool V_13 = false;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_14 = NULL;
	ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* V_15 = NULL;
	int32_t V_16 = 0;
	RuntimeObject* G_B12_0 = NULL;
	{
		int8_t L_0 = ___type0;
		V_0 = L_0;
		int8_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_0110;
			}
			case 5:
			{
				goto IL_013d;
			}
			case 6:
			{
				goto IL_014b;
			}
			case 7:
			{
				goto IL_0165;
			}
			case 8:
			{
				goto IL_0187;
			}
			case 9:
			{
				goto IL_01df;
			}
			case 10:
			{
				goto IL_01ed;
			}
			case 11:
			{
				goto IL_021f;
			}
			case 12:
			{
				goto IL_0230;
			}
			case 13:
			{
				goto IL_00a4;
			}
			case 14:
			{
				goto IL_0241;
			}
			case 15:
			{
				goto IL_0252;
			}
			case 16:
			{
				goto IL_0268;
			}
			case 17:
			{
				goto IL_0268;
			}
		}
	}
	{
		goto IL_027d;
	}

IL_0058:
	{
		double L_2;
		L_2 = BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = ((JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*)__this)->____floatParseHandling_10;
		V_13 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_13;
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		double L_5 = V_1;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Convert_ToDecimal_m1CAD30F8AE6C0BE6D4A74023962A6536AA764ADA(L_7, L_8, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = L_9;
		RuntimeObject* L_11 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_10);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_11, NULL);
		goto IL_009f;
	}

IL_008f:
	{
		double L_12 = V_1;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 8, L_14, NULL);
	}

IL_009f:
	{
		goto IL_0298;
	}

IL_00a4:
	{
		String_t* L_15;
		L_15 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_15, NULL);
		goto IL_0298;
	}

IL_00b8:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_16 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_16, 3, NULL);
		V_14 = L_16;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_17 = V_14;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_17, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_18 = V_14;
		int32_t L_19;
		L_19 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_18);
		L_18->___Length_1 = L_19;
		goto IL_0298;
	}

IL_00e4:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 2, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_20 = (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A*)il2cpp_codegen_object_new(ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B(L_20, 4, NULL);
		V_15 = L_20;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_21 = V_15;
		BsonReader_PushContext_m1AB78E117227021B3B7F29D571D58BB424B3A7EF(__this, L_21, NULL);
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_22 = V_15;
		int32_t L_23;
		L_23 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		NullCheck(L_22);
		L_22->___Length_1 = L_23;
		goto IL_0298;
	}

IL_0110:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF(__this, (&V_2), NULL);
		V_3 = L_24;
		uint8_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)4))))
		{
			goto IL_012a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
		Guid_t L_27;
		memset((&L_27), 0, sizeof(L_27));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_27), L_26, /*hidden argument*/NULL);
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Guid_t_il2cpp_TypeInfo_var, &L_28);
		G_B12_0 = L_29;
		goto IL_012b;
	}

IL_012a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		G_B12_0 = ((RuntimeObject*)(L_30));
	}

IL_012b:
	{
		V_4 = G_B12_0;
		RuntimeObject* L_31 = V_4;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), L_31, NULL);
		goto IL_0298;
	}

IL_013d:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)12), NULL);
		goto IL_0298;
	}

IL_014b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, ((int32_t)12), NULL);
		V_5 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)17), (RuntimeObject*)L_33, NULL);
		goto IL_0298;
	}

IL_0165:
	{
		uint8_t L_34;
		L_34 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Convert_ToBoolean_m15C298BDE61E3537C216A843315CD45862704BBD(L_34, NULL);
		V_6 = L_35;
		bool L_36 = V_6;
		bool L_37 = L_36;
		RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)10), L_38, NULL);
		goto IL_0298;
	}

IL_0187:
	{
		int64_t L_39;
		L_39 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		V_7 = L_39;
		int64_t L_40 = V_7;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_41;
		L_41 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m06106AA819E24221772E74B545C218B6B4270E60(L_40, NULL);
		V_8 = L_41;
		int32_t L_42;
		L_42 = BsonReader_get_DateTimeKindHandling_m7A6ED156AAC7CD3D4343B0779E4ABD90E247333D(__this, NULL);
		V_16 = L_42;
		int32_t L_43 = V_16;
		if (!L_43)
		{
			goto IL_01ad;
		}
	}
	{
		goto IL_01a6;
	}

IL_01a6:
	{
		int32_t L_44 = V_16;
		if ((((int32_t)L_44) == ((int32_t)2)))
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01c4;
	}

IL_01ad:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_8;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46;
		L_46 = DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4(L_45, 0, NULL);
		V_9 = L_46;
		goto IL_01ca;
	}

IL_01b9:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47;
		L_47 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_8), NULL);
		V_9 = L_47;
		goto IL_01ca;
	}

IL_01c4:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_48 = V_8;
		V_9 = L_48;
		goto IL_01ca;
	}

IL_01ca:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49 = V_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50 = L_49;
		RuntimeObject* L_51 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_50);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)16), L_51, NULL);
		goto IL_0298;
	}

IL_01df:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, ((int32_t)11), NULL);
		goto IL_0298;
	}

IL_01ed:
	{
		String_t* L_52;
		L_52 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_10 = L_52;
		String_t* L_53;
		L_53 = BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100(__this, NULL);
		V_11 = L_53;
		String_t* L_54 = V_10;
		String_t* L_55 = V_11;
		String_t* L_56;
		L_56 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_54, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_55, NULL);
		V_12 = L_56;
		String_t* L_57 = V_12;
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_57, NULL);
		goto IL_0298;
	}

IL_021f:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 1;
		goto IL_0298;
	}

IL_0230:
	{
		String_t* L_58;
		L_58 = BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA(__this, NULL);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, ((int32_t)9), L_58, NULL);
		goto IL_0298;
	}

IL_0241:
	{
		JsonReader_SetToken_m9CB3201AB80BD12AF5490EE38B0AB1E667D5757B(__this, 1, NULL);
		__this->____bsonReaderState_25 = 4;
		goto IL_0298;
	}

IL_0252:
	{
		int32_t L_59;
		L_59 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		int64_t L_60 = ((int64_t)L_59);
		RuntimeObject* L_61 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_60);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_61, NULL);
		goto IL_0298;
	}

IL_0268:
	{
		int64_t L_62;
		L_62 = BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02(__this, NULL);
		int64_t L_63 = L_62;
		RuntimeObject* L_64 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_63);
		JsonReader_SetToken_m57B521A8D559EBEC2CF1FED3001068F4F897FEFF(__this, 7, L_64, NULL);
		goto IL_0298;
	}

IL_027d:
	{
		int8_t L_65 = ___type0;
		int8_t L_66 = L_65;
		RuntimeObject* L_67 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_66);
		String_t* L_68;
		L_68 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4)), L_67, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_69 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_69);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_68, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadType_m1568AE4968EFA67EF81D622164A9AD3665E539DB_RuntimeMethod_var)));
	}

IL_0298:
	{
		return;
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBinary(Newtonsoft.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_m4A4F52AE9037A613C091BF93066D918478C2FECF (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		uint8_t* L_1 = ___binaryType0;
		uint8_t L_2;
		L_2 = BsonReader_ReadByte_mC6BD5BEBF68FF9ECC8741786CE7A62B50CACAAE4(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		uint8_t* L_3 = ___binaryType0;
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		bool L_5 = __this->____jsonNet35BinaryCompatibility_28;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7;
		L_7 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_7;
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		return L_10;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_m43756951ED9A74FE856F42E2CF1A1BE2AE341100 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
		goto IL_0151;
	}

IL_0013:
	{
		int32_t L_0 = V_2;
		V_3 = L_0;
		goto IL_0028;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint8_t L_4 = V_4;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_0028:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0043;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = __this->____reader_20;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		uint8_t L_8 = L_7;
		V_4 = L_8;
		G_B6_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		V_6 = (bool)G_B6_0;
		bool L_9 = V_6;
		if (L_9)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		int32_t L_12 = V_1;
		int32_t L_13 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		G_B10_0 = ((((RuntimeObject*)(StringBuilder_t*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B10_0 = 0;
	}

IL_0063:
	{
		V_7 = (bool)G_B10_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____byteBuffer_22;
		int32_t L_19 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->____charBuffer_23;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_17, L_18, 0, L_19, L_20, 0);
		V_8 = L_21;
		int32_t L_22 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = __this->____charBuffer_23;
		int32_t L_24 = V_8;
		String_t* L_25;
		L_25 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_23, 0, L_24, NULL);
		V_9 = L_25;
		goto IL_0159;
	}

IL_00a5:
	{
		int32_t L_26 = V_3;
		int32_t L_27;
		L_27 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_10 = L_27;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
		L_28 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->____byteBuffer_22;
		int32_t L_30 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->____charBuffer_23;
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_28, L_29, 0, ((int32_t)il2cpp_codegen_add(L_30, 1)), L_31, 0);
		V_11 = L_32;
		StringBuilder_t* L_33 = V_0;
		V_12 = (bool)((((RuntimeObject*)(StringBuilder_t*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t* L_35 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_35, ((int32_t)256), NULL);
		V_0 = L_35;
	}

IL_00e6:
	{
		StringBuilder_t* L_36 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->____charBuffer_23;
		int32_t L_38 = V_11;
		NullCheck(L_36);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_36, L_37, 0, L_38, NULL);
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		V_13 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 1))))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_43 = V_5;
		int32_t L_44 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_43, L_44)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->____byteBuffer_22;
		int32_t L_46 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____byteBuffer_22;
		int32_t L_48 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), (RuntimeArray*)L_47, 0, L_48, NULL);
		goto IL_014f;
	}

IL_0128:
	{
		int32_t L_49 = V_3;
		V_14 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_50 = V_14;
		if (!L_50)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_51 = V_1;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, ((int32_t)il2cpp_codegen_add(L_51, 1)), NULL);
		StringBuilder_t* L_52 = V_0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		V_9 = L_53;
		goto IL_0159;
	}

IL_014c:
	{
		V_2 = 0;
	}

IL_014f:
	{
	}

IL_0151:
	{
		V_15 = (bool)1;
		goto IL_0013;
	}

IL_0159:
	{
		String_t* L_54 = V_9;
		return L_54;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_m905B05A13227D4A2ECBFD9379E27D664A8D071AA (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_1, NULL);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		V_1 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->____reader_20;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String Newtonsoft.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___length0;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_2;
		goto IL_0150;
	}

IL_0016:
	{
		BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_0023:
	{
		int32_t L_3 = ___length0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_5)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___length0;
		int32_t L_7 = V_1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		goto IL_003c;
	}

IL_0035:
	{
		int32_t L_8 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_8));
	}

IL_003c:
	{
		V_5 = G_B6_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = __this->____reader_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____byteBuffer_22;
		int32_t L_11 = V_2;
		int32_t L_12 = V_5;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, L_11, L_12);
		V_6 = L_13;
		int32_t L_14 = V_6;
		V_7 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_16 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_GetString_mB3FD61F039F2636EE8B6B4BF2CAF84A26E4DDBFC_RuntimeMethod_var)));
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_6;
		int32_t L_20 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_6;
		int32_t L_22 = ___length0;
		V_8 = (bool)((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_24;
		L_24 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____byteBuffer_22;
		int32_t L_26 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____charBuffer_23;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_24, L_25, 0, L_26, L_27, 0);
		V_9 = L_28;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->____charBuffer_23;
		int32_t L_30 = V_9;
		String_t* L_31;
		L_31 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_29, 0, L_30, NULL);
		V_4 = L_31;
		goto IL_0150;
	}

IL_00b3:
	{
		int32_t L_32 = V_6;
		int32_t L_33;
		L_33 = BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD(__this, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), NULL);
		V_10 = L_33;
		StringBuilder_t* L_34 = V_0;
		V_12 = (bool)((((RuntimeObject*)(StringBuilder_t*)L_34) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_36 = ___length0;
		StringBuilder_t* L_37 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_37, L_36, NULL);
		V_0 = L_37;
	}

IL_00d3:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_38;
		L_38 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->____byteBuffer_22;
		int32_t L_40 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->____charBuffer_23;
		NullCheck(L_38);
		int32_t L_42;
		L_42 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_38, L_39, 0, ((int32_t)il2cpp_codegen_add(L_40, 1)), L_41, 0);
		V_11 = L_42;
		StringBuilder_t* L_43 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->____charBuffer_23;
		int32_t L_45 = V_11;
		NullCheck(L_43);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_43, L_44, 0, L_45, NULL);
		int32_t L_47 = V_10;
		int32_t L_48 = V_6;
		V_13 = (bool)((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1))))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_50 = V_6;
		int32_t L_51 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_50, L_51)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->____byteBuffer_22;
		int32_t L_53 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->____byteBuffer_22;
		int32_t L_55 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)), (RuntimeArray*)L_54, 0, L_55, NULL);
		goto IL_0137;
	}

IL_0133:
	{
		V_2 = 0;
	}

IL_0137:
	{
		int32_t L_56 = V_1;
		int32_t L_57 = ___length0;
		V_14 = (bool)((((int32_t)L_56) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_14;
		if (L_58)
		{
			goto IL_0023;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_59);
		V_4 = L_60;
		goto IL_0150;
	}

IL_0150:
	{
		String_t* L_61 = V_4;
		return L_61;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m5F12D814D034886A5A2CA2FADA4B8411D0FE90AD (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___start0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0038;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0038;
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0045;
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_0045;
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0007;
		}
	}

IL_0045:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___start0;
		int32_t L_16 = V_0;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_18 = ___start0;
		V_6 = L_18;
		goto IL_005d;
	}

IL_0057:
	{
		int32_t L_19 = V_0;
		V_6 = L_19;
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_20 = V_6;
		return L_20;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mFEDFB2E86DEB1DE9F3773FE802BD6D37BBC1A36E (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		uint8_t L_0 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = 1;
		goto IL_0086;
	}

IL_0017:
	{
		uint8_t L_5 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_5) < ((int32_t)L_8)))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t L_9 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		G_B5_0 = ((((int32_t)((((int32_t)L_9) > ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 0;
	}

IL_0031:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = 2;
		goto IL_0086;
	}

IL_003a:
	{
		uint8_t L_14 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t L_18 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_19);
		int32_t L_20 = 1;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)((((int32_t)L_18) > ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B10_0 = 0;
	}

IL_0054:
	{
		V_3 = (bool)G_B10_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 3;
		goto IL_0086;
	}

IL_005d:
	{
		uint8_t L_23 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		uint8_t L_27 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B15_0 = ((((int32_t)((((int32_t)L_27) > ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B15_0 = 0;
	}

IL_0077:
	{
		V_4 = (bool)G_B15_0;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_0082;
		}
	}
	{
		V_1 = 4;
		goto IL_0086;
	}

IL_0082:
	{
		V_1 = 0;
		goto IL_0086;
	}

IL_0086:
	{
		int32_t L_32 = V_1;
		return L_32;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_mC7DD59EA3A760B60368F4A117D73F4448F706BB1 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteBuffer_22;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____byteBuffer_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteBuffer_22), (void*)L_2);
	}

IL_0020:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____charBuffer_23;
		V_1 = (bool)((((RuntimeObject*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_5, ((int32_t)128));
		V_2 = L_6;
		int32_t L_7 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____charBuffer_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charBuffer_23), (void*)L_8);
	}

IL_004b:
	{
		return;
	}
}
// System.Double Newtonsoft.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m4E7917E24274C4A8DE38DAA6DAD13B019AE75C52 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		double L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m403168A3B3CA3CC5FEA5459185257E8AF00FF986 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int64 Newtonsoft.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_m3CD355565907B98481732EC6A91102F89CE1FF02 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m609B4018D61DC17479EA954CAB7A4CF38F9ED691 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(11 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_0 = __this->____currentContext_26;
		ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_2;
		int32_t L_3 = ___count0;
		NullCheck(L_1);
		L_1->___Position_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Byte[] Newtonsoft.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m1CC1F7104F11C353A30134E0AA3D66B3F52938F7 (BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___count0;
		BsonReader_MovePosition_mEA8B97A5B0231E2555EB70B8D7C19D4A8D29AD2B(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		int32_t L_2 = ___count0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__cctor_mB111EC03E3731C5829FA778C1BE669B2D07496FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)127));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange1_16), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)223));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange2_17), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)239));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange3_18), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)244));
		((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tA08F426AB3C16A39BAD2B91AC7D0267B54038423_il2cpp_TypeInfo_var))->___SeqRange4_19), (void*)L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_m1C2D964213E25068CF24D94D74E2D9D5BB60061B (ContainerContext_t395A53F67B3E3495D06E64D268212D040308EA5A* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int8_t L_0 = ___type0;
		__this->___Type_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonToken::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2 (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_Parent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Newtonsoft.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79 (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, String_t* ___name0, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_1 = (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE*)il2cpp_codegen_object_new(BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C(L_1, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_2 = L_1;
		String_t* L_3 = ___name0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)0, NULL);
		NullCheck(L_2);
		BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline(L_2, L_4, NULL);
		BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* L_5 = L_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___token1;
		NullCheck(L_5);
		BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_inline(L_0, L_5, List_1_Add_m05A778DDB06E3015BA3B2B539CB6360D44308F65_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = ___token1;
		NullCheck(L_7);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_7, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonObject_get_Type_m970C3BD8AC7D9844A62BE0C687DCF270E784D8ED (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = 3;
		goto IL_0005;
	}

IL_0005:
	{
		int8_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_1;
		L_1 = List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011(L_0, List_1_GetEnumerator_m872CB87380297BB9B43B61A80CB28F4A8C1C9011_RuntimeMethod_var);
		Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tC9B39CFED6C0A6D5CDD1FE2F790F532A7A4AB203_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_System_Collections_IEnumerable_GetEnumerator_m6C7320F7B08967EF6FF0D1EB4681408550A44D7C (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = BsonObject_GetEnumerator_mD0C11E8BAC09FB62CA08FF674E3F7F23690AE14D(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E* L_0 = (List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E*)il2cpp_codegen_object_new(List_1_tDBB5CD4D0EC3C783FE3A623450331580CB409B5E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E(L_0, List_1__ctor_m573D86B46CB0180CD99560B5E3B03E4A5CDE368E_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Bson.BsonArray::Add(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___token0;
		NullCheck(L_0);
		List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_inline(L_0, L_1, List_1_Add_m7B3928D9D175A2FC23AD66D3F2E0BC9200D98E5D_RuntimeMethod_var);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = ___token0;
		NullCheck(L_2);
		BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline(L_2, __this, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonArray::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonArray_get_Type_mCC68071DB9C64C070101B2633053632727FB9382 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = 4;
		goto IL_0005;
	}

IL_0005:
	{
		int8_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonToken> Newtonsoft.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_1;
		L_1 = List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE(L_0, List_1_GetEnumerator_mC2E8A71D702B5F722A83170C68470084EA6F1AEE_RuntimeMethod_var);
		Enumerator_t597C435D76D0912631AF7909B79461C347020E0C L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t597C435D76D0912631AF7909B79461C347020E0C_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_System_Collections_IEnumerable_GetEnumerator_m36E9AA3609FC3571D00A9C885C12A578D15432D7 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = BsonArray_GetEnumerator_m38E989DD847BFBA1D9AE6408890EBEC664E0729C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1 (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE* L_0 = (List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE*)il2cpp_codegen_object_new(List_1_t39498331735ADCEED3C66A5E7F951FCC1C4EEEBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1(L_0, List_1__ctor_m3935A6D299A58068CCFB138217E1D9C02F7130E1_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Bson.BsonValue::.ctor(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		RuntimeObject* L_0 = ___value0;
		__this->____value_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_2), (void*)L_0);
		int8_t L_1 = ___type1;
		__this->____type_3 = L_1;
		return;
	}
}
// System.Object Newtonsoft.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m5CEBB13E31BA015930CF1D8E23C464599CE249D2 (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____value_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonValue_get_Type_m02508F5B41591FB05A329FB62FF25DBC56BC200A (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		int8_t L_0 = __this->____type_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int8_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Newtonsoft.Json.Bson.BsonString::get_ByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Newtonsoft.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::set_IncludeLength(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIncludeLengthU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56 (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, L_0, 2, NULL);
		bool L_1 = ___includeLength1;
		BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline(__this, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Bson.BsonBinaryType Newtonsoft.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::set_BinaryType(Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonBinary::.ctor(System.Byte[],Newtonsoft.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(__this, (RuntimeObject*)L_0, 5, NULL);
		uint8_t L_1 = ___binaryType1;
		BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline(__this, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Pattern(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonRegex::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::set_Options(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99 (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken__ctor_m04A0C7B9070DF73C0689038C8E2593C5FC18F8AA(__this, NULL);
		String_t* L_0 = ___pattern0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_1 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_1, L_0, (bool)0, NULL);
		BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline(__this, L_1, NULL);
		String_t* L_2 = ___options1;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)0, NULL);
		BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline(__this, L_3, NULL);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonRegex::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonRegex_get_Type_mE72E10F4DBAAC4714F12F2DC916E927A1EE72C3A (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = ((int32_t)11);
		goto IL_0006;
	}

IL_0006:
	{
		int8_t L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Name(Newtonsoft.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::set_Value(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8 (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_mFC963BA0F736C7A11FE68BB3A4DDE63A99B3A54C (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTimeKind Newtonsoft.Json.Bson.BsonWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonWriter_get_DateTimeKindHandling_m97179D0C081FB37FC144909FEE6FC4B2146B8E8F (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_set_DateTimeKindHandling_m248E2BDCA2BBAAC774B31003C5F399D2B5D9DAE7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_13;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_mB8DA2F2E87909A79490FBDF3FCD82D9C14D56B24 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_3 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_3, L_2, NULL);
		__this->____writer_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_13), (void*)L_3);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_m9A68F285FFC9770E242BDDDEBF8E6F7D4FC22F0E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m5B0E4DCEC60E5158D71DDF7768E0FC5B09573739(__this, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587(L_0, _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer0;
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_2 = (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)il2cpp_codegen_object_new(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinaryWriter__ctor_mD40C3447EF11061CE8EEE41BB5ED7A874102DC3C(L_2, L_1, NULL);
		__this->____writer_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_13), (void*)L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Flush_m9E2FCED7F3C90BB693529D62635D1DAF11685F08 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_0 = __this->____writer_13;
		NullCheck(L_0);
		BsonBinaryWriter_Flush_m8844BC6FFEE6C0BE26F4D807110A1F4C1E6658DA(L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteEnd_mF35070E1C6EC127F41F69707FB949FE90324F439 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___token0;
		JsonWriter_WriteEnd_m36FB4C43EE0F01066B13019046E5EECF96C902B8(__this, L_0, NULL);
		BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103(__this, NULL);
		int32_t L_1;
		L_1 = JsonWriter_get_Top_m5095DA8B798DD98BE08ACA13C1C9CD816E9CB335(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_3 = __this->____writer_13;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_4 = __this->____root_14;
		NullCheck(L_3);
		BsonBinaryWriter_WriteToken_m1CBE5AB86FEB5C2399287FEAEBFB80F9094A48E9(L_3, L_4, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteComment_m43D84D85207162EF1083D96254809FD5422D46C3_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteStartConstructor_m1F88ADAEF8A51724CCBEDBF45591F27C337A9B15_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRaw_m166F2B79C505DA68A9A52275A9DF26B397A4460D_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_0;
		L_0 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRawValue_m12591A651F07D961A685E3C463098ED87557CB02_RuntimeMethod_var)));
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartArray_m843BECB153A090E2412988023B9B2D7412D95DA2 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartArray_mE2EDFEE60214B989C151DCD66C2B3219D927C75A(__this, NULL);
		BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1* L_0 = (BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)il2cpp_codegen_object_new(BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonArray__ctor_m3121DAA5995AA53B27FCE79E5F69D13131F1F9F1(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartObject_mE29202DE49A43E8A76A3E230307B42D042076313 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartObject_m327A0474DB3032162614C57B6154773EA900C153(__this, NULL);
		BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB* L_0 = (BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)il2cpp_codegen_object_new(BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonObject__ctor_m630E32FEFB85ABC73DA890C946486161162E0BDA(L_0, NULL);
		BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WritePropertyName_mFE66ED7A0D014936611D49C5F53A490D717D721E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		JsonWriter_WritePropertyName_mD805FBFFF2D43C2EC1E23A59C0102E5244CD537F(__this, L_0, NULL);
		String_t* L_1 = ___name0;
		__this->____propertyName_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Close_m8D322FE76531EA2599FD4F4C31540532D0A13A42 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		JsonWriter_Close_m550789FF5D483AA86A99B5301B375F5BFB08C523(__this, NULL);
		bool L_0;
		L_0 = JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_1 = __this->____writer_13;
		G_B3_0 = ((!(((RuntimeObject*)(BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* L_3 = __this->____writer_13;
		NullCheck(L_3);
		BsonBinaryWriter_Close_m16C6400A2D52FFC66BC3F29D7A94373EDCB6291C(L_3, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_m5733DE6024C0F5F3DF8B2638EB25D9DF15AB2761 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___container0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___container0;
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_0, NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1 = ___container0;
		__this->____parent_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_15), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m76AEE3E680B0AA556D984C4D7AE1848C198AF103 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_15;
		NullCheck(L_0);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_1;
		L_1 = BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline(L_0, NULL);
		__this->____parent_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_15), (void*)L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int8_t L_1 = ___type1;
		BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660* L_2 = (BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660*)il2cpp_codegen_object_new(BsonValue_t0879D12F1ACD829C6758ECDCE568BC324E1F6660_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonValue__ctor_m316255047E379B29CD5D70DBCDF98BAD4DB4C695(L_2, L_0, L_1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->____parent_15;
		V_0 = (bool)((!(((RuntimeObject*)(BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_2 = __this->____parent_15;
		V_1 = (bool)((!(((RuntimeObject*)(BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)IsInstClass((RuntimeObject*)L_2, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_4 = __this->____parent_15;
		String_t* L_5 = __this->____propertyName_16;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_6 = ___token0;
		NullCheck(((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_4, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var)));
		BsonObject_Add_mC5FD9CC9FC974FC4D7B10981A33291E88DB9DC79(((BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB*)CastclassClass((RuntimeObject*)L_4, BsonObject_tB6CCFA86DA440F3A31401EB265FBB77585857BAB_il2cpp_TypeInfo_var)), L_5, L_6, NULL);
		__this->____propertyName_16 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_16), (void*)(String_t*)NULL);
		goto IL_0058;
	}

IL_0044:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_7 = __this->____parent_15;
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_8 = ___token0;
		NullCheck(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_7, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)));
		BsonArray_Add_m483471C0CDB8A4438E1A0274845DC6424BDB765D(((BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1*)CastclassClass((RuntimeObject*)L_7, BsonArray_tFD661949ABAD006A5C5719C118657CEF89A94FA1_il2cpp_TypeInfo_var)), L_8, NULL);
	}

IL_0058:
	{
		goto IL_00aa;
	}

IL_005b:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_9 = ___token0;
		NullCheck(L_9);
		int8_t L_10;
		L_10 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_9);
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_0073;
		}
	}
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_11 = ___token0;
		NullCheck(L_11);
		int8_t L_12;
		L_12 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_11);
		G_B8_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B8_0 = 0;
	}

IL_0074:
	{
		V_2 = (bool)G_B8_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_15 = ___token0;
		NullCheck(L_15);
		int8_t L_16;
		L_16 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonToken::get_Type() */, L_15);
		int8_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_tB6A96FAF144D5C44C1B6071029D7FBBCF806AF51_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973)), L_14, L_18, NULL);
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_20;
		L_20 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, L_19, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901_RuntimeMethod_var)));
	}

IL_009b:
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_21 = ___token0;
		__this->____parent_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_15), (void*)L_21);
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_22 = ___token0;
		__this->____root_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_14), (void*)L_22);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m1C861DC3F9139376E4A6C2677D367DC71F54CE19 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		JsonWriter_WriteValue_mC96DBA6DC02ACB9D67D4524889764368DB468C2E(__this, L_0, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteNull_mFFF707F753F8ABDDB465D0B4E961D64DC7887586 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		JsonWriter_WriteNull_m2BF712564701AA53BAC6BD922677FF7B0B2310BC(__this, NULL);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, NULL, ((int32_t)10), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteUndefined_m08D4E492179735F9F3857ACCB7153F71A9F45A72 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, const RuntimeMethod* method) 
{
	{
		JsonWriter_WriteUndefined_m507BF49F988B94F07230A9B502D7E430E1ACCF00(__this, NULL);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, NULL, 6, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mF23F9970B41FBBAF8D989EDEADF6D850737A94F3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___value0;
		JsonWriter_WriteValue_m3ECF13257A8D1AB90301A4174D42337149BC9D0C(__this, L_0, NULL);
		String_t* L_1 = ___value0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, NULL, ((int32_t)10), NULL);
		goto IL_002f;
	}

IL_001f:
	{
		String_t* L_3 = ___value0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_4, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m2FC79561497CBDF988D2EF722E22903E63ECDC57 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		JsonWriter_WriteValue_m8E9BDBD7C29F82DCCB87B4F5D17304F5A341A5B8(__this, L_0, NULL);
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint32_t L_0 = ___value0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_2;
		L_2 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m244AEDCA1E419CEFAC8A082D4B9A0C4689FF2CCE_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint32_t L_3 = ___value0;
		JsonWriter_WriteValue_m94B80E8F2C3BF83E01624C8DE99D37CAEF2FE39B(__this, L_3, NULL);
		uint32_t L_4 = ___value0;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_6, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m3CCC473FC5D5CDB2FA5A096112C3680B7AAD13D8 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		JsonWriter_WriteValue_mEAB0A21EA57BEDF7BAD742C3F2A75EEB2E1091FE(__this, L_0, NULL);
		int64_t L_1 = ___value0;
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint64_t L_0 = ___value0;
		V_0 = (bool)((!(((uint64_t)L_0) <= ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_2;
		L_2 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m253E004DDC355C900E5146C875EFEBFE0B808CFD_RuntimeMethod_var)));
	}

IL_001f:
	{
		uint64_t L_3 = ___value0;
		JsonWriter_WriteValue_m9A6D49A850A3EA706B7143FF45BCF9DECF2A6ED5(__this, L_3, NULL);
		uint64_t L_4 = ___value0;
		uint64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_6, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE26EACDC1C523AA208225AB9FACF48D6EE9A939B (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		JsonWriter_WriteValue_mB83A734CC93E3FA5CF86ACD51DC69F42DF7FEA54(__this, L_0, NULL);
		float L_1 = ___value0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA83F23BC4B8D4AC8C71C95F7BD91275B61ACCEFC (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		JsonWriter_WriteValue_m2C9947B42490CA9AB5E8EEFB36B3E00359C472D9(__this, L_0, NULL);
		double L_1 = ___value0;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD623680FD8D563F2713B13D88D9DC4BBF1A5B939 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		JsonWriter_WriteValue_m9EF9755CB7576F61E081148C00169A7128903B8B(__this, L_0, NULL);
		bool L_1 = ___value0;
		bool L_2 = L_1;
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 8, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m6DB75597C66D7A25306CDE9F94D404F71B13B595 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___value0;
		JsonWriter_WriteValue_mE7084E3565A5BAE07F9E553F7C9362C2022E5B44(__this, L_0, NULL);
		int16_t L_1 = ___value0;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m03EFC7DAE130F7060ABE5AF7EB2FCF2E1E19ED62 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___value0;
		JsonWriter_WriteValue_m152C46080EAA9C377E3E2E2942B16273F93A2148(__this, L_0, NULL);
		uint16_t L_1 = ___value0;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m5896FAE2E7C7B6F78920F6B3D024952066069434 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Il2CppChar L_0 = ___value0;
		JsonWriter_WriteValue_mD5E4500BFFBC814E26C57409026A403C71EEECCF(__this, L_0, NULL);
		V_0 = (String_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8((&___value0), L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_4 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_4, L_3, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_4, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m8CAB1650E127C21B630B95315A4B16D28F096F4E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___value0;
		JsonWriter_WriteValue_m1AEB560BFD2393EBBE9E766263CA01E3BA2D0E6F(__this, L_0, NULL);
		uint8_t L_1 = ___value0;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE2C9B27E787A7A8BDB1595D45E225AAC49E50BF7 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___value0;
		JsonWriter_WriteValue_m0E635E0E6B005CD8D434FE57FAC79655FD774C4C(__this, L_0, NULL);
		int8_t L_1 = ___value0;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m7CED6666FFC962781DA90B7EF454DDDDF199E5F1 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		JsonWriter_WriteValue_mBCA33B3507B7A3BBDA956DC573ACEEB6A9D359D8(__this, L_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mAF1D91264588FB657ADF93788EE460C24B6F76C3 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		JsonWriter_WriteValue_m0FF59870C2C94523F795BF6F7F2FFC30CE179F8A(__this, L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value0;
		int32_t L_2;
		L_2 = JsonWriter_get_DateTimeZoneHandling_m70A3776234605D953796332656844492C164F799(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t08EF5030CF29329A3646A81F48D1F440A6234121_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTimeUtils_EnsureDateTime_m5E553913ADE441BBA1B99CE6B1F4918111909837(L_1, L_2, NULL);
		___value0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = L_4;
		RuntimeObject* L_6 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_6, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m61CDDC4C0D0229BB4C6C7423B4A9425E4F7DEC2E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		JsonWriter_WriteValue_mF792BC34323AF19A7161B55838A630A9E169A132(__this, L_0, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___value0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, L_3, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m80C95A43E5F729592340D263DB7517C40235C14A (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		JsonWriter_WriteValue_mE1F445EACF5FB3E7EDF70D0C89BB230D95084DAD(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_2 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_2, L_1, 0, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mD25E3A6ADCA02C5BEC592E5171BE3963965BD71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0 = ___value0;
		JsonWriter_WriteValue_mE9DA95DC1D6DAC672C97C861B92D3CB63933EC7B(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&___value0), NULL);
		BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* L_2 = (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8*)il2cpp_codegen_object_new(BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinary__ctor_m5B3120436DF99BD5D9DE02D2695CD9DE2CE7BB5B(L_2, L_1, 4, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mA18524C3F7989C780934E01266E635D06837AE51 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		JsonWriter_WriteValue_mBE7C0F46DDAD5B5F4D814A322D271B8141BF0F07(__this, L_0, NULL);
		String_t* L_1;
		L_1 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&___value0), NULL);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_2 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_2, L_1, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_2, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mFD86C81134810D4CD85941746F697C0A3CAD8A5C (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		JsonWriter_WriteValue_mBEB204C502C7E1547FC955BDBF558C0D616CD65A(__this, L_0, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___value0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_3 = (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE*)il2cpp_codegen_object_new(BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_mA28B714E7D11E7131A16CB152D171CA7A4A6BD56(L_3, L_2, (bool)1, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452 (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriterException_tF13EC07A2159B2C5951971D4AED5A195DEBE8AAA* L_3;
		L_3 = JsonWriterException_Create_m101D7077E7B825389977FB7A1ED3555C783FDE61(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161567E318CEB965509FE84CE4198A12E62440AF)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteObjectId_mF118E0F427F73A1FEAFB3853F056E9BE87524452_RuntimeMethod_var)));
	}

IL_0029:
	{
		JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804(__this, NULL);
		JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A(__this, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value0;
		BsonWriter_AddValue_m1EEA7A7873B2D58AAC37EB24AB9CFB3F81DB29A5(__this, (RuntimeObject*)L_4, 7, NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m5A72DD206C8BA845F9F2B6AAC9BF61AC6480B71E (BsonWriter_tA81B979F9E0F8BE8AE56AFD64679C73B2BE10456* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pattern0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587(L_0, _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0, NULL);
		JsonWriter_UpdateScopeWithFinishedValue_m02E1BED60FEDCFE33EF46351BF6832B80D516804(__this, NULL);
		JsonWriter_AutoComplete_mAF922A2E6BBA1D4B1C444978AC43F11185A3159A(__this, ((int32_t)12), NULL);
		String_t* L_1 = ___pattern0;
		String_t* L_2 = ___options1;
		BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* L_3 = (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1*)il2cpp_codegen_object_new(BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonRegex__ctor_mA823184E2E1262D62F38DC5D1ACC130B5B0EEE99(L_3, L_1, L_2, NULL);
		BsonWriter_AddToken_m3B3692A74D77D31F63999E7E77DD4386B74A9901(__this, L_3, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Newtonsoft.Json.Bson.BsonObjectId::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonObjectId_get_Value_mEBD0BBDDA460C3B1ECFFBD7B64C709172C7F14CD (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Bson.BsonObjectId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8 (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m73ECC0CA34E9075680E80F7B34526E5EC8206587((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonObjectId__ctor_m755CAEE2BE89A3B5A751FE980FB1A333B3D603C8_RuntimeMethod_var)));
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value0;
		BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline(__this, L_4, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____localName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m39D54F5791FD93911139FB9E46BABBDE5D062184_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m2A0B73747601E99F60881D50EF7D55F0EDBE85A4_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_mB90AAB6C83E3DFD4E0F0FE8DBB9BF151248378F2_inline (XmlNodeConverter_t2BBBEC7EB7BD0E68DE693AE4A21B507B62EAFDBF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_mE5606CA1E2ADA134652CEC5A0306E5F728E80FC5_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_mBEC94C9A9175992741A3554721F83D78CBC3CC0C_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonProperty_get_Value_m0DAFFE451F84BACD72C5FF9F592D351117DB85F2_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonProperty_get_Name_mF70295B575263AB7307995C119732FBA89FB6FA9_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_m513C4F508FF36F57B49B881321517CAC2CBE06E3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m90614E0F1C0F02A38281C923194D7339F536664F_inline (BsonBinaryWriter_t57CAA6774547FC60B5DA88E25B2BE27763FB5B09* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_mDE0AC23257F594CDF9EECBBD6C9BF59D998DD91B_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Pattern_mA699B72A76008CE662D1715632112D68F8BB85CC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* BsonRegex_get_Options_mDCE4C399FD3DB3BE40F013A3458CCCD0FCB44211_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m50B0EAD822D053F2B1B5DCC6AC1413DF69B8FCAB_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_m31A317821BECC7731FA48F92B5433200A6515BCF_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m0E82D14B7DF5B53FBCD95D5891C3F79E96462D2D_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m5D28FC12BD22B62AA1E493BC7A77402F1AA26DE4_inline (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseInputU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_mBF75E093501D61ABA9B44CD595A848386002EDA0_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m7DAC5256E7337131CB0004255D86FBB812E5BAD8_inline (BsonProperty_t8A7853AC505306C95E55EA6FB58334DD812288FE* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m6FE9310A7BE7920BFBBB78D007D3326FE25861BC_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_IncludeLength_m172F4ADF8CE9080328D6562647339230247B9AB3_inline (BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIncludeLengthU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m967019AC06E6A447F796DCA7A73CABEFF3C7402A_inline (BsonBinary_t10CD8515CA416C5958E3FA3290910E8FD2DFB8A8* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_m03387AC7A329EEAA6442715EA019B93C7D4A14FF_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m8A305E5CD6B32F3A48F6BC31203892A26FE967FC_inline (BsonRegex_t34DECD5385DB6EE81029A06DFE3ECB3747D3C6E1* __this, BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t3103767E4B0588B20DC77102471D6F18C44960AE* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m0A40D11FF244B8766FA5A2467C78024B6E2F4736_inline (JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseOutputU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* BsonToken_get_Parent_m05A247A8B1E2FB87849EB7B6FE0B49A606BEF1A2_inline (BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tC50FF73A9547BCD6059B57F1E99768BB22BEE3D4* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mCCFD2400AA3F5C8AD279B6270932CE681CB7073A_inline (BsonObjectId_tD1799B243CF7FF4983762AFD5AA7EED8287AF4C2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
