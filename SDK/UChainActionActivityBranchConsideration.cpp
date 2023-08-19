#include "UChainActionActivityBranchConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainActionActivityBranchConsideration* UChainActionActivityBranchConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainActionActivityBranchConsideration");
    return (UChainActionActivityBranchConsideration*)res;
}
