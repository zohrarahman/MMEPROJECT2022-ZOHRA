#ifndef S1AP_Constants_H
#define S1AP_Constants_H

#include "Tool.h"
//包含其他TTCN-3模块的头文件

#include "S1AP_CommonDataTypes.h"

namespace	S1AP_Constants
{

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Bearers_SubjectToStatusTransfer_Item;
	void FUNC_id_Bearers_SubjectToStatusTransfer_Item();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_BroadcastCompletedAreaList;
	void FUNC_id_BroadcastCompletedAreaList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_CSFallbackIndicator;
	void FUNC_id_CSFallbackIndicator();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_CSG_IdList;
	void FUNC_id_CSG_IdList();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_CellTrafficTrace;
	void FUNC_id_CellTrafficTrace();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_CriticalityDiagnostics;
	void FUNC_id_CriticalityDiagnostics();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_DeactivateTrace;
	void FUNC_id_DeactivateTrace();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Direct_Forwarding_Path_Availability;
	void FUNC_id_Direct_Forwarding_Path_Availability();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABAdmittedItem;
	void FUNC_id_E_RABAdmittedItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABDataForwardingItem;
	void FUNC_id_E_RABDataForwardingItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToModifyList;
	void FUNC_id_E_RABFailedToModifyList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToSetupListBearerSURes;
	void FUNC_id_E_RABFailedToSetupListBearerSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToSetupListHOReqAck;
	void FUNC_id_E_RABFailedToSetupListHOReqAck();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABInformationListItem;
	void FUNC_id_E_RABInformationListItem();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_E_RABModify;
	void FUNC_id_E_RABModify();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABModifyListBearerModRes;
	void FUNC_id_E_RABModifyListBearerModRes();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_E_RABReleaseIndication;
	void FUNC_id_E_RABReleaseIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABReleaseItemBearerRelComp;
	void FUNC_id_E_RABReleaseItemBearerRelComp();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABReleaseListBearerRelComp;
	void FUNC_id_E_RABReleaseListBearerRelComp();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_E_RABSetup;
	void FUNC_id_E_RABSetup();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABSetupItemCtxtSURes;
	void FUNC_id_E_RABSetupItemCtxtSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABSetupListCtxtSURes;
	void FUNC_id_E_RABSetupListCtxtSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeModifiedItemBearerModReq;
	void FUNC_id_E_RABToBeModifiedItemBearerModReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeReleasedList;
	void FUNC_id_E_RABToBeReleasedList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupItemCtxtSUReq;
	void FUNC_id_E_RABToBeSetupItemCtxtSUReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupListBearerSUReq;
	void FUNC_id_E_RABToBeSetupListBearerSUReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupListHOReq;
	void FUNC_id_E_RABToBeSetupListHOReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSwitchedDLList;
	void FUNC_id_E_RABToBeSwitchedDLList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSwitchedULList;
	void FUNC_id_E_RABToBeSwitchedULList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_UTRAN_Trace_ID;
	void FUNC_id_E_UTRAN_Trace_ID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_EUTRAN_CGI;
	void FUNC_id_EUTRAN_CGI();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_ErrorIndication;
	void FUNC_id_ErrorIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_GUMMEI_ID;
	void FUNC_id_GUMMEI_ID();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_HandoverCancel;
	void FUNC_id_HandoverCancel();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_HandoverPreparation;
	void FUNC_id_HandoverPreparation();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_HandoverRestrictionList;
	void FUNC_id_HandoverRestrictionList();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_InitialContextSetup;
	void FUNC_id_InitialContextSetup();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Inter_SystemInformationTransferTypeMDT;
	void FUNC_id_Inter_SystemInformationTransferTypeMDT();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_LocationReport;
	void FUNC_id_LocationReport();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_LocationReportingFailureIndication;
	void FUNC_id_LocationReportingFailureIndication();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_MMEConfigurationTransfer;
	void FUNC_id_MMEConfigurationTransfer();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_MMEDirectInformationTransfer;
	void FUNC_id_MMEDirectInformationTransfer();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_MMEname;
	void FUNC_id_MMEname();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_MSClassmark3;
	void FUNC_id_MSClassmark3();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_NAS_DownlinkCount;
	void FUNC_id_NAS_DownlinkCount();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_NASNonDeliveryIndication;
	void FUNC_id_NASNonDeliveryIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_NASSecurityParameterstoE_UTRAN;
	void FUNC_id_NASSecurityParameterstoE_UTRAN();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_OverloadResponse;
	void FUNC_id_OverloadResponse();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_OverloadStop;
	void FUNC_id_OverloadStop();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_PathSwitchRequest;
	void FUNC_id_PathSwitchRequest();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_RRC_Establishment_Cause;
	void FUNC_id_RRC_Establishment_Cause();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_RepetitionPeriod;
	void FUNC_id_RepetitionPeriod();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_Reset;
	void FUNC_id_Reset();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_S_TMSI;
	void FUNC_id_S_TMSI();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SONConfigurationTransferECT;
	void FUNC_id_SONConfigurationTransferECT();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SRVCCHOIndication;
	void FUNC_id_SRVCCHOIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SecurityContext;
	void FUNC_id_SecurityContext();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SerialNumber;
	void FUNC_id_SerialNumber();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_ServedPLMNs;
	void FUNC_id_ServedPLMNs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Source_ToTarget_TransparentContainer_Secondary;
	void FUNC_id_Source_ToTarget_TransparentContainer_Secondary();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SourceMME_UE_S1AP_ID;
	void FUNC_id_SourceMME_UE_S1AP_ID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SupportedTAs;
	void FUNC_id_SupportedTAs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TAIItem;
	void FUNC_id_TAIItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Target_ToSource_TransparentContainer;
	void FUNC_id_Target_ToSource_TransparentContainer();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TargetID;
	void FUNC_id_TargetID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TraceActivation;
	void FUNC_id_TraceActivation();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_TraceFailureIndication;
	void FUNC_id_TraceFailureIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UE_S1AP_IDs;
	void FUNC_id_UE_S1AP_IDs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UE_associatedLogicalS1_ConnectionListResAck;
	void FUNC_id_UE_associatedLogicalS1_ConnectionListResAck();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_UEContextModification;
	void FUNC_id_UEContextModification();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_UEContextReleaseRequest;
	void FUNC_id_UEContextReleaseRequest();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UEPagingID;
	void FUNC_id_UEPagingID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UESecurityCapabilities;
	void FUNC_id_UESecurityCapabilities();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_UplinkS1cdma2000tunneling;
	void FUNC_id_UplinkS1cdma2000tunneling();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_WarningMessageContents;
	void FUNC_id_WarningMessageContents();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_WarningType;
	void FUNC_id_WarningType();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000HORequiredIndication;
	void FUNC_id_cdma2000HORequiredIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000OneXRAND;
	void FUNC_id_cdma2000OneXRAND();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000PDU;
	void FUNC_id_cdma2000PDU();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000SectorID;
	void FUNC_id_cdma2000SectorID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_eNB_StatusTransfer_TransparentContainer;
	void FUNC_id_eNB_StatusTransfer_TransparentContainer();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_eNBConfigurationTransfer;
	void FUNC_id_eNBConfigurationTransfer();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_eNBStatusTransfer;
	void FUNC_id_eNBStatusTransfer();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_initialUEMessage;
	void FUNC_id_initialUEMessage();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_uEaggregateMaximumBitrate;
	void FUNC_id_uEaggregateMaximumBitrate();

	extern CInteger TTCN_maxNrOfCSGs;
	void FUNC_maxNrOfCSGs();

	extern CInteger TTCN_maxNrOfErrors;
	void FUNC_maxNrOfErrors();

	extern CInteger TTCN_maxPrivateIEs;
	void FUNC_maxPrivateIEs();

	extern CInteger TTCN_maxProtocolIEs;
	void FUNC_maxProtocolIEs();

	extern CInteger TTCN_maxnoofCellID;
	void FUNC_maxnoofCellID();

	extern CInteger TTCN_maxnoofCellinTAI;
	void FUNC_maxnoofCellinTAI();

	extern CInteger TTCN_maxnoofEPLMNs;
	void FUNC_maxnoofEPLMNs();

	extern CInteger TTCN_maxnoofEmergencyAreaID;
	void FUNC_maxnoofEmergencyAreaID();

	extern CInteger TTCN_maxnoofForbTACs;
	void FUNC_maxnoofForbTACs();

	extern CInteger TTCN_maxnoofMMECs;
	void FUNC_maxnoofMMECs();

	extern CInteger TTCN_maxnoofRATs;
	void FUNC_maxnoofRATs();

	extern CInteger TTCN_maxnoofTAIforWarning;
	void FUNC_maxnoofTAIforWarning();

	extern CInteger TTCN_maxnoofeNBX2TLAs;
	void FUNC_maxnoofeNBX2TLAs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_BroadcastCancelledAreaList;
	void FUNC_id_BroadcastCancelledAreaList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_CSG_Id;
	void FUNC_id_CSG_Id();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_ConcurrentWarningMessageIndicator;
	void FUNC_id_ConcurrentWarningMessageIndicator();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_DefaultPagingDRX;
	void FUNC_id_DefaultPagingDRX();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABAdmittedList;
	void FUNC_id_E_RABAdmittedList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToReleaseList;
	void FUNC_id_E_RABFailedToReleaseList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedtoSetupItemHOReqAck;
	void FUNC_id_E_RABFailedtoSetupItemHOReqAck();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABModifyItemBearerModRes;
	void FUNC_id_E_RABModifyItemBearerModRes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABReleaseItem;
	void FUNC_id_E_RABReleaseItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABReleasedList;
	void FUNC_id_E_RABReleasedList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABSetupListBearerSURes;
	void FUNC_id_E_RABSetupListBearerSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeModifiedListBearerModReq;
	void FUNC_id_E_RABToBeModifiedListBearerModReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupItemHOReq;
	void FUNC_id_E_RABToBeSetupItemHOReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSwitchedDLItem;
	void FUNC_id_E_RABToBeSwitchedDLItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABtoReleaseListHOCmd;
	void FUNC_id_E_RABtoReleaseListHOCmd();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_EUTRANRoundTripDelayEstimationInfo;
	void FUNC_id_EUTRANRoundTripDelayEstimationInfo();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Global_ENB_ID;
	void FUNC_id_Global_ENB_ID();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_HandoverResourceAllocation;
	void FUNC_id_HandoverResourceAllocation();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Inter_SystemInformationTransferTypeEDT;
	void FUNC_id_Inter_SystemInformationTransferTypeEDT();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_LocationReportingControl;
	void FUNC_id_LocationReportingControl();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_MMEConfigurationUpdate;
	void FUNC_id_MMEConfigurationUpdate();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_MSClassmark2;
	void FUNC_id_MSClassmark2();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_NAS_PDU;
	void FUNC_id_NAS_PDU();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_NumberofBroadcastRequest;
	void FUNC_id_NumberofBroadcastRequest();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_Paging;
	void FUNC_id_Paging();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_RelativeMMECapacity;
	void FUNC_id_RelativeMMECapacity();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_ResetType;
	void FUNC_id_ResetType();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SONConfigurationTransferMCT;
	void FUNC_id_SONConfigurationTransferMCT();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SecurityKey;
	void FUNC_id_SecurityKey();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Source_ToTarget_TransparentContainer;
	void FUNC_id_Source_ToTarget_TransparentContainer();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SubscriberProfileIDforRFP;
	void FUNC_id_SubscriberProfileIDforRFP();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TAIList;
	void FUNC_id_TAIList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TimeToWait;
	void FUNC_id_TimeToWait();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_TraceStart;
	void FUNC_id_TraceStart();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_UECapabilityInfoIndication;
	void FUNC_id_UECapabilityInfoIndication();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UEIdentityIndexValue;
	void FUNC_id_UEIdentityIndexValue();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UTRANtoLTEHOInformationRes;
	void FUNC_id_UTRANtoLTEHOInformationRes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_WarningSecurityInfo;
	void FUNC_id_WarningSecurityInfo();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000HOStatus;
	void FUNC_id_cdma2000HOStatus();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000RATType;
	void FUNC_id_cdma2000RATType();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_eNB_UE_S1AP_ID;
	void FUNC_id_eNB_UE_S1AP_ID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_eNBname;
	void FUNC_id_eNBname();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_uplinkNASTransport;
	void FUNC_id_uplinkNASTransport();

	extern CInteger TTCN_maxNrOfIndividualS1ConnectionsToReset;
	void FUNC_maxNrOfIndividualS1ConnectionsToReset();

	extern CInteger TTCN_maxnoofBPLMNs;
	void FUNC_maxnoofBPLMNs();

	extern CInteger TTCN_maxnoofCells;
	void FUNC_maxnoofCells();

	extern CInteger TTCN_maxnoofForbLACs;
	void FUNC_maxnoofForbLACs();

	extern CInteger TTCN_maxnoofPLMNsPerMME;
	void FUNC_maxnoofPLMNsPerMME();

	extern CInteger TTCN_maxnoofTAIs;
	void FUNC_maxnoofTAIs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_CNDomain;
	void FUNC_id_CNDomain();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_DataCodingScheme;
	void FUNC_id_DataCodingScheme();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToBeReleasedList;
	void FUNC_id_E_RABFailedToBeReleasedList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABItem;
	void FUNC_id_E_RABItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABReleaseItemHOCmd;
	void FUNC_id_E_RABReleaseItemHOCmd();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABSubjecttoDataForwardingList;
	void FUNC_id_E_RABSubjecttoDataForwardingList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupListCtxtSUReq;
	void FUNC_id_E_RABToBeSetupListCtxtSUReq();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_ENBConfigurationUpdate;
	void FUNC_id_ENBConfigurationUpdate();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_HandoverNotification;
	void FUNC_id_HandoverNotification();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_Kill;
	void FUNC_id_Kill();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_MMEStatusTransfer;
	void FUNC_id_MMEStatusTransfer();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_NASSecurityParametersfromE_UTRAN;
	void FUNC_id_NASSecurityParametersfromE_UTRAN();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_PrivateMessage;
	void FUNC_id_PrivateMessage();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_S1Setup;
	void FUNC_id_S1Setup();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_ServedGUMMEIs;
	void FUNC_id_ServedGUMMEIs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TAI;
	void FUNC_id_TAI();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_TraceCollectionEntityIPAddress;
	void FUNC_id_TraceCollectionEntityIPAddress();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_UEContextRelease;
	void FUNC_id_UEContextRelease();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_WarningAreaList;
	void FUNC_id_WarningAreaList();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_cdma2000OneXSRVCCInfo;
	void FUNC_id_cdma2000OneXSRVCCInfo();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_eNBDirectInformationTransfer;
	void FUNC_id_eNBDirectInformationTransfer();

	extern CInteger TTCN_maxNrOfE_RABs;
	void FUNC_maxNrOfE_RABs();

	extern CInteger TTCN_maxnoofCellinEAI;
	void FUNC_maxnoofCellinEAI();

	extern CInteger TTCN_maxnoofGroupIDs;
	void FUNC_maxnoofGroupIDs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Cause;
	void FUNC_id_Cause();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABFailedToSetupListCtxtSURes;
	void FUNC_id_E_RABFailedToSetupListCtxtSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABSetupItemBearerSURes;
	void FUNC_id_E_RABSetupItemBearerSURes();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSwitchedULItem;
	void FUNC_id_E_RABToBeSwitchedULItem();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_HandoverType;
	void FUNC_id_HandoverType();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_MessageIdentifier;
	void FUNC_id_MessageIdentifier();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_RequestType;
	void FUNC_id_RequestType();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SourceID;
	void FUNC_id_SourceID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UE_associatedLogicalS1_ConnectionItem;
	void FUNC_id_UE_associatedLogicalS1_ConnectionItem();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_WriteReplaceWarning;
	void FUNC_id_WriteReplaceWarning();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_pagingDRX;
	void FUNC_id_pagingDRX();

	extern CInteger TTCN_maxnoofEPLMNsPlusOne;
	void FUNC_maxnoofEPLMNsPlusOne();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_DownlinkS1cdma2000tunneling;
	void FUNC_id_DownlinkS1cdma2000tunneling();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_E_RABToBeSetupItemBearerSUReq;
	void FUNC_id_E_RABToBeSetupItemBearerSUReq();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_MME_UE_S1AP_ID;
	void FUNC_id_MME_UE_S1AP_ID();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_SRVCCOperationPossible;
	void FUNC_id_SRVCCOperationPossible();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_UERadioCapability;
	void FUNC_id_UERadioCapability();

	extern CInteger TTCN_maxProtocolExtensions;
	void FUNC_maxProtocolExtensions();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_E_RABRelease;
	void FUNC_id_E_RABRelease();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_OverloadStart;
	void FUNC_id_OverloadStart();

	extern S1AP_CommonDataTypes::TTCN_ProcedureCode TTCN_id_downlinkNASTransport;
	void FUNC_id_downlinkNASTransport();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_GERANtoLTEHOInformationRes;
	void FUNC_id_GERANtoLTEHOInformationRes();

	extern CInteger TTCN_maxnoofTACs;
	void FUNC_maxnoofTACs();

	extern S1AP_CommonDataTypes::TTCN_ProtocolIE_ID TTCN_id_Target_ToSource_TransparentContainer_Secondary;
	void FUNC_id_Target_ToSource_TransparentContainer_Secondary();

	// 模块类的声明
	class TTCN_S1AP_Constants : public CModule
	{
	public:
		TTCN_S1AP_Constants();
		~TTCN_S1AP_Constants();
		// 配置外部常量 
		TciExternalConstList GetExternalCst();
		// 配置模块参数 
		TciModuleParameterList GetTciModuleParameterList();
	};

	extern TTCN_S1AP_Constants *_g_pModule;

	void Init();

	void Release();

}
#endif
