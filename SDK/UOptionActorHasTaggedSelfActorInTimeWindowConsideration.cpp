#include "UOptionActorHasTaggedSelfActorInTimeWindowConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorHasTaggedSelfActorInTimeWindowConsideration* UOptionActorHasTaggedSelfActorInTimeWindowConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorHasTaggedSelfActorInTimeWindowConsideration");
    return (UOptionActorHasTaggedSelfActorInTimeWindowConsideration*)res;
}
