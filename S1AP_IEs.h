#ifndef S1AP_IEs_H
#define S1AP_IEs_H

#include "Tool.h"
//包含其他TTCN-3模块的头文件

#include "S1AP_Constants.h"
#include "S1AP_CommonDataTypes.h"
#include "S1AP_Containers.h"

namespace	S1AP_IEs
{

	class TTCN_AllocationAndRetentionPriority;
	class TTCN_BPLMNs;
	class TTCN_Bearers_SubjectToStatusTransfer_Item;
	class TTCN_Bearers_SubjectToStatusTransferList;
	class TTCN_BitRate;
	class TTCN_BroadcastCancelledAreaList;
	class TTCN_BroadcastCompletedAreaList;
	class TTCN_CGI;
	class TTCN_CI;
	class TTCN_CNDomain;
	class TTCN_COUNTvalue;
	class TTCN_CSFallbackIndicator;
	class TTCN_CSG_Id;
	class TTCN_CSG_IdList;
	class TTCN_CSG_IdList_Item;
	class TTCN_CancelledCellinEAI;
	class TTCN_CancelledCellinEAI_Item;
	class TTCN_CancelledCellinTAI;
	class TTCN_CancelledCellinTAI_Item;
	class TTCN_Cause;
	class TTCN_CauseMisc;
	class TTCN_CauseNas;
	class TTCN_CauseProtocol;
	class TTCN_CauseRadioNetwork;
	class TTCN_CauseTransport;
	class TTCN_Cdma2000HORequiredIndication;
	class TTCN_Cdma2000HOStatus;
	class TTCN_Cdma2000OneXMEID;
	class TTCN_Cdma2000OneXMSI;
	class TTCN_Cdma2000OneXPilot;
	class TTCN_Cdma2000OneXRAND;
	class TTCN_Cdma2000OneXSRVCCInfo;
	class TTCN_Cdma2000PDU;
	class TTCN_Cdma2000RATType;
	class TTCN_Cdma2000SectorID;
	class TTCN_Cell_Size;
	class TTCN_CellID_Broadcast;
	class TTCN_CellID_Broadcast_Item;
	class TTCN_CellID_Cancelled;
	class TTCN_CellID_Cancelled_Item;
	class TTCN_CellIdentity;
	class TTCN_CellType;
	class TTCN_CompletedCellinEAI;
	class TTCN_CompletedCellinEAI_Item;
	class TTCN_CompletedCellinTAI;
	class TTCN_CompletedCellinTAI_Item;
	class TTCN_ConcurrentWarningMessageIndicator;
	class TTCN_CriticalityDiagnostics;
	class TTCN_CriticalityDiagnostics_IE_Item;
	class TTCN_CriticalityDiagnostics_IE_List;
	class TTCN_DL_Forwarding;
	class TTCN_DataCodingScheme;
	class TTCN_Direct_Forwarding_Path_Availability;
	class TTCN_E_RAB_ID;
	class TTCN_E_RABInformationList;
	class TTCN_E_RABInformationListItem;
	class TTCN_E_RABItem;
	class TTCN_E_RABLevelQoSParameters;
	class TTCN_E_RABList;
	class TTCN_E_UTRAN_Trace_ID;
	class TTCN_ECGIList;
	class TTCN_ENB_ID;
	class TTCN_ENB_StatusTransfer_TransparentContainer;
	class TTCN_ENB_UE_S1AP_ID;
	class TTCN_ENBX2TLAs;
	class TTCN_ENBname;
	class TTCN_EPLMNs;
	class TTCN_EUTRAN_CGI;
	class TTCN_EUTRANRoundTripDelayEstimationInfo;
	class TTCN_EmergencyAreaID;
	class TTCN_EmergencyAreaID_Broadcast;
	class TTCN_EmergencyAreaID_Broadcast_Item;
	class TTCN_EmergencyAreaID_Cancelled;
	class TTCN_EmergencyAreaID_Cancelled_Item;
	class TTCN_EmergencyAreaIDList;
	class TTCN_EncryptionAlgorithms;
	class TTCN_EventType;
	class TTCN_ExtendedRNC_ID;
	class TTCN_ForbiddenInterRATs;
	class TTCN_ForbiddenLACs;
	class TTCN_ForbiddenLAs;
	class TTCN_ForbiddenLAs_Item;
	class TTCN_ForbiddenTACs;
	class TTCN_ForbiddenTAs;
	class TTCN_ForbiddenTAs_Item;
	class TTCN_GBR_QosInformation;
	class TTCN_GERAN_Cell_ID;
	class TTCN_GTP_TEID;
	class TTCN_GUMMEI;
	class TTCN_Global_ENB_ID;
	class TTCN_HFN;
	class TTCN_HandoverRestrictionList;
	class TTCN_HandoverType;
	class TTCN_IMSI;
	class TTCN_IntegrityProtectionAlgorithms;
	class TTCN_InterfacesToTrace;
	class TTCN_L3_Information;
	class TTCN_LAC;
	class TTCN_LAI;
	class TTCN_LastVisitedCell_Item;
	class TTCN_LastVisitedEUTRANCellInformation;
	class TTCN_LastVisitedGERANCellInformation;
	class TTCN_LastVisitedUTRANCellInformation;
	class TTCN_M_TMSI;
	class TTCN_MME_Code;
	class TTCN_MME_Group_ID;
	class TTCN_MME_UE_S1AP_ID;
	class TTCN_MMEname;
	class TTCN_MSClassmark2;
	class TTCN_MSClassmark3;
	class TTCN_MessageIdentifier;
	class TTCN_NAS_PDU;
	class TTCN_NASSecurityParametersfromE_UTRAN;
	class TTCN_NASSecurityParameterstoE_UTRAN;
	class TTCN_NumberOfBroadcasts;
	class TTCN_NumberofBroadcastRequest;
	class TTCN_OldBSS_ToNewBSS_Information;
	class TTCN_OverloadAction;
	class TTCN_OverloadResponse;
	class TTCN_PDCP_SN;
	class TTCN_PLMNidentity;
	class TTCN_PagingDRX;
	class TTCN_Pre_emptionCapability;
	class TTCN_Pre_emptionVulnerability;
	class TTCN_PriorityLevel;
	class TTCN_QCI;
	class TTCN_RAC;
	class TTCN_RIMInformation;
	class TTCN_RIMRoutingAddress;
	class TTCN_RIMTransfer;
	class TTCN_RNC_ID;
	class TTCN_RRC_Container;
	class TTCN_RRC_Establishment_Cause;
	class TTCN_ReceiveStatusofULPDCPSDUs;
	class TTCN_RelativeMMECapacity;
	class TTCN_RepetitionPeriod;
	class TTCN_ReportArea;
	class TTCN_RequestType;
	class TTCN_S_TMSI;
	class TTCN_SONConfigurationTransfer;
	class TTCN_SONInformation;
	class TTCN_SONInformationReply;
	class TTCN_SONInformationRequest;
	class TTCN_SRVCCHOIndication;
	class TTCN_SRVCCOperationPossible;
	class TTCN_SecurityContext;
	class TTCN_SecurityKey;
	class TTCN_SerialNumber;
	class TTCN_ServedGUMMEIs;
	class TTCN_ServedGUMMEIsItem;
	class TTCN_ServedGroupIDs;
	class TTCN_ServedMMECs;
	class TTCN_ServedPLMNs;
	class TTCN_Source_ToTarget_TransparentContainer;
	class TTCN_SourceBSS_ToTargetBSS_TransparentContainer;
	class TTCN_SourceRNC_ToTargetRNC_TransparentContainer;
	class TTCN_SourceeNB_ID;
	class TTCN_SourceeNB_ToTargeteNB_TransparentContainer;
	class TTCN_SubscriberProfileIDforRFP;
	class TTCN_SupportedTAs;
	class TTCN_SupportedTAs_Item;
	class TTCN_TAC;
	class TTCN_TAI;
	class TTCN_TAI_Broadcast;
	class TTCN_TAI_Broadcast_Item;
	class TTCN_TAI_Cancelled;
	class TTCN_TAI_Cancelled_Item;
	class TTCN_TAIListforWarning;
	class TTCN_TBCD_STRING;
	class TTCN_Target_ToSource_TransparentContainer;
	class TTCN_TargetBSS_ToSourceBSS_TransparentContainer;
	class TTCN_TargetID;
	class TTCN_TargetRNC_ID;
	class TTCN_TargetRNC_ToSourceRNC_TransparentContainer;
	class TTCN_TargeteNB_ID;
	class TTCN_TargeteNB_ToSourceeNB_TransparentContainer;
	class TTCN_Time_UE_StayedInCell;
	class TTCN_TimeToWait;
	class TTCN_TraceActivation;
	class TTCN_TraceDepth;
	class TTCN_TransportLayerAddress;
	class TTCN_TypeOfError;
	class TTCN_UE_HistoryInformation;
	class TTCN_UE_S1AP_ID_pair;
	class TTCN_UE_S1AP_IDs;
	class TTCN_UE_associatedLogicalS1_ConnectionItem;
	class TTCN_UEAggregateMaximumBitrate;
	class TTCN_UEIdentityIndexValue;
	class TTCN_UEPagingID;
	class TTCN_UERadioCapability;
	class TTCN_UESecurityCapabilities;
	class TTCN_WarningAreaList;
	class TTCN_WarningMessageContents;
	class TTCN_WarningSecurityInfo;
	class TTCN_WarningType;
	class TTCN_X2TNLConfigurationInfo;

	//子类型翻译类的声明
	class TTCN_1067:public S1AP_CommonDataTypes::TTCN_ProtocolIE_ID
	{
	public:
		explicit TTCN_1067(ValueOrTemplate vort = DATA_VALUE): S1AP_CommonDataTypes::TTCN_ProtocolIE_ID(&m_typeInfo, vort) {}
		TTCN_1067(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): S1AP_CommonDataTypes::TTCN_ProtocolIE_ID(m_typeInfo, vort) {}
		TTCN_1067(const S1AP_CommonDataTypes::TTCN_ProtocolIE_ID &data, const TypeInfo *m_typeInfo = NULL):S1AP_CommonDataTypes::TTCN_ProtocolIE_ID(data, m_typeInfo){}
		~TTCN_1067() {}
		TTCN_1067(const S1AP_CommonDataTypes::TTCN_ProtocolIE_ID &data):S1AP_CommonDataTypes::TTCN_ProtocolIE_ID(data, &m_typeInfo) {}
		TTCN_1067 &operator=(const CData &data);
		static TTCN_1067 *InternalCreate();
		static TypeInfo m_typeInfo;
	};

	//子类型翻译类的声明
	class TTCN_1075:public TTCN_Criticality
	{
	public:
		explicit TTCN_1075(ValueOrTemplate vort = DATA_VALUE): TTCN_Criticality(&m_typeInfo, vort) {}
		TTCN_1075(const TypeInfo *m_typeInfo, ValueOrTemplate vort = DATA_VALUE): TTCN_Criticality(m_typeInfo, vort) {}
		TTCN_1075(const TTCN_Criticality &data, const TypeInfo *m_typeInfo = NULL):TTCN_Criticality(data, m_typeInfo){}
		~TTCN_1075() {}
		TTCN_1075(const TTCN_Criticality &data):TTCN_Criticality(data, &m_typeInfo) {}
		TTCN_1075 &operator=(const CData &data);
		static TTCN_1075 *InternalCreate();
		static TypeInfo m_typeInfo;
	};
