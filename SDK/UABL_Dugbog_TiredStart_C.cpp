#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Dugbog_TiredStart_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_Dugbog_TiredStart_C* UABL_Dugbog_TiredStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredStart.ABL_Dugbog_TiredStart_C");
    return (UABL_Dugbog_TiredStart_C*)res;
}
void UABL_Dugbog_TiredStart_C::ExecuteUbergraph_ABL_Dugbog_TiredStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredStart.ABL_Dugbog_TiredStart_C.ExecuteUbergraph_ABL_Dugbog_TiredStart"));
    struct Params_ExecuteUbergraph_ABL_Dugbog_TiredStart {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Dugbog_TiredStart params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
UAblAbility* UABL_Dugbog_TiredStart_C::OnGetBranchAbility0(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredStart.ABL_Dugbog_TiredStart_C.OnGetBranchAbility"));
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
void UABL_Dugbog_TiredStart_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_TiredStart.ABL_Dugbog_TiredStart_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
