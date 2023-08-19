#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FTransform.hpp"
class UVectorField;
#pragma pack(push, 1)
struct FGPUSpriteLocalVectorFieldInfo {
    UVectorField* Field; // 0x0
    char pad_8[0x8];
    FTransform Transform; // 0x10
    FRotator MinInitialRotation; // 0x40
    FRotator MaxInitialRotation; // 0x4c
    FRotator RotationRate; // 0x58
    float Intensity; // 0x64
    float Tightness; // 0x68
    uint8_t bIgnoreComponentTransform : 1; // 0x6c
    uint8_t bTileX : 1; // 0x6c
    uint8_t bTileY : 1; // 0x6c
    uint8_t bTileZ : 1; // 0x6c
    uint8_t bUseFixDT : 1; // 0x6c
    uint8_t pad_bitfield_6c_5 : 3;
    char pad_6d[0x3];
}; // Size: 0x70
#pragma pack(pop)
