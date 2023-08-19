#include "EBeaufortWindScale.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedLessThan.hpp"
UWorldFXRuleWeatherWindSpeedLessThan* UWorldFXRuleWeatherWindSpeedLessThan::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedLessThan");
    return (UWorldFXRuleWeatherWindSpeedLessThan*)res;
}
