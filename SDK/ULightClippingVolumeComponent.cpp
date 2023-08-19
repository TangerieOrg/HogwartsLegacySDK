#include "ULightClippingComponent.hpp"
#include "ULightClippingVolumeComponent.hpp"
ULightClippingVolumeComponent* ULightClippingVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingVolumeComponent");
    return (ULightClippingVolumeComponent*)res;
}
