#include "URenderSettingsCustomBlendDomain.hpp"
#include "UVegetationInteractionCameraFadeSetup.hpp"
#include "UVegetationInteractionComponentBiped.hpp"
#include "UVegetationInteractionComponentPlayer.hpp"
UVegetationInteractionComponentPlayer* UVegetationInteractionComponentPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponentPlayer");
    return (UVegetationInteractionComponentPlayer*)res;
}
