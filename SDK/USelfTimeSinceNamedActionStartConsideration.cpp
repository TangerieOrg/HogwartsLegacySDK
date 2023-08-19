#include "UQualifierConsideration.hpp"
#include "USelfTimeSinceNamedActionStartConsideration.hpp"
USelfTimeSinceNamedActionStartConsideration* USelfTimeSinceNamedActionStartConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfTimeSinceNamedActionStartConsideration");
    return (USelfTimeSinceNamedActionStartConsideration*)res;
}
