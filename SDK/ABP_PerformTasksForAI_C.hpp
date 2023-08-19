#pragma once
#include <cstdint>
#include "APerformTasksForAI.hpp"
#include "FPointerToUberGraphFrame.hpp"
class AActor;
class UObject;
#pragma pack(push, 1)
class ABP_PerformTasksForAI_C : public APerformTasksForAI {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x530
    char pad_538[0x8];
    static ABP_PerformTasksForAI_C* StaticClass();
    void SwitchOff(AActor* SwitchActor);
    void SwitchOn(AActor* SwitchActor);
    void CallSwitchOnBP0(UObject* InTarget);
    void CallSwitchOffBP0(UObject* InTarget);
    void ExecuteUbergraph_BP_PerformTasksForAI(int32_t EntryPoint, AActor* K2Node_Event_SwitchActor_1, AActor* K2Node_Event_SwitchActor, UObject* K2Node_Event_InTarget_1, UObject* K2Node_Event_InTarget);
}; // Size: 0x540
#pragma pack(pop)
