#include "UChainBonusAtMultiplierThresholdConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainBonusAtMultiplierThresholdConsideration* UChainBonusAtMultiplierThresholdConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainBonusAtMultiplierThresholdConsideration");
    return (UChainBonusAtMultiplierThresholdConsideration*)res;
}
