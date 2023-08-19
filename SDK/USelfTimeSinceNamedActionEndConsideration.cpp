#include "UQualifierConsideration.hpp"
#include "USelfTimeSinceNamedActionEndConsideration.hpp"
USelfTimeSinceNamedActionEndConsideration* USelfTimeSinceNamedActionEndConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfTimeSinceNamedActionEndConsideration");
    return (USelfTimeSinceNamedActionEndConsideration*)res;
}
