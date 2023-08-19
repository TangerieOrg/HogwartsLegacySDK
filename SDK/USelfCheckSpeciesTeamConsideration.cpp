#include "UQualifierConsideration.hpp"
#include "USelfCheckSpeciesTeamConsideration.hpp"
USelfCheckSpeciesTeamConsideration* USelfCheckSpeciesTeamConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCheckSpeciesTeamConsideration");
    return (USelfCheckSpeciesTeamConsideration*)res;
}
