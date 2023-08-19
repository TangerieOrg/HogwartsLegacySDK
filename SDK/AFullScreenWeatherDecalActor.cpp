#include "ADecalActor.hpp"
#include "AFullScreenWeatherDecalActor.hpp"
AFullScreenWeatherDecalActor* AFullScreenWeatherDecalActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.FullScreenWeatherDecalActor");
    return (AFullScreenWeatherDecalActor*)res;
}
