#include "UWorldFXRule.hpp"
#include "UWorldFXRuleWeatherWindSpeed.hpp"
UWorldFXRuleWeatherWindSpeed* UWorldFXRuleWeatherWindSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldFXRuleWeatherWindSpeed");
    return (UWorldFXRuleWeatherWindSpeed*)res;
}
