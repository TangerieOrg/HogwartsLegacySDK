#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FShadowSprintImpulseData {
    float Impulse; // 0x0
    float MaxSpeed; // 0x4
    float MinDamping; // 0x8
    float MaxDamping; // 0xc
    float DampingWhenNotMoving; // 0x10
}; // Size: 0x14
#pragma pack(pop)
