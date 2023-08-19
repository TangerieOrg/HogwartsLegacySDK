#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "ADEPRECATED_WeatherLocalWindVolumePreset.hpp"
#include "FWindDefinitionName.hpp"
ADEPRECATED_WeatherLocalWindVolumePreset* ADEPRECATED_WeatherLocalWindVolumePreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumePreset");
    return (ADEPRECATED_WeatherLocalWindVolumePreset*)res;
}
