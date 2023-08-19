#include "UWorldFXRule.hpp"
#include "UWorldFXRulePrecipitation.hpp"
UWorldFXRulePrecipitation* UWorldFXRulePrecipitation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRulePrecipitation");
    return (UWorldFXRulePrecipitation*)res;
}
