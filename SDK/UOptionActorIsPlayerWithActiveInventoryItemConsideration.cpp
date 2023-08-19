#include "UOptionActorIsPlayerWithActiveInventoryItemConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPlayerWithActiveInventoryItemConsideration* UOptionActorIsPlayerWithActiveInventoryItemConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPlayerWithActiveInventoryItemConsideration");
    return (UOptionActorIsPlayerWithActiveInventoryItemConsideration*)res;
}
