#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_InflictedDamageOverTime {
    float FromTime; // 0x0
    float ToTime; // 0x4
    float FromNPCDamageMult; // 0x8
    float FromPlayerDamageMult; // 0xc
}; // Size: 0x10
#pragma pack(pop)
