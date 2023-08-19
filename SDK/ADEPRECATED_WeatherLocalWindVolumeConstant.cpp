#include "ADEPRECATED_WeatherLocalWindVolume.hpp"
#include "ADEPRECATED_WeatherLocalWindVolumeConstant.hpp"
#include "FWindParametersInstant.hpp"
ADEPRECATED_WeatherLocalWindVolumeConstant* ADEPRECATED_WeatherLocalWindVolumeConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherLocalWindVolumeConstant");
    return (ADEPRECATED_WeatherLocalWindVolumeConstant*)res;
}
