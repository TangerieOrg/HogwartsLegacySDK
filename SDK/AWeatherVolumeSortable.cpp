#include "AWeatherVolume.hpp"
#include "AWeatherVolumeSortable.hpp"
AWeatherVolumeSortable* AWeatherVolumeSortable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherVolumeSortable");
    return (AWeatherVolumeSortable*)res;
}
