#include "UOptionActorCentaurAttackTargetConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorCentaurAttackTargetConsideration* UOptionActorCentaurAttackTargetConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorCentaurAttackTargetConsideration");
    return (UOptionActorCentaurAttackTargetConsideration*)res;
}
