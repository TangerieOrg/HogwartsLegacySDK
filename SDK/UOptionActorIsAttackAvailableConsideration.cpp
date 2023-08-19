#include "UCreatureCombatAttackData.hpp"
#include "UOptionActorIsAttackAvailableConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsAttackAvailableConsideration* UOptionActorIsAttackAvailableConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsAttackAvailableConsideration");
    return (UOptionActorIsAttackAvailableConsideration*)res;
}
