#include "UWorldFXRuleNormalizedTimeInRange.hpp"
#include "UWorldFXRuleTimeInRange.hpp"
UWorldFXRuleNormalizedTimeInRange* UWorldFXRuleNormalizedTimeInRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNormalizedTimeInRange");
    return (UWorldFXRuleNormalizedTimeInRange*)res;
}
