#include "UAnimatedLightComponentBase.hpp"
#include "UAnimatedLightComponentLean.hpp"
#include "UAnimatedLightSettingsAsset.hpp"
UAnimatedLightComponentLean* UAnimatedLightComponentLean::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightComponentLean");
    return (UAnimatedLightComponentLean*)res;
}
