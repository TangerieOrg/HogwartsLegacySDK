#include "UOptionActorCombatTetherConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorCombatTetherConsideration* UOptionActorCombatTetherConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorCombatTetherConsideration");
    return (UOptionActorCombatTetherConsideration*)res;
}
