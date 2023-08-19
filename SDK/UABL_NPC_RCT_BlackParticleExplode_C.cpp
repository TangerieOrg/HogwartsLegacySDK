#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_BlackParticleExplode_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_NPC_RCT_BlackParticleExplode_C* UABL_NPC_RCT_BlackParticleExplode_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_NPC_RCT_BlackParticleExplode.ABL_NPC_RCT_BlackParticleExplode_C");
    return (UABL_NPC_RCT_BlackParticleExplode_C*)res;
}
void UABL_NPC_RCT_BlackParticleExplode_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_NPC_RCT_BlackParticleExplode.ABL_NPC_RCT_BlackParticleExplode_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_NPC_RCT_BlackParticleExplode_C::ExecuteUbergraph_ABL_NPC_RCT_BlackParticleExplode(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_NPC_RCT_BlackParticleExplode.ABL_NPC_RCT_BlackParticleExplode_C.ExecuteUbergraph_ABL_NPC_RCT_BlackParticleExplode"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_BlackParticleExplode {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_NPC_RCT_BlackParticleExplode params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
