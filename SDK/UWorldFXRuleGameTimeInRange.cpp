#include "UWorldFXRuleGameTimeInRange.hpp"
#include "UWorldFXRuleTimeInRange.hpp"
UWorldFXRuleGameTimeInRange* UWorldFXRuleGameTimeInRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleGameTimeInRange");
    return (UWorldFXRuleGameTimeInRange*)res;
}
