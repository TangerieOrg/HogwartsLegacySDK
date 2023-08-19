#include "UChainNamedActionActivityBranchConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainNamedActionActivityBranchConsideration* UChainNamedActionActivityBranchConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainNamedActionActivityBranchConsideration");
    return (UChainNamedActionActivityBranchConsideration*)res;
}
