#include "UGlobalLightingBlendable.hpp"
#include "UWeatherGlobalLightingBlendableOrphanComponent.hpp"
#include "UWeatherOrphanComponent.hpp"
UWeatherGlobalLightingBlendableOrphanComponent* UWeatherGlobalLightingBlendableOrphanComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherGlobalLightingBlendableOrphanComponent");
    return (UWeatherGlobalLightingBlendableOrphanComponent*)res;
}
