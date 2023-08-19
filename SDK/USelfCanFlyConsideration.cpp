#include "UQualifierConsideration.hpp"
#include "USelfCanFlyConsideration.hpp"
USelfCanFlyConsideration* USelfCanFlyConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanFlyConsideration");
    return (USelfCanFlyConsideration*)res;
}
