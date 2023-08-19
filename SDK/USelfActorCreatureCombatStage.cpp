#include "EUtilityArithmeticOperation.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfActorCreatureCombatStage.hpp"
USelfActorCreatureCombatStage* USelfActorCreatureCombatStage::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorCreatureCombatStage");
    return (USelfActorCreatureCombatStage*)res;
}
