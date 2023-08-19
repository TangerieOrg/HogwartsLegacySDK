#include "FWCullingPlane.hpp"
#include "ULightCullingComponent.hpp"
#include "ULightCullingProvider.hpp"
#include "USceneComponent.hpp"
ULightCullingComponent* ULightCullingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightCullingComponent");
    return (ULightCullingComponent*)res;
}
