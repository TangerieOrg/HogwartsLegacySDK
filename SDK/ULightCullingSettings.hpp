#pragma once
#include <cstdint>
#include "ELightCullingDistanceOverride.hpp"
#include "FLightCullingCameraSetup.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULightCullingSettings : public UDataAsset {
public:
    ELightCullingDistanceOverride DistanceOverride; // 0x30
    char pad_31[0x3];
    float MaxDrawDistanceMeters; // 0x34
    float MaxDistanceFadeRangeMeters; // 0x38
    float AutoMaxDistanceFadeRangePercentage; // 0x3c
    float SuspiciouslyLargeMaxDrawDistanceMeters; // 0x40
    float MovableShadowsStartDistanceMeters; // 0x44
    int32_t LimitMovableShadowCastingLights; // 0x48
    float NonMovableShadowsStartDistanceMeters; // 0x4c
    int32_t LimitNonMovableShadowCastingLights; // 0x50
    float AffectVolumetricLightingStartDistanceMeters; // 0x54
    int32_t LimitAffectVolumetricLightingLights; // 0x58
    float VolumetricScatteringDistanceMeters; // 0x5c
    float VolumetricScatteringFadeRangeMeters; // 0x60
    int32_t LimitVolumetricScatteringLights; // 0x64
    float VolumetricShadowStartDistanceMeters; // 0x68
    int32_t LimitVolumetricShadowingLights; // 0x6c
    float AffectTranslucentLightingStartDistanceMeters; // 0x70
    int32_t LimitAffectTranslucentLightingLights; // 0x74
    float ContactShadowsStartDistanceMeters; // 0x78
    int32_t LimitContactShadowingLights; // 0x7c
    float MoveableLightStartDistanceMeters; // 0x80
    int32_t LimitMoveableLights; // 0x84
    float TickingLightStartDistanceMeters; // 0x88
    float CharacterProjectedShadowsEndMeters; // 0x8c
    int32_t MaxCharacterProjectedShadows; // 0x90
    float CapsuleShadowsEndMeters; // 0x94
    int32_t MaxCharacterCapsuleShadows; // 0x98
    float CharacterContactShadowsStartMeters; // 0x9c
    float CharacterContactShadowsEndMeters; // 0xa0
    int32_t MaxCharacterContactShadows; // 0xa4
    float BlobShadowsEndMeters; // 0xa8
    int32_t MaxCharacterBlobShadows; // 0xac
    float CharacterIndirectCapsuleShadowsEndMeters; // 0xb0
    float CapsuleIndirectShadowMinVisibility; // 0xb4
    int32_t MaxCharacterIndirectCapsuleShadows; // 0xb8
    float CharacterLightChannelEndMeters; // 0xbc
    int32_t MaxCharactersInLightChannel; // 0xc0
    FLightCullingCameraSetup CameraSetup; // 0xc4
    float DistanceCulledUpdateMarginMeters; // 0xc8
    uint8_t bControlMovableShadowsStart : 1; // 0xcc
    uint8_t bControlNonMovableShadowsStart : 1; // 0xcc
    uint8_t bControlVolumetricIntensity : 1; // 0xcc
    uint8_t bControlVolumetricShadow : 1; // 0xcc
    uint8_t bControlAffectVolumetricLighting : 1; // 0xcc
    uint8_t bControlAffectTranslucentLighting : 1; // 0xcc
    uint8_t bControlContactShadows : 1; // 0xcc
    uint8_t bControlMoveable : 1; // 0xcc
    uint8_t bControlTicking : 1; // 0xcd
    uint8_t bAutoMaxDistanceFadeRangePercentage : 1; // 0xcd
    uint8_t bLimitMovableShadowCastingLights : 1; // 0xcd
    uint8_t bLimitNonMovableShadowCastingLights : 1; // 0xcd
    uint8_t bLimitVolumetricScatteringLights : 1; // 0xcd
    uint8_t bLimitVolumetricShadowingLights : 1; // 0xcd
    uint8_t bLimitAffectVolumetricLighting : 1; // 0xcd
    uint8_t bLimitAffectTranslucentLighting : 1; // 0xcd
    uint8_t bLimitContactShadowingLights : 1; // 0xce
    uint8_t bLimitMoveableLights : 1; // 0xce
    uint8_t bLimitCharacterProjectedShadows : 1; // 0xce
    uint8_t bLimitCharacterCapsuleShadows : 1; // 0xce
    uint8_t bLimitCharactersInLightChannel : 1; // 0xce
    uint8_t bEnableCharacterIndirectCapsuleShadows : 1; // 0xce
    uint8_t bLimitCharacterIndirectCapsuleShadows : 1; // 0xce
    uint8_t bLimitCharacterContactShadows : 1; // 0xce
    uint8_t bUseCharacterContactShadowsStart : 1; // 0xcf
    uint8_t bUseCharacterContactShadowsEnd : 1; // 0xcf
    uint8_t bDisablePlayerContactShadows : 1; // 0xcf
    uint8_t bEnableCharacterBlobShadows : 1; // 0xcf
    uint8_t bLimitCharacterBlobShadows : 1; // 0xcf
    uint8_t bEnableCharacterFadeOut : 1; // 0xcf
    uint8_t bUseTrueLightShapes : 1; // 0xcf
    uint8_t pad_bitfield_cf_7 : 1;
    static ULightCullingSettings* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
