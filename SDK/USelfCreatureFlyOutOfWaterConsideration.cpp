#include "UQualifierConsideration.hpp"
#include "USelfCreatureFlyOutOfWaterConsideration.hpp"
USelfCreatureFlyOutOfWaterConsideration* USelfCreatureFlyOutOfWaterConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCreatureFlyOutOfWaterConsideration");
    return (USelfCreatureFlyOutOfWaterConsideration*)res;
}
