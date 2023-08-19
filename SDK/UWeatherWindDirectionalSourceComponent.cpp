#include "FWindParameters.hpp"
#include "FWindParametersSampleTime.hpp"
#include "UWeatherWindDirectionalSourceComponent.hpp"
#include "UWeatherWindDirectionalSourceInstantComponent.hpp"
UWeatherWindDirectionalSourceComponent* UWeatherWindDirectionalSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherWindDirectionalSourceComponent");
    return (UWeatherWindDirectionalSourceComponent*)res;
}
