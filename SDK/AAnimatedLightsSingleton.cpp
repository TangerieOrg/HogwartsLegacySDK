#include "AActor.hpp"
#include "AAnimatedLightsSingleton.hpp"
#include "UAnimatedLightWorldData.hpp"
AAnimatedLightsSingleton* AAnimatedLightsSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightsSingleton");
    return (AAnimatedLightsSingleton*)res;
}
