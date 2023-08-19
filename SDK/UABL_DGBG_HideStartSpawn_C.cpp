#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_DGBG_HideStartSpawn_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UABL_DGBG_HideStartSpawn_C* UABL_DGBG_HideStartSpawn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_HideStartSpawn.ABL_DGBG_HideStartSpawn_C");
    return (UABL_DGBG_HideStartSpawn_C*)res;
}
void UABL_DGBG_HideStartSpawn_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_HideStartSpawn.ABL_DGBG_HideStartSpawn_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_DGBG_HideStartSpawn_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_HideStartSpawn.ABL_DGBG_HideStartSpawn_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_DGBG_HideStartSpawn_C::ExecuteUbergraph_ABL_DGBG_HideStartSpawn(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_HideStartSpawn.ABL_DGBG_HideStartSpawn_C.ExecuteUbergraph_ABL_DGBG_HideStartSpawn"));
    struct Params_ExecuteUbergraph_ABL_DGBG_HideStartSpawn {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context_1; // 0x8
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        UAblAbility* K2Node_Event_NextAbility; // 0x18
        AActor* CallFunc_GetOwner_ReturnValue; // 0x20
        AActor* CallFunc_GetOwner_ReturnValue_1; // 0x28
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
    }; // Size: 0x48
    Params_ExecuteUbergraph_ABL_DGBG_HideStartSpawn params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue_1 = (AActor*)CallFunc_GetOwner_ReturnValue_1;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UEnemyAIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    ProcessEvent(func, &params);
}
