#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FQueryFinishedData.hpp"
#include "UBTService_SocialReasoning.hpp"
class ASocialReasoning;
class UEnvQueryInstanceBlueprintWrapper;
#pragma pack(push, 1)
class UBTS_Biped_EQS_C : public UBTService_SocialReasoning {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    static UBTS_Biped_EQS_C* StaticClass();
    void RunEQS_FindStations(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void FindStations_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void RunEQS_FindSocialReasonings(ASocialReasoning* SocialReasoning, EEnvQueryRunMode::Type RunMode, FQueryFinishedData& QueryFinishedDelegate);
    void FindSocialReasonings_QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTS_Biped_EQS(int32_t EntryPoint, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, ASocialReasoning* K2Node_Event_SocialReasoning_1, EEnvQueryRunMode::Type K2Node_Event_RunMode_1, FQueryFinishedData K2Node_Event_QueryFinishedDelegate_1, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance_1, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus_1, bool CallFunc_IsValid_ReturnValue, ASocialReasoning* K2Node_Event_SocialReasoning, EEnvQueryRunMode::Type K2Node_Event_RunMode, FQueryFinishedData K2Node_Event_QueryFinishedDelegate);
}; // Size: 0xd8
#pragma pack(pop)
