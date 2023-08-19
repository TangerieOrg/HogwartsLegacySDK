#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class UEnvQueryInstanceBlueprintWrapper;
class AActor;
#pragma pack(push, 1)
class UBTT_ScheduleChat_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    UEnvQueryInstanceBlueprintWrapper* EQS_Find_Stations; // 0xe0
    static UBTT_ScheduleChat_C* StaticClass();
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleChat(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0xe8
#pragma pack(pop)
