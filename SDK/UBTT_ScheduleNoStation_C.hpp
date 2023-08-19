#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class AActor;
#pragma pack(push, 1)
class UBTT_ScheduleNoStation_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* SocialReasoning; // 0xd8
    static UBTT_ScheduleNoStation_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ScheduleNoStation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor);
}; // Size: 0xe0
#pragma pack(pop)
