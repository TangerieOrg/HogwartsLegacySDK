#include "EBeaufortWindScale.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedGreaterThan.hpp"
UWorldFXRuleWeatherWindSpeedGreaterThan* UWorldFXRuleWeatherWindSpeedGreaterThan::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedGreaterThan");
    return (UWorldFXRuleWeatherWindSpeedGreaterThan*)res;
}
