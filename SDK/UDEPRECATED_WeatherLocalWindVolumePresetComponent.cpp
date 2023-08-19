#include "FWindDefinitionName.hpp"
#include "UDEPRECATED_WeatherLocalWindComponent.hpp"
#include "UDEPRECATED_WeatherLocalWindVolumePresetComponent.hpp"
UDEPRECATED_WeatherLocalWindVolumePresetComponent* UDEPRECATED_WeatherLocalWindVolumePresetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumePresetComponent");
    return (UDEPRECATED_WeatherLocalWindVolumePresetComponent*)res;
}
