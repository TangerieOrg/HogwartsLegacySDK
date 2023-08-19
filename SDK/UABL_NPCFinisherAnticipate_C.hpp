#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblNPCAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_NPCFinisherAnticipate_C : public UAblNPCAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_NPCFinisherAnticipate_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NPCFinisherAnticipate(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
