#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_PetrifyInAir_S_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_PetrifyInAir_S_C* UABL_NPC_RCT_PetrifyInAir_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_PetrifyInAir_S.ABL_NPC_RCT_PetrifyInAir_S_C");
    return (UABL_NPC_RCT_PetrifyInAir_S_C*)res;
}
void UABL_NPC_RCT_PetrifyInAir_S_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_PetrifyInAir_S.ABL_NPC_RCT_PetrifyInAir_S_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_PetrifyInAir_S_C::ExecuteUbergraph_ABL_NPC_RCT_PetrifyInAir_S(int32_t EntryPoint, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_PetrifyInAir_S.ABL_NPC_RCT_PetrifyInAir_S_C.ExecuteUbergraph_ABL_NPC_RCT_PetrifyInAir_S"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_PetrifyInAir_S {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue; // 0x8
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        UAblAbility* K2Node_Event_NextAbility; // 0x18
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1; // 0x20
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x28
        bool CallFunc_NotEqual_ObjectObject_ReturnValue_1; // 0x29
        char pad_2a[0x6];
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x30
        bool CallFunc_BooleanOR_ReturnValue; // 0x38
        char pad_39[0x7];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
    }; // Size: 0x49
    Params_ExecuteUbergraph_ABL_NPC_RCT_PetrifyInAir_S params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue_1 = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
