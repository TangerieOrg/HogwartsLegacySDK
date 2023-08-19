#include "UChainOnlyWhenNamedActionIsInactiveConsideration.hpp"
#include "UQualifierConsideration.hpp"
UChainOnlyWhenNamedActionIsInactiveConsideration* UChainOnlyWhenNamedActionIsInactiveConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.ChainOnlyWhenNamedActionIsInactiveConsideration");
    return (UChainOnlyWhenNamedActionIsInactiveConsideration*)res;
}
