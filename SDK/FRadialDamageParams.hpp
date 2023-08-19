#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRadialDamageParams {
    float BaseDamage; // 0x0
    float MinimumDamage; // 0x4
    float InnerRadius; // 0x8
    float OuterRadius; // 0xc
    float DamageFalloff; // 0x10
}; // Size: 0x14
#pragma pack(pop)
