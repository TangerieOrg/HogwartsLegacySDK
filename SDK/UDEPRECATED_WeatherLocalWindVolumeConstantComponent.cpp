#include "FWindParametersInstant.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#include "UDEPRECATED_WeatherLocalWindVolumeConstantComponent.hpp"
UDEPRECATED_WeatherLocalWindVolumeConstantComponent* UDEPRECATED_WeatherLocalWindVolumeConstantComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumeConstantComponent");
    return (UDEPRECATED_WeatherLocalWindVolumeConstantComponent*)res;
}
