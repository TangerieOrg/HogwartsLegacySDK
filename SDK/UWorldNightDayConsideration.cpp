#include "UQualifierConsideration.hpp"
#include "UWorldNightDayConsideration.hpp"
UWorldNightDayConsideration* UWorldNightDayConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.WorldNightDayConsideration");
    return (UWorldNightDayConsideration*)res;
}
