#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "ADEPRECATED_WeatherLocalWindVolumeParameters.hpp"
#include "FWindParameters.hpp"
ADEPRECATED_WeatherLocalWindVolumeParameters* ADEPRECATED_WeatherLocalWindVolumeParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumeParameters");
    return (ADEPRECATED_WeatherLocalWindVolumeParameters*)res;
}
