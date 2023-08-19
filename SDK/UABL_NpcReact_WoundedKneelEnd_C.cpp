#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NpcReact_WoundedKneelEnd_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
UABL_NpcReact_WoundedKneelEnd_C* UABL_NpcReact_WoundedKneelEnd_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_WoundedKneelEnd.ABL_NpcReact_WoundedKneelEnd_C");
    return (UABL_NpcReact_WoundedKneelEnd_C*)res;
}
void UABL_NpcReact_WoundedKneelEnd_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_WoundedKneelEnd.ABL_NpcReact_WoundedKneelEnd_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_WoundedKneelEnd_C::ExecuteUbergraph_ABL_NpcReact_WoundedKneelEnd(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UCapsuleComponent* CallFunc_GetNpcCapsuleComponent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_WoundedKneelEnd.ABL_NpcReact_WoundedKneelEnd_C.ExecuteUbergraph_ABL_NpcReact_WoundedKneelEnd"));
    struct Params_ExecuteUbergraph_ABL_NpcReact_WoundedKneelEnd {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        int32_t CallFunc_PostDialogueEvent_ReturnValue; // 0x18
        char pad_1c[0x4];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        UCapsuleComponent* CallFunc_GetNpcCapsuleComponent_ReturnValue; // 0x30
    }; // Size: 0x38
    Params_ExecuteUbergraph_ABL_NpcReact_WoundedKneelEnd params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_PostDialogueEvent_ReturnValue = (int32_t)CallFunc_PostDialogueEvent_ReturnValue;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetNpcCapsuleComponent_ReturnValue = (UCapsuleComponent*)CallFunc_GetNpcCapsuleComponent_ReturnValue;
    ProcessEvent(func, &params);
}
