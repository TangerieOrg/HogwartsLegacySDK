#include "FWindParametersInstant.hpp"
#include "UWeatherWindDirectionalSourceComponentBase.hpp"
#include "UWeatherWindDirectionalSourceInstantComponent.hpp"
#include "UWindGustController.hpp"
UWeatherWindDirectionalSourceInstantComponent* UWeatherWindDirectionalSourceInstantComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherWindDirectionalSourceInstantComponent");
    return (UWeatherWindDirectionalSourceInstantComponent*)res;
}
