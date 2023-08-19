#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedGreaterThanMS.hpp"
UWorldFXRuleWeatherWindSpeedGreaterThanMS* UWorldFXRuleWeatherWindSpeedGreaterThanMS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedGreaterThanMS");
    return (UWorldFXRuleWeatherWindSpeedGreaterThanMS*)res;
}
