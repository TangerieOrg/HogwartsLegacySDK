#include "UAvaInsideVolumeLightClippingComponent.hpp"
#include "ULightClippingComponent.hpp"
UAvaInsideVolumeLightClippingComponent* UAvaInsideVolumeLightClippingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AvaInsideVolumeLightClippingComponent");
    return (UAvaInsideVolumeLightClippingComponent*)res;
}
