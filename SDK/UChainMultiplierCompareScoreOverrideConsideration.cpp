#include "FScoreOverrideReturnConfiguration.hpp"
#include "UChainMultiplierCompareScoreOverrideConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainMultiplierCompareScoreOverrideConsideration* UChainMultiplierCompareScoreOverrideConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainMultiplierCompareScoreOverrideConsideration");
    return (UChainMultiplierCompareScoreOverrideConsideration*)res;
}
