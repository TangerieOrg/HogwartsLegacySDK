#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_Petrify_S_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
#include "URagdollControlComponent.hpp"
UABL_NPC_RCT_Petrify_S_C* UABL_NPC_RCT_Petrify_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Petrify_S.ABL_NPC_RCT_Petrify_S_C");
    return (UABL_NPC_RCT_Petrify_S_C*)res;
}
void UABL_NPC_RCT_Petrify_S_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Petrify_S.ABL_NPC_RCT_Petrify_S_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_Petrify_S_C::ExecuteUbergraph_ABL_NPC_RCT_Petrify_S(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, URagdollControlComponent* CallFunc_GetComponentByClass_ReturnValue, UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Petrify_S.ABL_NPC_RCT_Petrify_S_C.ExecuteUbergraph_ABL_NPC_RCT_Petrify_S"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_Petrify_S {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue; // 0x18
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x20
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x28
        char pad_29[0x7];
        URagdollControlComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x30
        UAblAbility* CallFunc_GetAbilityObjectFromClass_ReturnValue_1; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x40
        bool CallFunc_NotEqual_ObjectObject_ReturnValue_1; // 0x41
        bool CallFunc_BooleanOR_ReturnValue; // 0x42
    }; // Size: 0x43
    Params_ExecuteUbergraph_ABL_NPC_RCT_Petrify_S params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (URagdollControlComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetAbilityObjectFromClass_ReturnValue_1 = (UAblAbility*)CallFunc_GetAbilityObjectFromClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
