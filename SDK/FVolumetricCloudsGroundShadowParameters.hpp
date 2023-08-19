#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsGroundShadowParameters {
    float ShadowStrength; // 0x0
    float CutOutDistanceMeters; // 0x4
    float CutOutFadeDistanceMeters; // 0x8
}; // Size: 0xc
#pragma pack(pop)
