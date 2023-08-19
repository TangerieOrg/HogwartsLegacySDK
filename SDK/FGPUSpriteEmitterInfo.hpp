#pragma once
#include <cstdint>
#include "EParticleAxisLock.hpp"
#include "EParticleCollisionMode\Type.hpp"
#include "EParticleScreenAlignment.hpp"
#include "FFloatDistribution.hpp"
#include "FGPUSpriteLocalVectorFieldInfo.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UParticleModuleRequired;
class UParticleModuleSpawn;
class UParticleModuleSpawnPerUnit;
class UParticleModule;
#pragma pack(push, 1)
struct FGPUSpriteEmitterInfo {
    UParticleModuleRequired* RequiredModule; // 0x0
    UParticleModuleSpawn* SpawnModule; // 0x8
    UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
    TArray<UParticleModule*> SpawnModules; // 0x18
    char pad_28[0x8];
    FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
    FFloatDistribution VectorFieldScale; // 0xa0
    FFloatDistribution DragCoefficient; // 0xc0
    FFloatDistribution PointAttractorStrength; // 0xe0
    FFloatDistribution Resilience; // 0x100
    FVector ConstantAcceleration; // 0x120
    FVector PointAttractorPosition; // 0x12c
    float PointAttractorRadiusSq; // 0x138
    FVector OrbitOffsetBase; // 0x13c
    FVector OrbitOffsetRange; // 0x148
    FVector2D InvMaxSize; // 0x154
    float InvRotationRateScale; // 0x15c
    float MaxLifeTime; // 0x160
    int32_t MaxParticleCount; // 0x164
    EParticleScreenAlignment ScreenAlignment; // 0x168
    EParticleAxisLock LockAxisFlag; // 0x169
    char pad_16a[0x2];
    uint8_t bEnableCollision : 1; // 0x16c
    uint8_t pad_bitfield_16c_1 : 7;
    char pad_16d[0x3];
    EParticleCollisionMode::Type CollisionMode; // 0x170
    char pad_171[0x3];
    uint8_t bRemoveHMDRoll : 1; // 0x174
    uint8_t pad_bitfield_174_1 : 7;
    char pad_175[0x3];
    float MinFacingCameraBlendDistance; // 0x178
    float MaxFacingCameraBlendDistance; // 0x17c
    FRawDistributionVector DynamicColor; // 0x180
    FRawDistributionFloat DynamicAlpha; // 0x1c8
    FRawDistributionVector DynamicColorScale; // 0x1f8
    FRawDistributionFloat DynamicAlphaScale; // 0x240
    char pad_270[0x10];
}; // Size: 0x280
#pragma pack(pop)
