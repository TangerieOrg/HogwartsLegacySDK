#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "ESkyLightSourceMode.hpp"
#include "FLinearColor.hpp"
class UTextureCube;
#pragma pack(push, 1)
struct FSkyLightAdvancedParameters {
    EComponentMobility::Type Mobility; // 0x0
    ESkyLightSourceMode SourceMode; // 0x1
    char pad_2[0x6];
    UTextureCube* CubeMap; // 0x8
    float SourceCubemapAngle; // 0x10
    int32_t CubemapResolution; // 0x14
    float SkyDistanceThreshold; // 0x18
    bool bCaptureEmissiveOnly; // 0x1c
    bool bLowerHemisphereIsBlack; // 0x1d
    char pad_1e[0x2];
    FLinearColor LowerHemisphereColor; // 0x20
    bool bAffectTranslucentLighting; // 0x30
    bool bTransmission; // 0x31
    bool bAffectReflection; // 0x32
    bool bProbeOnly; // 0x33
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
