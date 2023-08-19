#include "UOptionActorIsTaggedByGroupCoordinationConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsTaggedByGroupCoordinationConsideration* UOptionActorIsTaggedByGroupCoordinationConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsTaggedByGroupCoordinationConsideration");
    return (UOptionActorIsTaggedByGroupCoordinationConsideration*)res;
}
