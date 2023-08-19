#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
#pragma pack(push, 1)
class UBTT_ScheduleEat_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    int32_t Min_Time_Available; // 0xe0
    int32_t Max_Time_Available; // 0xe4
    int32_t Time_Available; // 0xe8
    char pad_ec[0x4];
    static UBTT_ScheduleEat_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleEat(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0xf0
#pragma pack(pop)
