#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FFlyingBroomImpulseData {
    float Impulse; // 0x0
    float StartImpulse; // 0x4
    float MaxSpeed; // 0x8
    float MinDamping; // 0xc
    float MaxDamping; // 0x10
    float DampingWhenNotMoving; // 0x14
    bool bEnable; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
