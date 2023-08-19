#pragma once
#include <cstdint>
class ACullDistanceVolume;
#pragma pack(push, 1)
struct FCameraHeightRenderSettingsCullVolume {
    ACullDistanceVolume* CullDistanceVolume; // 0x0
    float ApplyAtBlendPercent; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
