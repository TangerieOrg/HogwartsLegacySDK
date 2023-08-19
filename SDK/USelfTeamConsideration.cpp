#include "UQualifierConsideration.hpp"
#include "USelfTeamConsideration.hpp"
USelfTeamConsideration* USelfTeamConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfTeamConsideration");
    return (USelfTeamConsideration*)res;
}
