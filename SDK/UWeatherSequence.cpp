#include "USceneRig.hpp"
#include "UWeatherSequence.hpp"
UWeatherSequence* UWeatherSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSequence");
    return (UWeatherSequence*)res;
}
