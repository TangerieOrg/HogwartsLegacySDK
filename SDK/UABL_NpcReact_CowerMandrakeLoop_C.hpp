#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class UAblAbility;
class AActor;
#pragma pack(push, 1)
class UABL_NpcReact_CowerMandrakeLoop_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NpcReact_CowerMandrakeLoop_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NpcReact_CowerMandrakeLoop(int32_t EntryPoint, int32_t CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
