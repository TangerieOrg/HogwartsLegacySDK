#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Dugbog_AlertStart_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
void UABL_Dugbog_AlertStart_C::ExecuteUbergraph_ABL_Dugbog_AlertStart(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_AlertStart.ABL_Dugbog_AlertStart_C.ExecuteUbergraph_ABL_Dugbog_AlertStart"));
    struct Params_ExecuteUbergraph_ABL_Dugbog_AlertStart {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Dugbog_AlertStart params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
UABL_Dugbog_AlertStart_C* UABL_Dugbog_AlertStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_AlertStart.ABL_Dugbog_AlertStart_C");
    return (UABL_Dugbog_AlertStart_C*)res;
}
void UABL_Dugbog_AlertStart_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Mobility/ABL_Dugbog_AlertStart.ABL_Dugbog_AlertStart_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
