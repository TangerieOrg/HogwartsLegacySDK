#include "UOptionActorIsPlayerCharacterConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsPlayerCharacterConsideration* UOptionActorIsPlayerCharacterConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsPlayerCharacterConsideration");
    return (UOptionActorIsPlayerCharacterConsideration*)res;
}
