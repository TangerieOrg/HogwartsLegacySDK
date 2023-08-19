#include "FPointerToUberGraphFrame.hpp"
#include "UABL_RCT_SPD_Death_BurnToAsh_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_RCT_SPD_Death_BurnToAsh_C* UABL_RCT_SPD_Death_BurnToAsh_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_RCT_SPD_Death_BurnToAsh.ABL_RCT_SPD_Death_BurnToAsh_C");
    return (UABL_RCT_SPD_Death_BurnToAsh_C*)res;
}
void UABL_RCT_SPD_Death_BurnToAsh_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_RCT_SPD_Death_BurnToAsh.ABL_RCT_SPD_Death_BurnToAsh_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_SPD_Death_BurnToAsh_C::ExecuteUbergraph_ABL_RCT_SPD_Death_BurnToAsh(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_RCT_SPD_Death_BurnToAsh.ABL_RCT_SPD_Death_BurnToAsh_C.ExecuteUbergraph_ABL_RCT_SPD_Death_BurnToAsh"));
    struct Params_ExecuteUbergraph_ABL_RCT_SPD_Death_BurnToAsh {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_RCT_SPD_Death_BurnToAsh params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
