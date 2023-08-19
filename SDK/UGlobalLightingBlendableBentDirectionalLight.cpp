#include "FQuat.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#include "UGlobalLightingBlendableBentDirectionalLight.hpp"
UGlobalLightingBlendableBentDirectionalLight* UGlobalLightingBlendableBentDirectionalLight::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableBentDirectionalLight");
    return (UGlobalLightingBlendableBentDirectionalLight*)res;
}
