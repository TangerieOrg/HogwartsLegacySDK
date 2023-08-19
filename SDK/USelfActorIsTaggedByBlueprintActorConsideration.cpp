#include "FBlackboardKeySelector.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfActorIsTaggedByBlueprintActorConsideration.hpp"
USelfActorIsTaggedByBlueprintActorConsideration* USelfActorIsTaggedByBlueprintActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorIsTaggedByBlueprintActorConsideration");
    return (USelfActorIsTaggedByBlueprintActorConsideration*)res;
}
