#pragma once
#include <cstdint>
#include "UVegetationInteractionComponentBiped.hpp"
class UVegetationInteractionCameraFadeSetup;
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UVegetationInteractionComponentPlayer : public UVegetationInteractionComponentBiped {
public:
    UVegetationInteractionCameraFadeSetup* CameraFadeSetup; // 0x140
    URenderSettingsCustomBlendDomain* CameraFadeStrengthBlendDomain; // 0x148
    static UVegetationInteractionComponentPlayer* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
