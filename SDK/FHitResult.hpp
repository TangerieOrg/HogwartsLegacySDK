#pragma once
#include <cstdint>
#include "FVector_NetQuantize.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#pragma pack(push, 1)
struct FHitResult {
    int32_t FaceIndex; // 0x0
    float Time; // 0x4
    float Distance; // 0x8
    FVector_NetQuantize Location; // 0xc
    FVector_NetQuantize ImpactPoint; // 0x18
    FVector_NetQuantizeNormal Normal; // 0x24
    FVector_NetQuantizeNormal ImpactNormal; // 0x30
    FVector_NetQuantize TraceStart; // 0x3c
    FVector_NetQuantize TraceEnd; // 0x48
    float PenetrationDepth; // 0x54
    int32_t Item; // 0x58
    uint8_t ElementIndex; // 0x5c
    uint8_t bBlockingHit : 1; // 0x5d
    uint8_t bStartPenetrating : 1; // 0x5d
    uint8_t pad_bitfield_5d_2 : 6;
    char pad_5e[0x1a];
    FName BoneName; // 0x78
    FName MyBoneName; // 0x80
}; // Size: 0x88
#pragma pack(pop)
