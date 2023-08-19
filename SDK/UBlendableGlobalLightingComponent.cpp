#include "EGlobalLightingFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UBlendableGlobalLightingComponent.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "USceneComponent.hpp"
UBlendableGlobalLightingComponent* UBlendableGlobalLightingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingComponent");
    return (UBlendableGlobalLightingComponent*)res;
}
