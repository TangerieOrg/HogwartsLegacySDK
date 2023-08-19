#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_Enemy_DodgeRoll_Spawn_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Enemy_DodgeRoll_Spawn_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void OnAbilityEnd0(UAblAbilityContext* Context);
    void OnAbilityInterrupt0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_Enemy_DodgeRoll_Spawn(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, int32_t CallFunc_PostDialogueEvent_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue_1);
}; // Size: 0xd0
#pragma pack(pop)
