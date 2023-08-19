#include "UOptionActorHasTaggedSelfActorConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorHasTaggedSelfActorConsideration* UOptionActorHasTaggedSelfActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorHasTaggedSelfActorConsideration");
    return (UOptionActorHasTaggedSelfActorConsideration*)res;
}
