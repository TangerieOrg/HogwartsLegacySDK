#include "FVolumetricCloudsPresetParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#include "UGlobalLightingBlendableWeatherClouds.hpp"
UGlobalLightingBlendableWeatherClouds* UGlobalLightingBlendableWeatherClouds::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.GlobalLightingBlendableWeatherClouds");
    return (UGlobalLightingBlendableWeatherClouds*)res;
}
