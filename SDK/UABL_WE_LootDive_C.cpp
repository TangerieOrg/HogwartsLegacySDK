#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_WE_LootDive_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_WE_LootDive_C::OnCustomEvent0(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
    }; // Size: 0x10
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
UABL_WE_LootDive_C* UABL_WE_LootDive_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C");
    return (UABL_WE_LootDive_C*)res;
}
void UABL_WE_LootDive_C::OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityBranch"));
    struct Params_OnAbilityBranch {
        UAblAbilityContext* Context; // 0x0
        UAblAbility* NextAbility; // 0x8
    }; // Size: 0x10
    Params_OnAbilityBranch params{};
    params.Context = (UAblAbilityContext*)Context;
    params.NextAbility = (UAblAbility*)NextAbility;
    ProcessEvent(func, &params);
}
void UABL_WE_LootDive_C::OnAbilityEnd0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_WE_LootDive_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_WE_LootDive_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_WE_LootDive.ABL_WE_LootDive_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_WE_LootDive_C::ExecuteUbergraph_ABL_WE_LootDive(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1) {}
