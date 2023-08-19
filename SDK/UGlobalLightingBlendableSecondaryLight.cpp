#include "EGlobalLightingBlendableInputType.hpp"
#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableSecondaryLight.hpp"
UGlobalLightingBlendableSecondaryLight* UGlobalLightingBlendableSecondaryLight::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableSecondaryLight");
    return (UGlobalLightingBlendableSecondaryLight*)res;
}
