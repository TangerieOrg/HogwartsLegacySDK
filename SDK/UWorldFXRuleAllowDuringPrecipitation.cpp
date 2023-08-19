#include "UWorldFXRuleAllowDuringPrecipitation.hpp"
#include "UWorldFXRulePrecipitation.hpp"
UWorldFXRuleAllowDuringPrecipitation* UWorldFXRuleAllowDuringPrecipitation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleAllowDuringPrecipitation");
    return (UWorldFXRuleAllowDuringPrecipitation*)res;
}
