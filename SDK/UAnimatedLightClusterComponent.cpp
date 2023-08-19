#include "UAnimatedLightClusterComponent.hpp"
#include "UAnimatedLightsClusterSettings.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAnimatedLightClusterComponent* UAnimatedLightClusterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightClusterComponent");
    return (UAnimatedLightClusterComponent*)res;
}
void UAnimatedLightClusterComponent::RebuildLights() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightClusterComponent.RebuildLights"));
    struct Params_RebuildLights {
    }; // Size: 0x0
    Params_RebuildLights params{};
    ProcessEvent(func, &params);
}
