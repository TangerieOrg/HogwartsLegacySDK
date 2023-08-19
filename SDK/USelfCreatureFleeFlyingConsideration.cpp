#include "ECreatureFleeFlyingOption.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfCreatureFleeFlyingConsideration.hpp"
USelfCreatureFleeFlyingConsideration* USelfCreatureFleeFlyingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureFleeFlyingConsideration");
    return (USelfCreatureFleeFlyingConsideration*)res;
}
