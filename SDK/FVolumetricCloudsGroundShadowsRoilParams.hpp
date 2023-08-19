#pragma once
#include <cstdint>
class UTexture;
#pragma pack(push, 1)
struct FVolumetricCloudsGroundShadowsRoilParams {
    UTexture* Texture; // 0x0
    float OnOff; // 0x8
    float Strength; // 0xc
    float WhispStrength; // 0x10
    float WhispStartAlpha; // 0x14
    float SpeedFactor; // 0x18
    float SpeedPerpFactor; // 0x1c
    float Tiling; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
