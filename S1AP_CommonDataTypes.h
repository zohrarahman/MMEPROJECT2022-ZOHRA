#ifndef S1AP_CommonDataTypes_H
#define S1AP_CommonDataTypes_H

#include "Tool.h"

namespace	S1AP_CommonDataTypes
{

	class TTCN_Criticality;
	class TTCN_Presence;
	class TTCN_PrivateIE_ID;
	class TTCN_ProcedureCode;
	class TTCN_ProtocolExtensionID;
	class TTCN_ProtocolIE_ID;
	class TTCN_TriggeringMessage;

	// 枚举翻译类的声明
	class TTCN_Criticality:public CEnumerated
	{
	public:
		TTCN_Criticality(ValueOrTemplate vort = DATA_VALUE, const TypeInfo *info = &m_typeInfo): CEnumerated(info, vort) {}
		TTCN_Criticality(const TypeInfo *info, ValueOrTemplate vort): CEnumerated(info, vort) {}
		TTCN_Criticality(const TTCN_Criticality &data, TypeInfo *pTypeInfo = &m_typeInfo) : CEnumerated(data, pTypeInfo){};
		~TTCN_Criticality(){}
		TTCN_Criticality &operator=(const char *strName);
		TTCN_Criticality &operator =(const CData &data) {CEnumerated::operator =(data); return *this;};
		static TTCN_Criticality *InternalCreate();

		static char *m_name[];
		static TTCNINT m_value[];
		static TTCN_UINT32 m_valueIndex[];
		static EnumExtraInfo m_extraTypeInfo;
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_32:public CInteger
	{
	public:
		explicit TTCN_32(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_32(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_32(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_32() {}
		TTCN_32(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_32 &operator=(const CData &data);
		static TTCN_32 *InternalCreate();
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_43:public CInteger
	{
	public:
		explicit TTCN_43(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_43(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_43(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_43() {}
		TTCN_43(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_43 &operator=(const CData &data);
		static TTCN_43 *InternalCreate();
		static CIntegerValueList m_constraint;
		static TypeInfo m_typeInfo;
	};

	// Union 翻译类的声明
	class TTCN_PrivateIE_ID:public CUnion
	{
	public:

		explicit TTCN_PrivateIE_ID(ValueOrTemplate vort = DATA_VALUE, const TypeInfo *info = &m_typeInfo): CUnion(info, vort) {}
		TTCN_PrivateIE_ID(const TypeInfo *info, ValueOrTemplate vort): CUnion(info, vort) {}

		~TTCN_PrivateIE_ID() { }

		TTCN_PrivateIE_ID( const TTCN_PrivateIE_ID &data, const TypeInfo *info = &m_typeInfo): CUnion(data, info) {}

		TTCN_PrivateIE_ID &operator=(const CData &data);

		static TTCN_PrivateIE_ID *InternalCreate();

		TTCN_43 &FIELD_local();
		CObjid &FIELD_global();

		static UnionExtraInfo m_extraTypeInfo;
		static TTCN_UINT32 m_valueIndex[2];
		static FieldInfo m_fieldInfo[2];
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_61:public CInteger
	{
	public:
		explicit TTCN_61(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_61(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_61(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_61() {}
		TTCN_61(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_61 &operator=(const CData &data);
		static TTCN_61 *InternalCreate();
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_ProtocolExtensionID:public CInteger
	{
	public:
		explicit TTCN_ProtocolExtensionID(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_ProtocolExtensionID(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_ProtocolExtensionID(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_ProtocolExtensionID() {}
		TTCN_ProtocolExtensionID(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_ProtocolExtensionID &operator=(const CData &data);
		static TTCN_ProtocolExtensionID *InternalCreate();
		static CIntegerValueList m_constraint;
		static TypeInfo m_typeInfo;
	};

	// 枚举翻译类的声明
	class TTCN_TriggeringMessage:public CEnumerated
	{
	public:
		TTCN_TriggeringMessage(ValueOrTemplate vort = DATA_VALUE, const TypeInfo *info = &m_typeInfo): CEnumerated(info, vort) {}
		TTCN_TriggeringMessage(const TypeInfo *info, ValueOrTemplate vort): CEnumerated(info, vort) {}
		TTCN_TriggeringMessage(const TTCN_TriggeringMessage &data, TypeInfo *pTypeInfo = &m_typeInfo) : CEnumerated(data, pTypeInfo){};
		~TTCN_TriggeringMessage(){}
		TTCN_TriggeringMessage &operator=(const char *strName);
		TTCN_TriggeringMessage &operator =(const CData &data) {CEnumerated::operator =(data); return *this;};
		static TTCN_TriggeringMessage *InternalCreate();

		static char *m_name[];
		static TTCNINT m_value[];
		static TTCN_UINT32 m_valueIndex[];
		static EnumExtraInfo m_extraTypeInfo;
		static TypeInfo m_typeInfo;
	};

	// 枚举翻译类的声明
	class TTCN_Presence:public CEnumerated
	{
	public:
		TTCN_Presence(ValueOrTemplate vort = DATA_VALUE, const TypeInfo *info = &m_typeInfo): CEnumerated(info, vort) {}
		TTCN_Presence(const TypeInfo *info, ValueOrTemplate vort): CEnumerated(info, vort) {}
		TTCN_Presence(const TTCN_Presence &data, TypeInfo *pTypeInfo = &m_typeInfo) : CEnumerated(data, pTypeInfo){};
		~TTCN_Presence(){}
		TTCN_Presence &operator=(const char *strName);
		TTCN_Presence &operator =(const CData &data) {CEnumerated::operator =(data); return *this;};
		static TTCN_Presence *InternalCreate();

		static char *m_name[];
		static TTCNINT m_value[];
		static TTCN_UINT32 m_valueIndex[];
		static EnumExtraInfo m_extraTypeInfo;
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_74:public CInteger
	{
	public:
		explicit TTCN_74(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_74(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_74(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_74() {}
		TTCN_74(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_74 &operator=(const CData &data);
		static TTCN_74 *InternalCreate();
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_ProtocolIE_ID:public CInteger
	{
	public:
		explicit TTCN_ProtocolIE_ID(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_ProtocolIE_ID(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_ProtocolIE_ID(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_ProtocolIE_ID() {}
		TTCN_ProtocolIE_ID(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_ProtocolIE_ID &operator=(const CData &data);
		static TTCN_ProtocolIE_ID *InternalCreate();
		static CIntegerValueList m_constraint;
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_48:public CInteger
	{
	public:
		explicit TTCN_48(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_48(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_48(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_48() {}
		TTCN_48(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_48 &operator=(const CData &data);
		static TTCN_48 *InternalCreate();
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_ProcedureCode:public CInteger
	{
	public:
		explicit TTCN_ProcedureCode(ValueOrTemplate vort = DATA_VALUE): CInteger(&m_typeInfo, vort) {}
		TTCN_ProcedureCode(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): CInteger(m_typeInfo, vort) {}
		TTCN_ProcedureCode(const CInteger &data, const TypeInfo *m_typeInfo = NULL):CInteger(data, m_typeInfo){}
		~TTCN_ProcedureCode() {}
		TTCN_ProcedureCode(const CInteger &data):CInteger(data, &m_typeInfo) {}
		TTCN_ProcedureCode &operator=(const CData &data);
		static TTCN_ProcedureCode *InternalCreate();
		static CIntegerValueList m_constraint;
		static TypeInfo m_typeInfo;
	};

	// 模块类的声明
	class TTCN_S1AP_CommonDataTypes : public CModule
	{
	public:
		TTCN_S1AP_CommonDataTypes();
		~TTCN_S1AP_CommonDataTypes();
		// 配置外部常量 
		TciExternalConstList GetExternalCst();
		// 配置模块参数 
		TciModuleParameterList GetTciModuleParameterList();
	};

	extern TTCN_S1AP_CommonDataTypes *_g_pModule;

	void Init();

	void Release();

}
#endif
