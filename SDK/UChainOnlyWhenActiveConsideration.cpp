#include "UChainOnlyWhenActiveConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainOnlyWhenActiveConsideration* UChainOnlyWhenActiveConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainOnlyWhenActiveConsideration");
    return (UChainOnlyWhenActiveConsideration*)res;
}
