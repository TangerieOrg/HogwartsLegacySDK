#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
class AActor;
class ASocialReasoning;
class APawn;
class UObject;
class UScheduledEntity;
#pragma pack(push, 1)
class UBTT_EventPerformTask_StationNeedsService_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    FName StationNeedingServiceKey; // 0xd8
    FName StationActionNameKey; // 0xe0
    FName StationConnectionIndexKey; // 0xe8
    FName StationInteractionTypeKey; // 0xf0
    FName SkipValidationForTeleportToStation; // 0xf8
    FStationQueryData StationQueryData; // 0x100
    FName StationUseDuration; // 0x120
    static UBTT_EventPerformTask_StationNeedsService_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_EventPerformTask_StationNeedsService(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning_1, bool K2Node_DynamicCast_bSuccess_1, APawn* CallFunc_GetReasonerPawn_ReturnValue, UObject* CallFunc_GetReasoner_ReturnValue, bool CallFunc_IsValid_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_2);
}; // Size: 0x128
#pragma pack(pop)
