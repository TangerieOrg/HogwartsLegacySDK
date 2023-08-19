#include "FPointerToUberGraphFrame.hpp"
#include "UABL_ShadowSprint_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_ShadowSprint_C* UABL_ShadowSprint_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C");
    return (UABL_ShadowSprint_C*)res;
}
void UABL_ShadowSprint_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_ShadowSprint_C::OnAbilityEnd0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_ShadowSprint_C::ExecuteUbergraph_ABL_ShadowSprint(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C.ExecuteUbergraph_ABL_ShadowSprint"));
    struct Params_ExecuteUbergraph_ABL_ShadowSprint {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbility* K2Node_Event_NextAbility; // 0x10
        UAblAbilityContext* K2Node_Event_Context_3; // 0x18
        UAblAbilityContext* K2Node_Event_Context_2; // 0x20
        UAblAbilityContext* K2Node_Event_Context_1; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_ABL_ShadowSprint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_NextAbility = (UAblAbility*)K2Node_Event_NextAbility;
    params.K2Node_Event_Context_3 = (UAblAbilityContext*)K2Node_Event_Context_3;
    params.K2Node_Event_Context_2 = (UAblAbilityContext*)K2Node_Event_Context_2;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    ProcessEvent(func, &params);
}
void UABL_ShadowSprint_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_ShadowSprint_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/RailTravel/ABL_ShadowSprint.ABL_ShadowSprint_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
