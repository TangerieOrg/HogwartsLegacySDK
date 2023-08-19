#include "AWeatherPresetVolume.hpp"
#include "AWeatherPresetVolumeBase.hpp"
#include "FWeatherDefinitionName.hpp"
AWeatherPresetVolume* AWeatherPresetVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherPresetVolume");
    return (AWeatherPresetVolume*)res;
}
