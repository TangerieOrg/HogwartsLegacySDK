#include "ULightClippingComponent.hpp"
#include "USceneComponent.hpp"
ULightClippingComponent* ULightClippingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightClippingComponent");
    return (ULightClippingComponent*)res;
}
