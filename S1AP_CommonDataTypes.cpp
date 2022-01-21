#include "S1AP_CommonDataTypes.h"

namespace	S1AP_CommonDataTypes
{

	//枚举类型翻译类的实现
	TTCN_Criticality &TTCN_Criticality::operator =(const char *strName)
	{
		CEnumerated::operator=(strName);
		return *this;
	}
	TTCN_Criticality *TTCN_Criticality::InternalCreate()
	{
		return new TTCN_Criticality;
	}
	char *TTCN_Criticality::m_name[3] =
	{ 
		"reject", "ignore", "notify"
	};
	TTCNINT TTCN_Criticality::m_value[3] =
	{
		0, 1, 2
	};
	TTCN_UINT32 TTCN_Criticality::m_valueIndex[3] = { -1 };
	EnumExtraInfo TTCN_Criticality::m_extraTypeInfo =
	{
		3, -1, m_name, m_value, m_valueIndex
	};

	TypeInfo TTCN_Criticality::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, ENUMERATED_CLASS, "TTCN_Criticality", {TAG_UNIVERSAL, 10, TAG_IMPLICIT}, NULL, NULL, "", "", "S1AP-CommonDataTypes", NULL, &m_extraTypeInfo
	};

	void ASN_Criticality()
	{
		//初始化TLV信息
		TTCN_Criticality::m_typeInfo.pTlv = new CTLV();
		TTCN_Criticality::m_typeInfo.pTlv->pCon = NULL;
		TTCN_Criticality::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现

	TypeInfo TTCN_32::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "32", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", NULL, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_32 &TTCN_32::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_32 *TTCN_32::InternalCreate()
	{
		return new TTCN_32();
	}

	void ASN_32()
	{
		//初始化TLV信息
		TTCN_32::m_typeInfo.pTlv = new CTLV();
		TTCN_32::m_typeInfo.pTlv->pCon = NULL;
		TTCN_32::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现
	CIntegerValueList TTCN_43::m_constraint(1, -1, &CInteger(0), &CInteger(65535));

	TypeInfo TTCN_43::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "43", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", (CConstraint *)&m_constraint, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_43 &TTCN_43::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_43 *TTCN_43::InternalCreate()
	{
		return new TTCN_43();
	}

	void ASN_43()
	{
		//初始化TLV信息
		TTCN_43::m_typeInfo.pTlv = new CTLV();
		TTCN_43::m_typeInfo.pTlv->pCon = NULL;
		TTCN_43::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// Union 结构翻译类的实现
	FieldInfo TTCN_PrivateIE_ID::m_fieldInfo[2] =
	{
		{(TypeInfo *)&TTCN_43::m_typeInfo, "local", {TAG_UNIVERSAL, -1, TAG_IMPLICIT}, NULL, NULL, "", "", false, true, 1},

		{(TypeInfo *)&CObjid::m_typeInfo, "global", {TAG_UNIVERSAL, -1, TAG_IMPLICIT}, NULL, NULL, "", "", false, true, 1},

	};

	UnionExtraInfo TTCN_PrivateIE_ID::m_extraTypeInfo = {2, m_fieldInfo, m_valueIndex, std::make_pair(-1, -1)};

	TypeInfo TTCN_PrivateIE_ID::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, UNION_CLASS, "PrivateIE_ID", {TAG_UNIVERSAL, -1, TAG_IMPLICIT}, NULL, NULL, "", "", "S1AP-CommonDataTypes", NULL, &m_extraTypeInfo
	};
	TTCN_UINT32 TTCN_PrivateIE_ID::m_valueIndex[2] = {-1};

	TTCN_PrivateIE_ID &TTCN_PrivateIE_ID::operator=(const CData &data)
	{
		CUnion::operator=(data);
		return *this;
	}

	TTCN_PrivateIE_ID *TTCN_PrivateIE_ID::InternalCreate()
	{
		return new TTCN_PrivateIE_ID;
	}

	TTCN_43 &TTCN_PrivateIE_ID::FIELD_local()
	{
		return *static_cast<TTCN_43 *>(GetSafeData(0));
	}
	CObjid &TTCN_PrivateIE_ID::FIELD_global()
	{
		return *static_cast<CObjid *>(GetSafeData(1));
	}
	
	void ASN_PrivateIE_ID()
	{
		//初始化TLV信息
		TTCN_PrivateIE_ID::m_typeInfo.pTlv = new CTLV();
		TTCN_PrivateIE_ID::m_typeInfo.pTlv->pCon = NULL;
		TTCN_PrivateIE_ID::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现

	TypeInfo TTCN_61::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "61", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", NULL, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_61 &TTCN_61::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_61 *TTCN_61::InternalCreate()
	{
		return new TTCN_61();
	}

	void ASN_61()
	{
		//初始化TLV信息
		TTCN_61::m_typeInfo.pTlv = new CTLV();
		TTCN_61::m_typeInfo.pTlv->pCon = NULL;
		TTCN_61::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现
	CIntegerValueList TTCN_ProtocolExtensionID::m_constraint(1, -1, &CInteger(0), &CInteger(65535));

	TypeInfo TTCN_ProtocolExtensionID::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "ProtocolExtensionID", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", (CConstraint *)&m_constraint, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_ProtocolExtensionID &TTCN_ProtocolExtensionID::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_ProtocolExtensionID *TTCN_ProtocolExtensionID::InternalCreate()
	{
		return new TTCN_ProtocolExtensionID();
	}

	void ASN_ProtocolExtensionID()
	{
		//初始化TLV信息
		TTCN_ProtocolExtensionID::m_typeInfo.pTlv = new CTLV();
		TTCN_ProtocolExtensionID::m_typeInfo.pTlv->pCon = NULL;
		TTCN_ProtocolExtensionID::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	//枚举类型翻译类的实现
	TTCN_TriggeringMessage &TTCN_TriggeringMessage::operator =(const char *strName)
	{
		CEnumerated::operator=(strName);
		return *this;
	}
	TTCN_TriggeringMessage *TTCN_TriggeringMessage::InternalCreate()
	{
		return new TTCN_TriggeringMessage;
	}
	char *TTCN_TriggeringMessage::m_name[3] =
	{ 
		"initiating-message", "successful-outcome", "unsuccessfull-outcome"
	};
	TTCNINT TTCN_TriggeringMessage::m_value[3] =
	{
		0, 1, 2
	};
	TTCN_UINT32 TTCN_TriggeringMessage::m_valueIndex[3] = { -1 };
	EnumExtraInfo TTCN_TriggeringMessage::m_extraTypeInfo =
	{
		3, -1, m_name, m_value, m_valueIndex
	};

	TypeInfo TTCN_TriggeringMessage::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, ENUMERATED_CLASS, "TTCN_TriggeringMessage", {TAG_UNIVERSAL, 10, TAG_IMPLICIT}, NULL, NULL, "", "", "S1AP-CommonDataTypes", NULL, &m_extraTypeInfo
	};

	void ASN_TriggeringMessage()
	{
		//初始化TLV信息
		TTCN_TriggeringMessage::m_typeInfo.pTlv = new CTLV();
		TTCN_TriggeringMessage::m_typeInfo.pTlv->pCon = NULL;
		TTCN_TriggeringMessage::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	//枚举类型翻译类的实现
	TTCN_Presence &TTCN_Presence::operator =(const char *strName)
	{
		CEnumerated::operator=(strName);
		return *this;
	}
	TTCN_Presence *TTCN_Presence::InternalCreate()
	{
		return new TTCN_Presence;
	}
	char *TTCN_Presence::m_name[3] =
	{ 
		"optional", "conditional", "mandatory"
	};
	TTCNINT TTCN_Presence::m_value[3] =
	{
		0, 1, 2
	};
	TTCN_UINT32 TTCN_Presence::m_valueIndex[3] = { -1 };
	EnumExtraInfo TTCN_Presence::m_extraTypeInfo =
	{
		3, -1, m_name, m_value, m_valueIndex
	};

	TypeInfo TTCN_Presence::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, ENUMERATED_CLASS, "TTCN_Presence", {TAG_UNIVERSAL, 10, TAG_IMPLICIT}, NULL, NULL, "", "", "S1AP-CommonDataTypes", NULL, &m_extraTypeInfo
	};

	void ASN_Presence()
	{
		//初始化TLV信息
		TTCN_Presence::m_typeInfo.pTlv = new CTLV();
		TTCN_Presence::m_typeInfo.pTlv->pCon = NULL;
		TTCN_Presence::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现

	TypeInfo TTCN_74::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "74", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", NULL, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_74 &TTCN_74::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_74 *TTCN_74::InternalCreate()
	{
		return new TTCN_74();
	}

	void ASN_74()
	{
		//初始化TLV信息
		TTCN_74::m_typeInfo.pTlv = new CTLV();
		TTCN_74::m_typeInfo.pTlv->pCon = NULL;
		TTCN_74::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现
	CIntegerValueList TTCN_ProtocolIE_ID::m_constraint(1, -1, &CInteger(0), &CInteger(65535));

	TypeInfo TTCN_ProtocolIE_ID::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "ProtocolIE_ID", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", (CConstraint *)&m_constraint, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_ProtocolIE_ID &TTCN_ProtocolIE_ID::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_ProtocolIE_ID *TTCN_ProtocolIE_ID::InternalCreate()
	{
		return new TTCN_ProtocolIE_ID();
	}

	void ASN_ProtocolIE_ID()
	{
		//初始化TLV信息
		TTCN_ProtocolIE_ID::m_typeInfo.pTlv = new CTLV();
		TTCN_ProtocolIE_ID::m_typeInfo.pTlv->pCon = NULL;
		TTCN_ProtocolIE_ID::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现

	TypeInfo TTCN_48::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "48", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", NULL, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_48 &TTCN_48::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_48 *TTCN_48::InternalCreate()
	{
		return new TTCN_48();
	}

	void ASN_48()
	{
		//初始化TLV信息
		TTCN_48::m_typeInfo.pTlv = new CTLV();
		TTCN_48::m_typeInfo.pTlv->pCon = NULL;
		TTCN_48::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现
	CIntegerValueList TTCN_ProcedureCode::m_constraint(1, -1, &CInteger(0), &CInteger(255));

	TypeInfo TTCN_ProcedureCode::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "ProcedureCode", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&CInteger::m_typeInfo, "", "", "S1AP-CommonDataTypes", (CConstraint *)&m_constraint, CInteger::m_typeInfo.pExtraInfo
	};
	TTCN_ProcedureCode &TTCN_ProcedureCode::operator=(const CData &data)
	{
		CInteger::operator=(data);
		return *this;
	}
	TTCN_ProcedureCode *TTCN_ProcedureCode::InternalCreate()
	{
		return new TTCN_ProcedureCode();
	}

	void ASN_ProcedureCode()
	{
		//初始化TLV信息
		TTCN_ProcedureCode::m_typeInfo.pTlv = new CTLV();
		TTCN_ProcedureCode::m_typeInfo.pTlv->pCon = NULL;
		TTCN_ProcedureCode::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 模块类的实现
	TTCN_S1AP_CommonDataTypes* _g_pModule= NULL;
	TTCN_S1AP_CommonDataTypes::TTCN_S1AP_CommonDataTypes():CModule("S1AP_CommonDataTypes")
	{
		SetModuleType(ASN1_MODULE);
	}
	TTCN_S1AP_CommonDataTypes::~TTCN_S1AP_CommonDataTypes()
	{

	}
	TciModuleParameterList TTCN_S1AP_CommonDataTypes::GetTciModuleParameterList()
	{
		TciModuleParameterList ParList;
		return ParList;
	}
	TciExternalConstList TTCN_S1AP_CommonDataTypes::GetExternalCst()
	{
		TciExternalConstList  CstList;
		return CstList;
	}
	void InitConst()
	{
	}
	void InitTemplate()
	{
	}
	void InitAsnType()
	{
		ASN_Criticality();
		ASN_43();
		ASN_32();
		ASN_PrivateIE_ID();
		ASN_ProtocolExtensionID();
		ASN_61();
		ASN_TriggeringMessage();
		ASN_Presence();
		ASN_ProtocolIE_ID();
		ASN_74();
		ASN_ProcedureCode();
		ASN_48();
	}
	void InitModuleParameter()
	{
	}

	void Init()
	{
		CTEImpl* te = CTEImpl::Instance();
		CTciTMRequiredImpl* tmr = dynamic_cast<CTciTMRequiredImpl *>(te->GetTciTMRequired());
		if(tmr != NULL)
		{
			_g_pModule = new TTCN_S1AP_CommonDataTypes;
			te->GetModuleHolder().AddModule("S1AP_CommonDataTypes", _g_pModule, "C:\\Users\\user\\Desktop\\PROJECT2022\\S1AP_PROJECTS");
			//tmr->TciRootModule(_g_pModule->GetModuleId());
		}

		// 初始化ASN.1类型
		InitAsnType();

		// 初始化全局常量
		InitConst();

		// 初始化全局模板
		InitTemplate();

		// 初始化模板参数
		InitModuleParameter();
	}

	void Release()
	{
		delete _g_pModule;
	}

}
