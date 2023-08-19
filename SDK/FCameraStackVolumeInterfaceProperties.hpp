#pragma once
#include <cstdint>
class UCameraStackVolumePreset;
#pragma pack(push, 1)
struct FCameraStackVolumeInterfaceProperties {
    UCameraStackVolumePreset* VolumePreset; // 0x0
    int32_t Priority; // 0x8
    float weight; // 0xc
    float BlendRadius; // 0x10
    float MaxCrossBlendSpeed; // 0x14
}; // Size: 0x18
#pragma pack(pop)
