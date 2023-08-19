#include "FPointerToUberGraphFrame.hpp"
#include "UABL_SPD_RCT_FallTumbleGetup_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
void UABL_SPD_RCT_FallTumbleGetup_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
UABL_SPD_RCT_FallTumbleGetup_C* UABL_SPD_RCT_FallTumbleGetup_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C");
    return (UABL_SPD_RCT_FallTumbleGetup_C*)res;
}
void UABL_SPD_RCT_FallTumbleGetup_C::ExecuteUbergraph_ABL_SPD_RCT_FallTumbleGetup(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C.ExecuteUbergraph_ABL_SPD_RCT_FallTumbleGetup"));
    struct Params_ExecuteUbergraph_ABL_SPD_RCT_FallTumbleGetup {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_3; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        UAblAbilityContext* K2Node_Event_Context_1; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_ABL_SPD_RCT_FallTumbleGetup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    ProcessEvent(func, &params);
}
void UABL_SPD_RCT_FallTumbleGetup_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_SPD_RCT_FallTumbleGetup_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_SPD_RCT_FallTumbleGetup_C::OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleGetup.ABL_SPD_RCT_FallTumbleGetup_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
