#include "ECreatureAIState.hpp"
#include "FCreatureCombatAttackImpactData.hpp"
#include "FCreatureCombatDataWrapper.hpp"
#include "FOdcPathSpec.hpp"
#include "UActorComponent.hpp"
#include "UCreatureCombatProgressionData.hpp"
#include "UCreature_AIComponent.hpp"
#include "UCreature_CombatComponentV2.hpp"
#include "UFunction.hpp"
UCreature_CombatComponentV2* UCreature_CombatComponentV2::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_CombatComponentV2");
    return (UCreature_CombatComponentV2*)res;
}
void UCreature_CombatComponentV2::OnCreatureAIStateChanged(UCreature_AIComponent* AIComponent, ECreatureAIState PrevAIState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_CombatComponentV2.OnCreatureAIStateChanged"));
    struct Params_OnCreatureAIStateChanged {
        UCreature_AIComponent* AIComponent; // 0x0
        ECreatureAIState PrevAIState; // 0x8
    }; // Size: 0x9
    Params_OnCreatureAIStateChanged params{};
    params.AIComponent = (UCreature_AIComponent*)AIComponent;
    params.PrevAIState = (ECreatureAIState)PrevAIState;
    ProcessEvent(func, &params);
}
int32_t UCreature_CombatComponentV2::GetCurrentCombatStageIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_CombatComponentV2.GetCurrentCombatStageIndex"));
    struct Params_GetCurrentCombatStageIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentCombatStageIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
