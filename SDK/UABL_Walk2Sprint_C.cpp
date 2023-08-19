#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Walk2Sprint_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_Walk2Sprint_C* UABL_Walk2Sprint_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Walk2Sprint.ABL_Walk2Sprint_C");
    return (UABL_Walk2Sprint_C*)res;
}
void UABL_Walk2Sprint_C::OnAbilityEnd0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/ABL_Walk2Sprint.ABL_Walk2Sprint_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Walk2Sprint_C::OnAbilityInterrupt0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/ABL_Walk2Sprint.ABL_Walk2Sprint_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Walk2Sprint_C::ExecuteUbergraph_ABL_Walk2Sprint(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbilityContext* K2Node_Event_Context_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/ABL_Walk2Sprint.ABL_Walk2Sprint_C.ExecuteUbergraph_ABL_Walk2Sprint"));
    struct Params_ExecuteUbergraph_ABL_Walk2Sprint {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        UAblAbilityContext* K2Node_Event_Context_1; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_ABL_Walk2Sprint params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.K2Node_Event_Context_1 = (UAblAbilityContext*)K2Node_Event_Context_1;
    ProcessEvent(func, &params);
}
