#include "UQualifierConsideration.hpp"
#include "USelfOnlyAfterNamedActionEndConsideration.hpp"
USelfOnlyAfterNamedActionEndConsideration* USelfOnlyAfterNamedActionEndConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfOnlyAfterNamedActionEndConsideration");
    return (USelfOnlyAfterNamedActionEndConsideration*)res;
}
