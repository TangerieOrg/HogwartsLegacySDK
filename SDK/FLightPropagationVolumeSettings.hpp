#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightPropagationVolumeSettings {
    uint8_t bOverride_LPVIntensity : 1; // 0x0
    uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0
    uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0
    uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0
    uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0x0
    uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0
    uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0
    uint8_t bOverride_LPVSize : 1; // 0x0
    uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x1
    uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x1
    uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x1
    uint8_t bOverride_LPVVplInjectionBias : 1; // 0x1
    uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    char pad_2[0x2];
    float LPVIntensity; // 0x4
    float LPVVplInjectionBias; // 0x8
    float LPVSize; // 0xc
    float LPVSecondaryOcclusionIntensity; // 0x10
    float LPVSecondaryBounceIntensity; // 0x14
    float LPVGeometryVolumeBias; // 0x18
    float LPVEmissiveInjectionIntensity; // 0x1c
    float LPVDirectionalOcclusionIntensity; // 0x20
    float LPVDirectionalOcclusionRadius; // 0x24
    float LPVDiffuseOcclusionExponent; // 0x28
    float LPVSpecularOcclusionExponent; // 0x2c
    float LPVDiffuseOcclusionIntensity; // 0x30
    float LPVSpecularOcclusionIntensity; // 0x34
    float LPVFadeRange; // 0x38
    float LPVDirectionalOcclusionFadeRange; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
