#include "EDayNightTweakDirectionalLightMode.hpp"
#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightShadowsOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#include "UGlobalLightingBlendableTweakDirectionalLight.hpp"
UGlobalLightingBlendableTweakDirectionalLight* UGlobalLightingBlendableTweakDirectionalLight::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalLightingBlendableTweakDirectionalLight");
    return (UGlobalLightingBlendableTweakDirectionalLight*)res;
}
