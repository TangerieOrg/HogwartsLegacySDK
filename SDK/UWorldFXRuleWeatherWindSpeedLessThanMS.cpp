#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedLessThanMS.hpp"
UWorldFXRuleWeatherWindSpeedLessThanMS* UWorldFXRuleWeatherWindSpeedLessThanMS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedLessThanMS");
    return (UWorldFXRuleWeatherWindSpeedLessThanMS*)res;
}
