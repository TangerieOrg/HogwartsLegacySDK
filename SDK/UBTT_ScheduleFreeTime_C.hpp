#pragma once
#include <cstdint>
#include "EEnvQueryStatus\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree.hpp"
class ASocialReasoning;
class UEnvQueryInstanceBlueprintWrapper;
class AActor;
#pragma pack(push, 1)
class UBTT_ScheduleFreeTime_C : public UBTTask_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    ASocialReasoning* Social_Reasoning; // 0xd8
    float Time_Available; // 0xe0
    char pad_e4[0x4];
    UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance; // 0xe8
    static UBTT_ScheduleFreeTime_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void FreeTime_OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);
    void ExecuteUbergraph_BTT_ScheduleFreeTime(int32_t EntryPoint);
}; // Size: 0xf0
#pragma pack(pop)
