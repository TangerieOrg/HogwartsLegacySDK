#include "AWeatherAnimationBlueprint.hpp"
#include "AWeatherCoverageBlueprint.hpp"
#include "FWeatherStormState.hpp"
#include "UStormWeatherDecalTracker.hpp"
#include "UWeatherDecalTracker.hpp"
UStormWeatherDecalTracker* UStormWeatherDecalTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.StormWeatherDecalTracker");
    return (UStormWeatherDecalTracker*)res;
}
