#include "UWeatherDecal.hpp"
#include "UWorldWeatherDecal.hpp"
UWorldWeatherDecal* UWorldWeatherDecal::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WorldWeatherDecal");
    return (UWorldWeatherDecal*)res;
}
