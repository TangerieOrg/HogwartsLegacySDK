#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableSkyLight.hpp"
#include "USkyLightParams.hpp"
UGlobalLightingBlendableSkyLight* UGlobalLightingBlendableSkyLight::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableSkyLight");
    return (UGlobalLightingBlendableSkyLight*)res;
}
