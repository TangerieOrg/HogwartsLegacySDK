#include "EAnimatedLightComponentNoiseType.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UAnimatedLightComponentBase.hpp"
#include "UCurveFloat.hpp"
#include "UCurveLinearColor.hpp"
UAnimatedLightComponent* UAnimatedLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightComponent");
    return (UAnimatedLightComponent*)res;
}
