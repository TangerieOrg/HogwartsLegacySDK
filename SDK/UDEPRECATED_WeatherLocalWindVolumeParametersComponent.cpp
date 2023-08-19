#include "FWindParameters.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#include "UDEPRECATED_WeatherLocalWindVolumeParametersComponent.hpp"
UDEPRECATED_WeatherLocalWindVolumeParametersComponent* UDEPRECATED_WeatherLocalWindVolumeParametersComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumeParametersComponent");
    return (UDEPRECATED_WeatherLocalWindVolumeParametersComponent*)res;
}
