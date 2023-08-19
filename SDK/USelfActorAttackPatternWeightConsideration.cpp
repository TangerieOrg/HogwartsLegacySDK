#include "UCreatureCombatAttackData.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfActorAttackPatternWeightConsideration.hpp"
USelfActorAttackPatternWeightConsideration* USelfActorAttackPatternWeightConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorAttackPatternWeightConsideration");
    return (USelfActorAttackPatternWeightConsideration*)res;
}
