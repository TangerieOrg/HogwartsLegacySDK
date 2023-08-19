#include "UQualifierConsideration.hpp"
#include "USelfCanUsePerchesConsideration.hpp"
USelfCanUsePerchesConsideration* USelfCanUsePerchesConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanUsePerchesConsideration");
    return (USelfCanUsePerchesConsideration*)res;
}
