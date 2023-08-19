#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "ULakeParameterGeneratorBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class ULakeParameterGenerator : public ULakeParameterGeneratorBase {
public:
    TArray<UMaterialInterface*> WaterMaterials; // 0x28
    float WindWeight; // 0x38
    bool bUseFixedWindVelocity; // 0x3c
    char pad_3d[0x3];
    FVector2D FixedWindVelocity; // 0x40
    float WindCoastFalloffDistance; // 0x48
    float Choppiness; // 0x4c
    float WaveGravity; // 0x50
    int32_t RandomSeed; // 0x54
    float ShallowWaterAttenuation; // 0x58
    float WaveGravityVariance; // 0x5c
    static ULakeParameterGenerator* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
