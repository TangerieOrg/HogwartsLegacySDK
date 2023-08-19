#pragma once
#include <cstdint>
#include "FVector.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
struct FFluidSimParams {
    bool Enabled; // 0x0
    bool DrawDebugBounds; // 0x1
    bool Optimize; // 0x2
    char pad_3[0x1];
    float OptimizationThreshold; // 0x4
    FVector VolumeScale; // 0x8
    FVector ComputeDimensions; // 0x14
    UCurveLinearColor* ColorCurve; // 0x20
    float ColorCurveScale; // 0x28
    float ColorIntensity; // 0x2c
    bool FadeEdges; // 0x30
    char pad_31[0x3];
    FVector BuoyancyGravity; // 0x34
    bool LocalSpaceBuoyancyGravity; // 0x40
    char pad_41[0x3];
    float MotionVectorStrength; // 0x44
    bool VolumeMotion; // 0x48
    char pad_49[0x3];
    float VelocityDissipation; // 0x4c
    float SourceDissipation; // 0x50
    float Vorticity; // 0x54
    float VorticityTrails; // 0x58
    char pad_5c[0x8];
    float TimeStep; // 0x64
    int32_t iterations; // 0x68
    float Density; // 0x6c
    char pad_70[0x1];
    bool SlowLighting; // 0x71
    char pad_72[0x2];
    float EdgeFadeScale; // 0x74
    float EdgeFadeBias; // 0x78
    char pad_7c[0xc];
}; // Size: 0x88
#pragma pack(pop)
