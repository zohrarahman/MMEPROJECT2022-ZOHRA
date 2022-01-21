#ifndef S1AP_Containers_H
#define S1AP_Containers_H

#include "Tool.h"
//��������TTCN-3ģ���ͷ�ļ�

#include "S1AP_CommonDataTypes.h"
#include "S1AP_Constants.h"

namespace	S1AP_Containers
{

	// ģ���������
	class TTCN_S1AP_Containers : public CModule
	{
	public:
		TTCN_S1AP_Containers();
		~TTCN_S1AP_Containers();
		// �����ⲿ���� 
		TciExternalConstList GetExternalCst();
		// ����ģ����� 
		TciModuleParameterList GetTciModuleParameterList();
	};

	extern TTCN_S1AP_Containers *_g_pModule;

	void Init();

	void Release();

}
#endif
