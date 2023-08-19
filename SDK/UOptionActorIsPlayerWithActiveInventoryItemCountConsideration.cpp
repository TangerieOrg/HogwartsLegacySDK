#include "UOptionActorIsPlayerWithActiveInventoryItemCountConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPlayerWithActiveInventoryItemCountConsideration* UOptionActorIsPlayerWithActiveInventoryItemCountConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPlayerWithActiveInventoryItemCountConsideration");
    return (UOptionActorIsPlayerWithActiveInventoryItemCountConsideration*)res;
}
