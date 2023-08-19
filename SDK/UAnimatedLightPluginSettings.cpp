#include "UAnimatedLightPluginSettings.hpp"
#include "UDataAsset.hpp"
UAnimatedLightPluginSettings* UAnimatedLightPluginSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightPluginSettings");
    return (UAnimatedLightPluginSettings*)res;
}
