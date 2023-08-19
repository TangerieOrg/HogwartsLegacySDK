#include "FPointerToUberGraphFrame.hpp"
#include "UABL_SwimSurface_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_SwimSurface_C* UABL_SwimSurface_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimSurface.ABL_SwimSurface_C");
    return (UABL_SwimSurface_C*)res;
}
void UABL_SwimSurface_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_SwimSurface.ABL_SwimSurface_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_SwimSurface_C::ExecuteUbergraph_ABL_SwimSurface(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Swimming/ABL_SwimSurface.ABL_SwimSurface_C.ExecuteUbergraph_ABL_SwimSurface"));
    struct Params_ExecuteUbergraph_ABL_SwimSurface {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_SwimSurface params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
