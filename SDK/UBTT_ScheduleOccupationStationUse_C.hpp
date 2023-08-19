#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
class UObject;
class UScheduledEntity;
class UScheduler;
#pragma pack(push, 1)
class UBTT_ScheduleOccupationStationUse_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    float Time_Available; // 0xe0
    float Min_Time_Available; // 0xe4
    float Max_Time_Available; // 0xe8
    bool NodeActive; // 0xec
    char pad_ed[0x3];
    static UBTT_ScheduleOccupationStationUse_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleOccupationStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetMinutesToUpcomingActivity_ActivityIsValid, int32_t CallFunc_GetMinutesToUpcomingActivity_MinutesToUpcomingActivity, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_FMin_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
}; // Size: 0xf0
#pragma pack(pop)
