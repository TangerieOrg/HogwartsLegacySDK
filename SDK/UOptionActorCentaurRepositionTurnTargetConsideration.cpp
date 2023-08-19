#include "UOptionActorCentaurRepositionTurnTargetConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorCentaurRepositionTurnTargetConsideration* UOptionActorCentaurRepositionTurnTargetConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorCentaurRepositionTurnTargetConsideration");
    return (UOptionActorCentaurRepositionTurnTargetConsideration*)res;
}
