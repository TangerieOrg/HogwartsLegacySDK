#include "UQualifierConsideration.hpp"
#include "USelfTimeSinceActionStartConsideration.hpp"
USelfTimeSinceActionStartConsideration* USelfTimeSinceActionStartConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfTimeSinceActionStartConsideration");
    return (USelfTimeSinceActionStartConsideration*)res;
}
