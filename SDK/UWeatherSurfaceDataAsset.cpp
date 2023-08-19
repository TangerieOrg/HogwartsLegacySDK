#include "FWeatherDecalSetup.hpp"
#include "FWeatherStormSurfaceParams.hpp"
#include "FWeatherSurfaceCharacterFXSettings.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UWeatherSurfaceDataAsset.hpp"
UWeatherSurfaceDataAsset* UWeatherSurfaceDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceDataAsset");
    return (UWeatherSurfaceDataAsset*)res;
}
