#include "UAnimatedLightParametersComponentBase.hpp"
#include "USceneComponent.hpp"
UAnimatedLightParametersComponentBase* UAnimatedLightParametersComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightParametersComponentBase");
    return (UAnimatedLightParametersComponentBase*)res;
}
