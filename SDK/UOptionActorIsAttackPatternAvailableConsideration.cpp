#include "UCreatureCombatAttackData.hpp"
#include "UOptionActorIsAttackPatternAvailableConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsAttackPatternAvailableConsideration* UOptionActorIsAttackPatternAvailableConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsAttackPatternAvailableConsideration");
    return (UOptionActorIsAttackPatternAvailableConsideration*)res;
}
