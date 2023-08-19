#include "FVegetationInteractionCameraFade.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "UVegetationInteractionCameraFadeSetup.hpp"
UVegetationInteractionCameraFadeSetup* UVegetationInteractionCameraFadeSetup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionCameraFadeSetup");
    return (UVegetationInteractionCameraFadeSetup*)res;
}
