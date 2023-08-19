#include "AWeatherDisableVolume.hpp"
#include "AWeatherVolume.hpp"
AWeatherDisableVolume* AWeatherDisableVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDisableVolume");
    return (AWeatherDisableVolume*)res;
}
