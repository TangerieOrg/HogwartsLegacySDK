#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
class UScheduler;
#pragma pack(push, 1)
class UBTT_SchedulePatrolStationUse_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* SocialReasoning; // 0xd8
    static UBTT_SchedulePatrolStationUse_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_SchedulePatrolStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float CallFunc_Multiply_FloatFloat_ReturnValue, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, UScheduler* CallFunc_Get_ReturnValue, float CallFunc_GetSimulatedSecondMultiplier_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
}; // Size: 0xe0
#pragma pack(pop)
