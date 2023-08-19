#include "AWeatherSurfaceFogBase.hpp"
#include "AWeatherSurfaceFogSimple.hpp"
AWeatherSurfaceFogSimple* AWeatherSurfaceFogSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceFogSimple");
    return (AWeatherSurfaceFogSimple*)res;
}
