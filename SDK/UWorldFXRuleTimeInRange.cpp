#include "FTimeInput.hpp"
#include "UWorldFXRuleTime.hpp"
#include "UWorldFXRuleTimeInRange.hpp"
UWorldFXRuleTimeInRange* UWorldFXRuleTimeInRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleTimeInRange");
    return (UWorldFXRuleTimeInRange*)res;
}
