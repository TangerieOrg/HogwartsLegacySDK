#include "UQualifierConsideration.hpp"
#include "USelfIsCombatReadyConsideration.hpp"
USelfIsCombatReadyConsideration* USelfIsCombatReadyConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsCombatReadyConsideration");
    return (USelfIsCombatReadyConsideration*)res;
}
