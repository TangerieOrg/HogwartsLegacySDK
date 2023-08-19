#include "UQualifierConsideration.hpp"
#include "USelfTimeSinceActionEndConsideration.hpp"
USelfTimeSinceActionEndConsideration* USelfTimeSinceActionEndConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfTimeSinceActionEndConsideration");
    return (USelfTimeSinceActionEndConsideration*)res;
}
