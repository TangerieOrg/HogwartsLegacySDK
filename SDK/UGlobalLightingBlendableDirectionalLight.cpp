#include "EGlobalLightingBlendableInputType.hpp"
#include "UDirectionalLightDirection.hpp"
#include "UDirectionalLightParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableDirectionalLight.hpp"
UGlobalLightingBlendableDirectionalLight* UGlobalLightingBlendableDirectionalLight::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableDirectionalLight");
    return (UGlobalLightingBlendableDirectionalLight*)res;
}
