#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1;
// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42;
// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742;
IL2CPP_EXTERN_C String_t* _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16;
IL2CPP_EXTERN_C String_t* _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCD5BF6D3AAB147F28F15DED35776F8117AE07F16 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.BurstCompiler
struct BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2  : public RuntimeObject
{
public:

public:
};

struct BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields
{
public:
	// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::Options
	BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * ___Options_0;
	// System.Boolean Unity.Burst.BurstCompiler::_IsEnabled
	bool ____IsEnabled_1;

public:
	inline static int32_t get_offset_of_Options_0() { return static_cast<int32_t>(offsetof(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields, ___Options_0)); }
	inline BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * get_Options_0() const { return ___Options_0; }
	inline BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 ** get_address_of_Options_0() { return &___Options_0; }
	inline void set_Options_0(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * value)
	{
		___Options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_0), (void*)value);
	}

	inline static int32_t get_offset_of__IsEnabled_1() { return static_cast<int32_t>(offsetof(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields, ____IsEnabled_1)); }
	inline bool get__IsEnabled_1() const { return ____IsEnabled_1; }
	inline bool* get_address_of__IsEnabled_1() { return &____IsEnabled_1; }
	inline void set__IsEnabled_1(bool value)
	{
		____IsEnabled_1 = value;
	}
};


// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34  : public RuntimeObject
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstCompilation
	bool ____enableBurstCompilation_2;
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstSafetyChecks
	bool ____enableBurstSafetyChecks_3;
	// System.Boolean Unity.Burst.BurstCompilerOptions::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_4;
	// System.Action Unity.Burst.BurstCompilerOptions::<OptionsChanged>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COptionsChangedU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__enableBurstCompilation_2() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ____enableBurstCompilation_2)); }
	inline bool get__enableBurstCompilation_2() const { return ____enableBurstCompilation_2; }
	inline bool* get_address_of__enableBurstCompilation_2() { return &____enableBurstCompilation_2; }
	inline void set__enableBurstCompilation_2(bool value)
	{
		____enableBurstCompilation_2 = value;
	}

	inline static int32_t get_offset_of__enableBurstSafetyChecks_3() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ____enableBurstSafetyChecks_3)); }
	inline bool get__enableBurstSafetyChecks_3() const { return ____enableBurstSafetyChecks_3; }
	inline bool* get_address_of__enableBurstSafetyChecks_3() { return &____enableBurstSafetyChecks_3; }
	inline void set__enableBurstSafetyChecks_3(bool value)
	{
		____enableBurstSafetyChecks_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsGlobalU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ___U3CIsGlobalU3Ek__BackingField_4)); }
	inline bool get_U3CIsGlobalU3Ek__BackingField_4() const { return ___U3CIsGlobalU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsGlobalU3Ek__BackingField_4() { return &___U3CIsGlobalU3Ek__BackingField_4; }
	inline void set_U3CIsGlobalU3Ek__BackingField_4(bool value)
	{
		___U3CIsGlobalU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COptionsChangedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ___U3COptionsChangedU3Ek__BackingField_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COptionsChangedU3Ek__BackingField_5() const { return ___U3COptionsChangedU3Ek__BackingField_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COptionsChangedU3Ek__BackingField_5() { return &___U3COptionsChangedU3Ek__BackingField_5; }
	inline void set_U3COptionsChangedU3Ek__BackingField_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COptionsChangedU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsChangedU3Ek__BackingField_5), (void*)value);
	}
};

struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceDisableBurstCompilation
	bool ___ForceDisableBurstCompilation_0;
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceBurstCompilationSynchronously
	bool ___ForceBurstCompilationSynchronously_1;

public:
	inline static int32_t get_offset_of_ForceDisableBurstCompilation_0() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields, ___ForceDisableBurstCompilation_0)); }
	inline bool get_ForceDisableBurstCompilation_0() const { return ___ForceDisableBurstCompilation_0; }
	inline bool* get_address_of_ForceDisableBurstCompilation_0() { return &___ForceDisableBurstCompilation_0; }
	inline void set_ForceDisableBurstCompilation_0(bool value)
	{
		___ForceDisableBurstCompilation_0 = value;
	}

	inline static int32_t get_offset_of_ForceBurstCompilationSynchronously_1() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields, ___ForceBurstCompilationSynchronously_1)); }
	inline bool get_ForceBurstCompilationSynchronously_1() const { return ___ForceBurstCompilationSynchronously_1; }
	inline bool* get_address_of_ForceBurstCompilationSynchronously_1() { return &___ForceBurstCompilationSynchronously_1; }
	inline void set_ForceBurstCompilationSynchronously_1(bool value)
	{
		___ForceBurstCompilationSynchronously_1 = value;
	}
};


// Unity.Burst.BurstRuntime
struct BurstRuntime_t725AE7FF2003494CEB5F987F3365BA847C762735  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA  : public RuntimeObject
{
public:

public:
};

struct BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields
{
public:
	// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabledImpl
	IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * ___IsBurstEnabledImpl_0;
	// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstGenerated
	bool ___IsBurstGenerated_1;

public:
	inline static int32_t get_offset_of_IsBurstEnabledImpl_0() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields, ___IsBurstEnabledImpl_0)); }
	inline IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * get_IsBurstEnabledImpl_0() const { return ___IsBurstEnabledImpl_0; }
	inline IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 ** get_address_of_IsBurstEnabledImpl_0() { return &___IsBurstEnabledImpl_0; }
	inline void set_IsBurstEnabledImpl_0(IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * value)
	{
		___IsBurstEnabledImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsBurstEnabledImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsBurstGenerated_1() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields, ___IsBurstGenerated_1)); }
	inline bool get_IsBurstGenerated_1() const { return ___IsBurstGenerated_1; }
	inline bool* get_address_of_IsBurstGenerated_1() { return &___IsBurstGenerated_1; }
	inline void set_IsBurstGenerated_1(bool value)
	{
		___IsBurstGenerated_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Burst.FloatMode
struct FloatMode_t38741ACC50724A284056372B5D90095D40ACB1E4 
{
public:
	// System.Int32 Unity.Burst.FloatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatMode_t38741ACC50724A284056372B5D90095D40ACB1E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Burst.FloatPrecision
struct FloatPrecision_tF6B76A9F4B20E5525B4B38902AA661AAB9E199F5 
{
public:
	// System.Int32 Unity.Burst.FloatPrecision::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatPrecision_tF6B76A9F4B20E5525B4B38902AA661AAB9E199F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
struct BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34 
{
public:
	// System.Int32 Unity.Burst.LowLevel.BurstCompilerService/BurstLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::<FloatMode>k__BackingField
	int32_t ___U3CFloatModeU3Ek__BackingField_0;
	// Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::<FloatPrecision>k__BackingField
	int32_t ___U3CFloatPrecisionU3Ek__BackingField_1;
	// System.Boolean Unity.Burst.BurstCompileAttribute::<CompileSynchronously>k__BackingField
	bool ___U3CCompileSynchronouslyU3Ek__BackingField_2;
	// System.String[] Unity.Burst.BurstCompileAttribute::<Options>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3COptionsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CFloatModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CFloatModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CFloatModeU3Ek__BackingField_0() const { return ___U3CFloatModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFloatModeU3Ek__BackingField_0() { return &___U3CFloatModeU3Ek__BackingField_0; }
	inline void set_U3CFloatModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CFloatModeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFloatPrecisionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CFloatPrecisionU3Ek__BackingField_1)); }
	inline int32_t get_U3CFloatPrecisionU3Ek__BackingField_1() const { return ___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFloatPrecisionU3Ek__BackingField_1() { return &___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline void set_U3CFloatPrecisionU3Ek__BackingField_1(int32_t value)
	{
		___U3CFloatPrecisionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CCompileSynchronouslyU3Ek__BackingField_2)); }
	inline bool get_U3CCompileSynchronouslyU3Ek__BackingField_2() const { return ___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return &___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline void set_U3CCompileSynchronouslyU3Ek__BackingField_2(bool value)
	{
		___U3CCompileSynchronouslyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3COptionsU3Ek__BackingField_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_3), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___isGlobal0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::set_JobCompilerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobsUtility_set_JobCompilerEnabled_m4B38B836F8D2CBD730C1300E9D5FE04383DA54AC (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9 (MemberInfo_t * ___left0, MemberInfo_t * ___right1, const RuntimeMethod* method);
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Burst.BurstCompileAttribute>(System.Reflection.MemberInfo)
inline BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * (*) (MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared)(___element0, method);
}
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m9269C5EF7E5168EFDCE4D620B8FA890DF6B3E65B (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C (MemberInfo_t * ___member0, BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** ___attribute1, bool ___isForEagerCompilation2, const RuntimeMethod* method);
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329 (const RuntimeMethod* method);
// System.Void Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m8B72F315B8A8DCCB6ED31880F5B4ECD0C516DE5E (void* ___userData0, int32_t ___logType1, uint8_t* ___message2, uint8_t* ___filename3, int32_t ___lineNumber4, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D (const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC (bool* ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mA76294773B6989F87A291642A00722F5F5266726 (RuntimeObject * ___delegateMethod0, String_t* ___compilerOptions1, const RuntimeMethod* method);
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m94255AE10D8C3F7B875D69D3889E029A936DE84F (int32_t ___userID0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC (Delegate_t * ___del0, const RuntimeMethod* method);
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
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3COptionsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m75F0EF699FB9E5AD644F26B04ACE674ED2C81628 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute()
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// FloatMode = floatMode;
		int32_t L_0 = ___floatMode1;
		BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline(__this, L_0, /*hidden argument*/NULL);
		// FloatPrecision = floatPrecision;
		int32_t L_1 = ___floatPrecision0;
		BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline(__this, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void Unity.Burst.BurstCompiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_m6482E2EA0A198C07EB665E4A7A1E0923257D4FD8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly BurstCompilerOptions Options = new BurstCompilerOptions(true);
		BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * L_0 = (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 *)il2cpp_codegen_object_new(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D(L_0, (bool)1, /*hidden argument*/NULL);
		((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->set_Options_0(L_0);
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
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___isGlobal0, const RuntimeMethod* method)
{
	{
		// internal BurstCompilerOptions(bool isGlobal)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// IsGlobal = isGlobal;
		bool L_0 = ___isGlobal0;
		__this->set_U3CIsGlobalU3Ek__BackingField_4(L_0);
		// EnableBurstCompilation = true;
		BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF(__this, (bool)1, /*hidden argument*/NULL);
		// EnableBurstSafetyChecks = true;
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mF6AF625D845CE154ADDC6B1AE86DA7103CA0EA3F (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->get__enableBurstCompilation_2();
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		bool L_0;
		L_0 = BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->get_ForceDisableBurstCompilation_0();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		___value0 = (bool)0;
	}

IL_0012:
	{
		// bool changed = _enableBurstCompilation != value;
		bool L_2 = __this->get__enableBurstCompilation_2();
		bool L_3 = ___value0;
		// if (changed && value)
		int32_t L_4 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = ___value0;
		G_B4_0 = L_4;
		if (!((int32_t)((int32_t)L_4&(int32_t)L_5)))
		{
			G_B5_0 = L_4;
			goto IL_0029;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656(__this, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
	}

IL_0029:
	{
		// _enableBurstCompilation = value;
		bool L_6 = ___value0;
		__this->set__enableBurstCompilation_2(L_6);
		// if (IsGlobal)
		bool L_7;
		L_7 = BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline(__this, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0044;
		}
	}
	{
		// JobsUtility.JobCompilerEnabled = value;
		bool L_8 = ___value0;
		JobsUtility_set_JobCompilerEnabled_m4B38B836F8D2CBD730C1300E9D5FE04383DA54AC(L_8, /*hidden argument*/NULL);
		// BurstCompiler._IsEnabled = value;
		bool L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->set__IsEnabled_1(L_9);
		G_B7_0 = G_B6_0;
	}

IL_0044:
	{
		// if (changed)
		if (!G_B7_0)
		{
			goto IL_004c;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// bool changed = _enableBurstSafetyChecks != value;
		bool L_0 = __this->get__enableBurstSafetyChecks_3();
		bool L_1 = ___value0;
		// if (changed)
		int32_t L_2 = ((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B1_0 = L_2;
		if (!L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656(__this, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0015:
	{
		// _enableBurstSafetyChecks = value;
		bool L_3 = ___value0;
		__this->set__enableBurstSafetyChecks_3(L_3);
		// if (changed)
		if (!G_B2_0)
		{
			goto IL_002a;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731(__this, /*hidden argument*/NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C (MemberInfo_t * ___member0, BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** ___attribute1, bool ___isForEagerCompilation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// attribute = null;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_0 = ___attribute1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (member == null)
		MemberInfo_t * L_1 = ___member0;
		bool L_2;
		L_2 = MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9(L_1, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// attribute = GetBurstCompileAttribute(member);
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_3 = ___attribute1;
		MemberInfo_t * L_4 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_5;
		L_5 = BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6(L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		// if (attribute == null)
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_6 = ___attribute1;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_7 = *((BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)L_6);
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// if (isForEagerCompilation && (attribute.Options?.Contains(DoNotEagerCompile) ?? false))
		bool L_8 = ___isForEagerCompilation2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_9 = ___attribute1;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_10 = *((BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)L_9);
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
		L_11 = BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline(L_10, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_002d;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0037;
	}

IL_002d:
	{
		bool L_13;
		L_13 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)G_B7_0, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		G_B8_0 = ((int32_t)(L_13));
	}

IL_0037:
	{
		if (!G_B8_0)
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// return true;
		return (bool)1;
	}
}
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * V_2 = NULL;
	Type_t * V_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_4 = NULL;
	PropertyInfo_t * V_5 = NULL;
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B8_0 = 0;
	{
		// var result = memberInfo.GetCustomAttribute<BurstCompileAttribute>();
		MemberInfo_t * L_0 = ___memberInfo0;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F(L_0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var);
		V_0 = L_1;
		// if (result != null)
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return result;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// foreach (var a in memberInfo.GetCustomAttributes())
		MemberInfo_t * L_4 = ___memberInfo0;
		RuntimeObject* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttributes_m9269C5EF7E5168EFDCE4D620B8FA890DF6B3E65B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Attribute>::GetEnumerator() */, IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_001a:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_8;
			L_8 = InterfaceFuncInvoker0< Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Attribute>::get_Current() */, IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			// var attributeType = a.GetType();
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_9 = V_2;
			NullCheck(L_9);
			Type_t * L_10;
			L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			// if (attributeType.FullName == "Burst.Compiler.IL.Tests.TestCompilerAttribute")
			Type_t * L_11 = V_3;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_11);
			bool L_13;
			L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0095;
			}
		}

IL_003a:
		{
			// var options = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_14, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_4 = L_14;
			// var expectCompilerExceptionProperty = attributeType.GetProperty("ExpectCompilerException");
			Type_t * L_15 = V_3;
			NullCheck(L_15);
			PropertyInfo_t * L_16;
			L_16 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_15, _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16, /*hidden argument*/NULL);
			V_5 = L_16;
			// var expectCompilerException = (expectCompilerExceptionProperty != null)
			//     ? (bool)expectCompilerExceptionProperty.GetValue(a)
			//     : false;
			PropertyInfo_t * L_17 = V_5;
			bool L_18;
			L_18 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_17, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_005b;
			}
		}

IL_0058:
		{
			G_B8_0 = 0;
			goto IL_0068;
		}

IL_005b:
		{
			PropertyInfo_t * L_19 = V_5;
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_20 = V_2;
			NullCheck(L_19);
			RuntimeObject * L_21;
			L_21 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_19, L_20, /*hidden argument*/NULL);
			G_B8_0 = ((int32_t)(((*(bool*)((bool*)UnBox(L_21, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))));
		}

IL_0068:
		{
			// if (expectCompilerException)
			if (!G_B8_0)
			{
				goto IL_0076;
			}
		}

IL_006a:
		{
			// options.Add(DoNotEagerCompile);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22 = V_4;
			NullCheck(L_22);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_22, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0076:
		{
			// return new BurstCompileAttribute(FloatPrecision.Standard, FloatMode.Default)
			// {
			//     CompileSynchronously = true,
			//     Options = options.ToArray(),
			// };
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_23 = (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 *)il2cpp_codegen_object_new(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var);
			BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E(L_23, 0, 0, /*hidden argument*/NULL);
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_24 = L_23;
			NullCheck(L_24);
			BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline(L_24, (bool)1, /*hidden argument*/NULL);
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_25 = L_24;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = V_4;
			NullCheck(L_26);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27;
			L_27 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_26, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			NullCheck(L_25);
			BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline(L_25, L_27, /*hidden argument*/NULL);
			V_6 = L_25;
			IL2CPP_LEAVE(0xAE, FINALLY_00a2);
		}

IL_0095:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			bool L_29;
			L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_001a;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_1;
			if (!L_30)
			{
				goto IL_00ab;
			}
		}

IL_00a5:
		{
			RuntimeObject* L_31 = V_1;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_31);
		}

IL_00ab:
		{
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		// return null;
		return (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 *)NULL;
	}

IL_00ae:
	{
		// }
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_32 = V_6;
		return L_32;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_0 = NULL;
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		MemberInfo_t * L_0 = ___member0;
		bool L_1;
		L_1 = MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9(L_0, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return TryGetAttribute(member, out attr);
		MemberInfo_t * L_3 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C(L_3, (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)(&V_0), (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// OptionsChanged?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0;
		L_0 = BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline(__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m998B13B9D2A1813E93900FFAE79A23357CB611A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000a:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003b;
	}

IL_002d:
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_ForceDisableBurstCompilation_0((bool)1);
		// break;
		goto IL_003b;
	}

IL_0035:
	{
		// ForceBurstCompilationSynchronously = false;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_ForceBurstCompilationSynchronously_1((bool)0);
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003f:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		int32_t L_11 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
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
// System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_Log_mA326750916D8B27060FFE335CFE3BB74F12E8632 (uint8_t* ___message0, int32_t ___logType1, uint8_t* ___fileName2, int32_t ___lineNumber3, const RuntimeMethod* method)
{
	{
		// BurstCompilerService.Log((byte*) 0, (BurstCompilerService.BurstLogType)logType, message, fileName, lineNumber);
		int32_t L_0 = ___logType1;
		uint8_t* L_1 = ___message0;
		uint8_t* L_2 = ___fileName2;
		int32_t L_3 = ___lineNumber3;
		BurstCompilerService_Log_m8B72F315B8A8DCCB6ED31880F5B4ECD0C516DE5E((void*)(void*)((intptr_t)0), L_0, (uint8_t*)(uint8_t*)L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		// }
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
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	returnValue = BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D(NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = true;
		V_0 = (bool)1;
		// DiscardedMethod(ref result);
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC((bool*)(&V_0), /*hidden argument*/NULL);
		// return result;
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC (bool* ___value0, const RuntimeMethod* method)
{
	{
		// value = false;
		bool* L_0 = ___value0;
		*((int8_t*)L_0) = (int8_t)0;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC (Delegate_t * ___del0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(del, string.Empty);
		Delegate_t * L_0 = ___del0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_2;
		L_2 = BurstCompilerService_CompileAsyncDelegateMethod_mA76294773B6989F87A291642A00722F5F5266726(L_0, L_1, /*hidden argument*/NULL);
		// return Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId) != (void*)0;
		void* L_3;
		L_3 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m94255AE10D8C3F7B875D69D3889E029A936DE84F(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((intptr_t)L_3) == ((intptr_t)((intptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_mD76FFC76096643AA6180877EE5FCCC86CD37E02B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl = new IsBurstEnabledDelegate(IsBurstEnabled);
		IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * L_0 = (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 *)il2cpp_codegen_object_new(IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var);
		IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED(L_0, NULL, (intptr_t)((intptr_t)BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var), /*hidden argument*/NULL);
		((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->set_IsBurstEnabledImpl_0(L_0);
		// public static readonly bool IsBurstGenerated = IsCompiledByBurst(IsBurstEnabledImpl);
		IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * L_1 = ((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->get_IsBurstEnabledImpl_0();
		bool L_2;
		L_2 = BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC(L_1, /*hidden argument*/NULL);
		((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->set_IsBurstGenerated_1(L_2);
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
// System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m03ACCEB4A3006FFF47CF22847FDC44963A6775DE (PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m985ABAE72EF555F9EDC4B03FDACDAF132B56AD6A (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef bool (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsBurstEnabledDelegate_BeginInvoke_m82BEF01F13F57DFB377E8AF66A63ADCD23FA4678 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_EndInvoke_mAC335D885BC871F4290ACB7E630D1C9A8E1D1272 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3COptionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_5();
		return L_0;
	}
}
