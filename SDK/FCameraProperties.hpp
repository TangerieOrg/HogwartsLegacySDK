#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCameraProperties {
    float MinDistance; // 0x0
    float MaxDistance; // 0x4
    float MinPitch; // 0x8
    float MaxPitch; // 0xc
    float minYaw; // 0x10
    float MaxYaw; // 0x14
    float minRoll; // 0x18
    float MaxRoll; // 0x1c
    float minFOV; // 0x20
    float maxFOV; // 0x24
    float BlendInTime; // 0x28
    float BlendOutTime; // 0x2c
    float horizontalOffset; // 0x30
    float verticalOffset; // 0x34
    float weight; // 0x38
    bool bSetToDefaultOnExit; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)
