#include "EBeaufortWindScale.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedRange.hpp"
UWorldFXRuleWeatherWindSpeedRange* UWorldFXRuleWeatherWindSpeedRange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedRange");
    return (UWorldFXRuleWeatherWindSpeedRange*)res;
}
