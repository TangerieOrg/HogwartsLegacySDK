#include "UWorldFXRuleOnlyDuringPrecipitation.hpp"
#include "UWorldFXRulePrecipitation.hpp"
UWorldFXRuleOnlyDuringPrecipitation* UWorldFXRuleOnlyDuringPrecipitation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleOnlyDuringPrecipitation");
    return (UWorldFXRuleOnlyDuringPrecipitation*)res;
}
