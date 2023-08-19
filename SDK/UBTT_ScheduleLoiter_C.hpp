#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
class UScheduler;
#pragma pack(push, 1)
class UBTT_ScheduleLoiter_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    float Time_Available; // 0xe0
    char pad_e4[0x4];
    static UBTT_ScheduleLoiter_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleLoiter(int32_t EntryPoint, float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMinTime, float CallFunc_GetFreeTimeMinMaxStationChangeTime_outMaxTime, AActor* K2Node_Event_OwnerActor_1, float CallFunc_RandomFloatInRange_ReturnValue, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
}; // Size: 0xe8
#pragma pack(pop)
