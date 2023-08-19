#include "FExpHeightFogParameters.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#include "UGlobalLightingBlendableWeatherFog.hpp"
UGlobalLightingBlendableWeatherFog* UGlobalLightingBlendableWeatherFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.GlobalLightingBlendableWeatherFog");
    return (UGlobalLightingBlendableWeatherFog*)res;
}
