#include "UOptionActorIsAliveConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsAliveConsideration* UOptionActorIsAliveConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsAliveConsideration");
    return (UOptionActorIsAliveConsideration*)res;
}
