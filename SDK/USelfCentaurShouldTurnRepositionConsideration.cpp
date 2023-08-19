#include "UQualifierConsideration.hpp"
#include "USelfCentaurShouldTurnRepositionConsideration.hpp"
USelfCentaurShouldTurnRepositionConsideration* USelfCentaurShouldTurnRepositionConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCentaurShouldTurnRepositionConsideration");
    return (USelfCentaurShouldTurnRepositionConsideration*)res;
}
