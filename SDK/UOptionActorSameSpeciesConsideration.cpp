#include "UOptionActorSameSpeciesConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorSameSpeciesConsideration* UOptionActorSameSpeciesConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorSameSpeciesConsideration");
    return (UOptionActorSameSpeciesConsideration*)res;
}
