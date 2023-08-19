#include "UOptionActorIsTaggedBySelfActorConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsTaggedBySelfActorConsideration* UOptionActorIsTaggedBySelfActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsTaggedBySelfActorConsideration");
    return (UOptionActorIsTaggedBySelfActorConsideration*)res;
}
