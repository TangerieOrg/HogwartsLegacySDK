#include "AFullScreenWeatherDecalActor.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#include "UWeatherDecalTracker.hpp"
UWeatherDecalTracker* UWeatherDecalTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherDecalTracker");
    return (UWeatherDecalTracker*)res;
}
