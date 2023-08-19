#include "FWeatherDecalSetup.hpp"
#include "FWeatherStormSurfaceParams.hpp"
#include "UClass.hpp"
#include "UStormWeatherDecal.hpp"
#include "UStormWeatherDecalDefault.hpp"
#include "UWeatherDecalSettings.hpp"
#include "UWeatherDecalUpdate.hpp"
UStormWeatherDecalDefault* UStormWeatherDecalDefault::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.StormWeatherDecalDefault");
    return (UStormWeatherDecalDefault*)res;
}
