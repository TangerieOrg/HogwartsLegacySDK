#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Enemy_Idle_Break_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_Enemy_Idle_Break_C* UABL_Enemy_Idle_Break_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Idle/ABL_Enemy_Idle_Break.ABL_Enemy_Idle_Break_C");
    return (UABL_Enemy_Idle_Break_C*)res;
}
void UABL_Enemy_Idle_Break_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Idle/ABL_Enemy_Idle_Break.ABL_Enemy_Idle_Break_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Enemy_Idle_Break_C::ExecuteUbergraph_ABL_Enemy_Idle_Break(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Abilities/Idle/ABL_Enemy_Idle_Break.ABL_Enemy_Idle_Break_C.ExecuteUbergraph_ABL_Enemy_Idle_Break"));
    struct Params_ExecuteUbergraph_ABL_Enemy_Idle_Break {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Enemy_Idle_Break params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
