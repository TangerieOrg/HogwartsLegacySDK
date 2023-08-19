#include "UAnimatedLightParametersComponentAuto.hpp"
#include "UAnimatedLightParametersComponentBase.hpp"
#include "ULightComponent.hpp"
UAnimatedLightParametersComponentAuto* UAnimatedLightParametersComponentAuto::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightParametersComponentAuto");
    return (UAnimatedLightParametersComponentAuto*)res;
}
