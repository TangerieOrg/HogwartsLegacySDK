#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Dugbog_TiredLoop_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_Dugbog_TiredLoop_C::ExecuteUbergraph_ABL_Dugbog_TiredLoop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredLoop.ABL_Dugbog_TiredLoop_C.ExecuteUbergraph_ABL_Dugbog_TiredLoop"));
    struct Params_ExecuteUbergraph_ABL_Dugbog_TiredLoop {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Dugbog_TiredLoop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
UABL_Dugbog_TiredLoop_C* UABL_Dugbog_TiredLoop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredLoop.ABL_Dugbog_TiredLoop_C");
    return (UABL_Dugbog_TiredLoop_C*)res;
}
UAblAbility* UABL_Dugbog_TiredLoop_C::OnGetBranchAbility0(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredLoop.ABL_Dugbog_TiredLoop_C.OnGetBranchAbility"));
    struct Params_OnGetBranchAbility {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
        UAblAbility* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_OnGetBranchAbility params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
    return (UAblAbility*)params.ReturnValue;
}
void UABL_Dugbog_TiredLoop_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredLoop.ABL_Dugbog_TiredLoop_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
