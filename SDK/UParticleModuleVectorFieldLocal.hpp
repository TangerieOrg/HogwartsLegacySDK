#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UParticleModuleVectorFieldBase.hpp"
class UVectorField;
#pragma pack(push, 1)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase {
public:
    UVectorField* VectorField; // 0x30
    FVector RelativeTranslation; // 0x38
    FRotator RelativeRotation; // 0x44
    FVector RelativeScale3D; // 0x50
    float Intensity; // 0x5c
    float Tightness; // 0x60
    uint8_t bIgnoreComponentTransform : 1; // 0x64
    uint8_t bTileX : 1; // 0x64
    uint8_t bTileY : 1; // 0x64
    uint8_t bTileZ : 1; // 0x64
    uint8_t bUseFixDT : 1; // 0x64
    uint8_t pad_bitfield_64_5 : 3;
    char pad_65[0x3];
    static UParticleModuleVectorFieldLocal* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
