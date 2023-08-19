#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "EEnvOverlapShape\Type.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEnvOverlapData {
    float ExtentX; // 0x0
    float ExtentY; // 0x4
    float ExtentZ; // 0x8
    FVector ShapeOffset; // 0xc
    ECollisionChannel OverlapChannel; // 0x18
    EEnvOverlapShape::Type OverlapShape; // 0x19
    char pad_1a[0x2];
    uint8_t bOnlyBlockingHits : 1; // 0x1c
    uint8_t bOverlapComplex : 1; // 0x1c
    uint8_t bSkipOverlapQuerier : 1; // 0x1c
    uint8_t pad_bitfield_1c_3 : 5;
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
