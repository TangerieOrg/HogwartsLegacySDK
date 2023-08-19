#include "FDynamicLightAdaptationSettings.hpp"
#include "UAnimatedLightClusterComponent.hpp"
#include "ULightAdaptationComponent.hpp"
ULightAdaptationComponent* ULightAdaptationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.LightAdaptationComponent");
    return (ULightAdaptationComponent*)res;
}
