#include "UAnimatedLightPluginSettings.hpp"
#include "UAnimatedLightWorldData.hpp"
#include "UObject.hpp"
UAnimatedLightWorldData* UAnimatedLightWorldData::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightWorldData");
    return (UAnimatedLightWorldData*)res;
}
