#include "UWorldFXRuleMoonPhase.hpp"
#include "UWorldFXRuleNightDay.hpp"
UWorldFXRuleMoonPhase* UWorldFXRuleMoonPhase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleMoonPhase");
    return (UWorldFXRuleMoonPhase*)res;
}
