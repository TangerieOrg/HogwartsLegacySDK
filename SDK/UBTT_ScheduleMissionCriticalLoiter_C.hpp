#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class AActor;
#pragma pack(push, 1)
class UBTT_ScheduleMissionCriticalLoiter_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    static UBTT_ScheduleMissionCriticalLoiter_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleMissionCriticalLoiter(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0xd8
#pragma pack(pop)
