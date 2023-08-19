#pragma once
#include <cstdint>
#include "FGerstnerWave.hpp"
#include "FVector2D.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FLakeParameters {
    TArray<UMaterialInterface*> WaterMaterials; // 0x0
    float WindWeight; // 0x10
    bool bUseFixedWindVelocity; // 0x14
    char pad_15[0x3];
    FVector2D FixedWindVelocity; // 0x18
    float WindCoastFalloffDistance; // 0x20
    float Choppiness; // 0x24
    float WaveGravity; // 0x28
    float ShallowWaterAttenuation; // 0x2c
    TArray<FGerstnerWave> GerstnerWaves; // 0x30
}; // Size: 0x40
#pragma pack(pop)
