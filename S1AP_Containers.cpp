#include "S1AP_Containers.h"

namespace	S1AP_Containers
{

	// 模块类的实现
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
