#include "AWeatherPresetVolumeBase.hpp"
#include "AWeatherVolumeSortablePreload.hpp"
AWeatherPresetVolumeBase* AWeatherPresetVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherPresetVolumeBase");
    return (AWeatherPresetVolumeBase*)res;
}
