#include "AVolume.hpp"
#include "AWeatherVolume.hpp"
AWeatherVolume* AWeatherVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherVolume");
    return (AWeatherVolume*)res;
}
