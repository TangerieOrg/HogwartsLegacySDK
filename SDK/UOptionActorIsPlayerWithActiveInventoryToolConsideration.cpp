#include "UClass.hpp"
#include "UOptionActorIsPlayerWithActiveInventoryToolConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPlayerWithActiveInventoryToolConsideration* UOptionActorIsPlayerWithActiveInventoryToolConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPlayerWithActiveInventoryToolConsideration");
    return (UOptionActorIsPlayerWithActiveInventoryToolConsideration*)res;
}
