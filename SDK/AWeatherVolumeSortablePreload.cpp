#include "AWeatherVolumeSortable.hpp"
#include "AWeatherVolumeSortablePreload.hpp"
#include "UObject.hpp"
AWeatherVolumeSortablePreload* AWeatherVolumeSortablePreload::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherVolumeSortablePreload");
    return (AWeatherVolumeSortablePreload*)res;
}
