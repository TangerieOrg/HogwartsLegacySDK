#include "FAnimatedLightSettings.hpp"
#include "UAnimatedLightSettingsAsset.hpp"
#include "UDataAsset.hpp"
UAnimatedLightSettingsAsset* UAnimatedLightSettingsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightSettingsAsset");
    return (UAnimatedLightSettingsAsset*)res;
}
