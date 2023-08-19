#pragma once
#include <cstdint>
#include "EComponentMobility\Type.hpp"
#include "ESkyLightSourceMode.hpp"
#include "FLinearColor.hpp"
class UTextureCube;
#pragma pack(push, 1)
struct FSkyLightAdvancedParametersOverride {
    uint8_t bOverride_AffectTranslucentLighting : 1; // 0x0
    uint8_t bOverride_Transmission : 1; // 0x0
    uint8_t bOverride_ProbeOnly : 1; // 0x0
    uint8_t bOverride_bAffectReflection : 1; // 0x0
    uint8_t bOverride_Mobility : 1; // 0x0
    uint8_t bOverride_SourceMode : 1; // 0x0
    uint8_t bOverride_Cubemap : 1; // 0x0
    uint8_t bOverride_SourceCubemapAngle : 1; // 0x0
    uint8_t bOverride_CubemapResolution : 1; // 0x1
    uint8_t bOverride_SkyDistanceThreshold : 1; // 0x1
    uint8_t bOverride_bCaptureEmissiveOnly : 1; // 0x1
    uint8_t bOverride_bLowerHemisphereIsBlack : 1; // 0x1
    uint8_t bOverride_LowerHemisphereColor : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    EComponentMobility::Type Mobility; // 0x2
    ESkyLightSourceMode SourceMode; // 0x3
    char pad_4[0x4];
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
