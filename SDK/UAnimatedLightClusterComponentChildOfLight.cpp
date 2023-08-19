#include "UAnimatedLightClusterComponent.hpp"
#include "UAnimatedLightClusterComponentChildOfLight.hpp"
UAnimatedLightClusterComponentChildOfLight* UAnimatedLightClusterComponentChildOfLight::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightClusterComponentChildOfLight");
    return (UAnimatedLightClusterComponentChildOfLight*)res;
}
