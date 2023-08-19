#pragma once
#include <cstdint>
#include "FVegetationInteractionCameraFade.hpp"
#include "UDataAsset.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UVegetationInteractionCameraFadeSetup : public UDataAsset {
public:
    FVegetationInteractionCameraFade Normal; // 0x30
    FVegetationInteractionCameraFade Aiming; // 0x68
    URenderSettingsCustomBlendDomain* StrengthBlendDomain; // 0xa0
    bool bAimBlend; // 0xa8
    char pad_a9[0x7];
    static UVegetationInteractionCameraFadeSetup* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
