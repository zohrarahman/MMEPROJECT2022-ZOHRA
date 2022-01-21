#ifndef S1AP_Containers_H
#define S1AP_Containers_H

#include "Tool.h"
//包含其他TTCN-3模块的头文件

#include "S1AP_CommonDataTypes.h"
#include "S1AP_Constants.h"

namespace	S1AP_Containers
{

	// 模块类的声明
	class TTCN_S1AP_Containers : public CModule
	{
	public:
		TTCN_S1AP_Containers();
		~TTCN_S1AP_Containers();
		// 配置外部常量 
		TciExternalConstList GetExternalCst();
		// 配置模块参数 
		TciModuleParameterList GetTciModuleParameterList();
	};

	extern TTCN_S1AP_Containers *_g_pModule;

	void Init();

	void Release();

}
#endif
