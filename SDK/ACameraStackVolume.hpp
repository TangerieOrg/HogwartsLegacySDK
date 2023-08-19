#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FCameraStackVolumeInterfaceProperties.hpp"
class UCameraStackVolumeComponent;
class UCameraStackVolumePreset;
#pragma pack(push, 1)
class ACameraStackVolume : public AVolume {
public:
    char pad_280[0x8];
    FCameraStackVolumeInterfaceProperties VolumeSettings; // 0x288
    UCameraStackVolumeComponent* VolumeComponent; // 0x2a0
    UCameraStackVolumePreset* VolumePreset; // 0x2a8
    int32_t Priority; // 0x2b0
    float weight; // 0x2b4
    float BlendRadius; // 0x2b8
    float MaxCrossBlendSpeed; // 0x2bc
    static ACameraStackVolume* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
