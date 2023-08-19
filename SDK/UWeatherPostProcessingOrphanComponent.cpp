#include "FPostProcessSettings.hpp"
#include "UWeatherOrphanComponent.hpp"
#include "UWeatherPostProcessingOrphanComponent.hpp"
UWeatherPostProcessingOrphanComponent* UWeatherPostProcessingOrphanComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherPostProcessingOrphanComponent");
    return (UWeatherPostProcessingOrphanComponent*)res;
}
