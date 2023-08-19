#include "FWeatherDecalSetup.hpp"
#include "UWeatherDecalCondition.hpp"
#include "UWeatherDecalSettings.hpp"
#include "UWeatherDecalUpdate.hpp"
#include "UWorldWeatherDecal.hpp"
#include "UWorldWeatherDecalDefault.hpp"
UWorldWeatherDecalDefault* UWorldWeatherDecalDefault::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WorldWeatherDecalDefault");
    return (UWorldWeatherDecalDefault*)res;
}
