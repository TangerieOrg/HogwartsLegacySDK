#include "UWorldFXRuleWeatherWindSpeed.hpp"
#include "UWorldFXRuleWeatherWindSpeedRangeMS.hpp"
UWorldFXRuleWeatherWindSpeedRangeMS* UWorldFXRuleWeatherWindSpeedRangeMS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeedRangeMS");
    return (UWorldFXRuleWeatherWindSpeedRangeMS*)res;
}
