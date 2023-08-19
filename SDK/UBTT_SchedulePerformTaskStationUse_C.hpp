#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
class UObject;
class UScheduledEntity;
#pragma pack(push, 1)
class UBTT_SchedulePerformTaskStationUse_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    float Time_Available; // 0xe0
    float Min_Time_Available; // 0xe4
    float Max_Time_Available; // 0xe8
    bool NodeActive; // 0xec
    char pad_ed[0x3];
    static UBTT_SchedulePerformTaskStationUse_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_SchedulePerformTaskStationUse(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetReasoner_ReturnValue, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_Event_OwnerActor, ASocialReasoning* K2Node_DynamicCast_AsSocial_Reasoning_1, bool K2Node_DynamicCast_bSuccess_2, UObject* CallFunc_GetReasoner_ReturnValue_1, UScheduledEntity* K2Node_DynamicCast_AsScheduled_Entity_1, bool K2Node_DynamicCast_bSuccess_3);
}; // Size: 0xf0
#pragma pack(pop)
