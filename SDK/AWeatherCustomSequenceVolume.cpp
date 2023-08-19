#include "AWeatherCustomSequenceVolume.hpp"
#include "AWeatherVolumeSortablePreload.hpp"
#include "FWeatherCustomSequenceName.hpp"
AWeatherCustomSequenceVolume* AWeatherCustomSequenceVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomSequenceVolume");
    return (AWeatherCustomSequenceVolume*)res;
}
