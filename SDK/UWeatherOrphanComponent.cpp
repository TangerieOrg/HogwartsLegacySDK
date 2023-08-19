#include "FBlendDomain.hpp"
#include "UActorComponent.hpp"
#include "UWeatherOrphanComponent.hpp"
UWeatherOrphanComponent* UWeatherOrphanComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherOrphanComponent");
    return (UWeatherOrphanComponent*)res;
}
