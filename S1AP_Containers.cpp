#include "S1AP_Containers.h"

namespace	S1AP_Containers
{

	// ģ�����ʵ��
	TTCN_S1AP_Containers* _g_pModule= NULL;
	TTCN_S1AP_Containers::TTCN_S1AP_Containers():CModule("S1AP_Containers")
	{
		SetModuleType(ASN1_MODULE);
	}
	TTCN_S1AP_Containers::~TTCN_S1AP_Containers()
	{

	}
	TciModuleParameterList TTCN_S1AP_Containers::GetTciModuleParameterList()
	{
		TciModuleParameterList ParList;
		return ParList;
	}
	TciExternalConstList TTCN_S1AP_Containers::GetExternalCst()
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
			_g_pModule = new TTCN_S1AP_Containers;
			te->GetModuleHolder().AddModule("S1AP_Containers", _g_pModule, "C:\\Users\\user\\Desktop\\PROJECT2022\\S1AP_PROJECTS");
			//tmr->TciRootModule(_g_pModule->GetModuleId());
		}

		// ��ʼ��ASN.1����
		InitAsnType();

		// ��ʼ��ȫ�ֳ���
		InitConst();

		// ��ʼ��ȫ��ģ��
		InitTemplate();

		// ��ʼ��ģ�����
		InitModuleParameter();
	}

	void Release()
	{
		delete _g_pModule;
	}

}
