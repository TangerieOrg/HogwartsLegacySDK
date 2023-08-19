#include "UChainOnlyWhenInactiveConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainOnlyWhenInactiveConsideration* UChainOnlyWhenInactiveConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainOnlyWhenInactiveConsideration");
    return (UChainOnlyWhenInactiveConsideration*)res;
}
