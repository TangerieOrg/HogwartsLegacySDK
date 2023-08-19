#pragma once
#include <cstdint>
#include "EParticleAxisLock.hpp"
#include "EParticleScreenAlignment.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FGPUSpriteResourceData {
    TArray<FColor> QuantizedColorSamples; // 0x0
    TArray<FColor> QuantizedMiscSamples; // 0x10
    TArray<FColor> QuantizedSimulationAttrSamples; // 0x20
    FVector4 ColorScale; // 0x30
    FVector4 ColorBias; // 0x40
    FVector4 MiscScale; // 0x50
    FVector4 MiscBias; // 0x60
    FVector4 SimulationAttrCurveScale; // 0x70
    FVector4 SimulationAttrCurveBias; // 0x80
    FVector4 SubImageSize; // 0x90
    FVector4 SizeBySpeed; // 0xa0
    FVector ConstantAcceleration; // 0xb0
    FVector OrbitOffsetBase; // 0xbc
    FVector OrbitOffsetRange; // 0xc8
    FVector OrbitFrequencyBase; // 0xd4
    FVector OrbitFrequencyRange; // 0xe0
    FVector OrbitPhaseBase; // 0xec
    FVector OrbitPhaseRange; // 0xf8
    float GlobalVectorFieldScale; // 0x104
    float GlobalVectorFieldTightness; // 0x108
    float PerParticleVectorFieldScale; // 0x10c
    float PerParticleVectorFieldBias; // 0x110
    float DragCoefficientScale; // 0x114
    float DragCoefficientBias; // 0x118
    float ResilienceScale; // 0x11c
    float ResilienceBias; // 0x120
    float CollisionRadiusScale; // 0x124
    float CollisionRadiusBias; // 0x128
    float CollisionTimeBias; // 0x12c
    float CollisionRandomSpread; // 0x130
    float CollisionRandomDistribution; // 0x134
    float OneMinusFriction; // 0x138
    float RotationRateScale; // 0x13c
    float CameraMotionBlurAmount; // 0x140
    EParticleScreenAlignment ScreenAlignment; // 0x144
    EParticleAxisLock LockAxisFlag; // 0x145
    char pad_146[0x2];
    FVector2D PivotOffset; // 0x148
    uint8_t bRemoveHMDRoll : 1; // 0x150
    uint8_t pad_bitfield_150_1 : 7;
    char pad_151[0x3];
    float MinFacingCameraBlendDistance; // 0x154
    float MaxFacingCameraBlendDistance; // 0x158
    char pad_15c[0x4];
}; // Size: 0x160
#pragma pack(pop)
