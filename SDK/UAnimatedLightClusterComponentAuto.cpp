#include "UAnimatedLightClusterComponent.hpp"
#include "UAnimatedLightClusterComponentAuto.hpp"
UAnimatedLightClusterComponentAuto* UAnimatedLightClusterComponentAuto::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightClusterComponentAuto");
    return (UAnimatedLightClusterComponentAuto*)res;
}
