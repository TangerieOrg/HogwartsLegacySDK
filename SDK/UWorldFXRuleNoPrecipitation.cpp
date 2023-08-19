#include "UWorldFXRuleNoPrecipitation.hpp"
#include "UWorldFXRulePrecipitation.hpp"
UWorldFXRuleNoPrecipitation* UWorldFXRuleNoPrecipitation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleNoPrecipitation");
    return (UWorldFXRuleNoPrecipitation*)res;
}
