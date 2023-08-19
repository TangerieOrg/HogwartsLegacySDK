#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
class ANPC_Character;
class UCapsuleComponent;
#pragma pack(push, 1)
class UABL_NpcReact_WoundedKneelEnd_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NpcReact_WoundedKneelEnd_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NpcReact_WoundedKneelEnd(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UCapsuleComponent* CallFunc_GetNpcCapsuleComponent_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
