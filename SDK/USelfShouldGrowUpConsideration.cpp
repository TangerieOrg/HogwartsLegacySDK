#include "UQualifierConsideration.hpp"
#include "USelfShouldGrowUpConsideration.hpp"
USelfShouldGrowUpConsideration* USelfShouldGrowUpConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfShouldGrowUpConsideration");
    return (USelfShouldGrowUpConsideration*)res;
}
