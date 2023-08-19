#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NpcReact_CowerMandrakeStart_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NpcReact_CowerMandrakeStart_C* UABL_NpcReact_CowerMandrakeStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerMandrakeStart.ABL_NpcReact_CowerMandrakeStart_C");
    return (UABL_NpcReact_CowerMandrakeStart_C*)res;
}
void UABL_NpcReact_CowerMandrakeStart_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerMandrakeStart.ABL_NpcReact_CowerMandrakeStart_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NpcReact_CowerMandrakeStart_C::ExecuteUbergraph_ABL_NpcReact_CowerMandrakeStart(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_CowerMandrakeStart.ABL_NpcReact_CowerMandrakeStart_C.ExecuteUbergraph_ABL_NpcReact_CowerMandrakeStart"));
    struct Params_ExecuteUbergraph_ABL_NpcReact_CowerMandrakeStart {
        int32_t EntryPoint; // 0x0
        FName CallFunc_GetStatName_ReturnValue; // 0x4
        char pad_c[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_ABL_NpcReact_CowerMandrakeStart params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetStatName_ReturnValue = (FName)CallFunc_GetStatName_ReturnValue;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
