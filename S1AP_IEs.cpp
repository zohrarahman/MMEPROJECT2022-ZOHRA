#include "S1AP_IEs.h"

namespace	S1AP_IEs
{

	// 子类型翻译类的实现

	TypeInfo TTCN_1067::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, INTEGER_CLASS, "1067", {TAG_UNIVERSAL, 2, TAG_IMPLICIT}, NULL, (PTypeInfo)&S1AP_CommonDataTypes::TTCN_ProtocolIE_ID::m_typeInfo, "", "", "S1AP-IEs", NULL, S1AP_CommonDataTypes::TTCN_ProtocolIE_ID::m_typeInfo.pExtraInfo
	};
	TTCN_1067 &TTCN_1067::operator=(const CData &data)
	{
		S1AP_CommonDataTypes::TTCN_ProtocolIE_ID::operator=(data);
		return *this;
	}
	TTCN_1067 *TTCN_1067::InternalCreate()
	{
		return new TTCN_1067();
	}

	void ASN_1067()
	{
		//初始化TLV信息
		TTCN_1067::m_typeInfo.pTlv = new CTLV();
		TTCN_1067::m_typeInfo.pTlv->pCon = NULL;
		TTCN_1067::m_typeInfo.pTlv->eMode = TLV_PER;
	}

	// 子类型翻译类的实现

	TypeInfo TTCN_1075::m_typeInfo =
	{
		(CreateFunc)&InternalCreate, ENUMERATED_CLASS, "1075", {TAG_UNIVERSAL, 10, TAG_IMPLICIT}, NULL, (PTypeInfo)&TTCN_Criticality::m_typeInfo, "", "", "S1AP-IEs", NULL, TTCN_Criticality::m_typeInfo.pExtraInfo
	};
	TTCN_1075 &TTCN_1075::operator=(const CData &data)
	{
		TTCN_Criticality::operator=(data);
		return *this;
	}
	TTCN_1075 *TTCN_1075::InternalCreate()
	{
		return new TTCN_1075();
	}

	void ASN_1075()
	{
		//初始化TLV信息
		TTCN_1075::m_typeInfo.pTlv = new CTLV();
		TTCN_1075::m_typeInfo.pTlv->pCon = NULL;
		TTCN_1075::m_typeInfo.pTlv->eMode = TLV_PER;
	}
