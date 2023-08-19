#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FGreetingQueryData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class UEnvQueryInstanceBlueprintWrapper;
class AActor;
class UObject;
class UScheduledEntity;
#pragma pack(push, 1)
class UBTT_ScheduleStationTransit_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    int32_t Min_Time_Available; // 0xe0
    int32_t Max_Time_Available; // 0xe4
    int32_t Time_Available; // 0xe8
    char pad_ec[0x4];
    UEnvQueryInstanceBlueprintWrapper* StationTransit_EQS_Acknowledge_Friends; // 0xf0
    float Simulated_Second_Multiplier; // 0xf8
    char pad_fc[0x4];
    static UBTT_ScheduleStationTransit_C* StaticClass();
    void ExitTask(AActor* OwnerActor);
    void StationTransit_AcknowledgeFriends_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleStationTransit(int32_t EntryPoint, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess, UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, bool CallFunc_CurrentlyInFlesh_ReturnValue, UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, EEnvQueryStatus::Type K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, AActor* K2Node_Event_OwnerActor, TArray<AActor*>& CallFunc_SelectGhostStoryPartners_AvailablePartners, bool CallFunc_SelectGhostStoryPartners_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_WhomShallIGreet_Score, FGreetingQueryData CallFunc_WhomShallIGreet_ReturnValue, AActor* K2Node_Event_OwnerActor_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
