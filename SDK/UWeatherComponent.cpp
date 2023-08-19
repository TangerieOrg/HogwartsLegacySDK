#include "AActor.hpp"
#include "USceneComponent.hpp"
#include "UWeatherComponent.hpp"
UWeatherComponent* UWeatherComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WeatherComponent");
    return (UWeatherComponent*)res;
}
