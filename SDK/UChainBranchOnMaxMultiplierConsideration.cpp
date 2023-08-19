#include "UChainBranchOnMaxMultiplierConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainBranchOnMaxMultiplierConsideration* UChainBranchOnMaxMultiplierConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainBranchOnMaxMultiplierConsideration");
    return (UChainBranchOnMaxMultiplierConsideration*)res;
}
