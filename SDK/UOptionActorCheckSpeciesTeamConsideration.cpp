#include "UOptionActorCheckSpeciesTeamConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorCheckSpeciesTeamConsideration* UOptionActorCheckSpeciesTeamConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorCheckSpeciesTeamConsideration");
    return (UOptionActorCheckSpeciesTeamConsideration*)res;
}
