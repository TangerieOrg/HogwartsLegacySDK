#pragma once
#include <cstdint>
#include "FCameraStackVolumeInterfaceProperties.hpp"
#include "USceneComponent.hpp"
class UCameraStackVolumePreset;
#pragma pack(push, 1)
class UCameraStackVolumeComponent : public USceneComponent {
public:
    FCameraStackVolumeInterfaceProperties VolumeSettings; // 0x220
    UCameraStackVolumePreset* VolumePreset; // 0x238
    int32_t Priority; // 0x240
    float weight; // 0x244
    float BlendRadius; // 0x248
    float MaxCrossBlendSpeed; // 0x24c
    static UCameraStackVolumeComponent* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
