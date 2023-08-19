#pragma once
#include <cstdint>
#include "FLightCullingCameraSetup.hpp"
#pragma pack(push, 1)
struct FCharacterLightingFeaturesSettings {
    float CharacterProjectedShadowsEndMeters; // 0x0
    int32_t MaxCharacterProjectedShadows; // 0x4
    float CapsuleShadowsEndMeters; // 0x8
    int32_t MaxCharacterCapsuleShadows; // 0xc
    float CharacterContactShadowsStartMeters; // 0x10
    float CharacterContactShadowsEndMeters; // 0x14
    int32_t MaxCharacterContactShadows; // 0x18
    float BlobShadowsEndMeters; // 0x1c
    int32_t MaxCharacterBlobShadows; // 0x20
    float CharacterIndirectCapsuleShadowsEndMeters; // 0x24
    float CapsuleIndirectShadowMinVisibility; // 0x28
    int32_t MaxCharacterIndirectCapsuleShadows; // 0x2c
    float CharacterLightChannelEndMeters; // 0x30
    int32_t MaxCharactersInLightChannel; // 0x34
    FLightCullingCameraSetup CameraSetup; // 0x38
    uint8_t bLimitCharacterProjectedShadows : 1; // 0x3c
    uint8_t bLimitCharacterCapsuleShadows : 1; // 0x3c
    uint8_t bLimitCharactersInLightChannel : 1; // 0x3c
    uint8_t bEnableCharacterIndirectCapsuleShadows : 1; // 0x3c
    uint8_t bLimitCharacterIndirectCapsuleShadows : 1; // 0x3c
    uint8_t bLimitCharacterContactShadows : 1; // 0x3c
    uint8_t bUseCharacterContactShadowsStart : 1; // 0x3c
    uint8_t bUseCharacterContactShadowsEnd : 1; // 0x3c
    uint8_t bDisablePlayerContactShadows : 1; // 0x3d
    uint8_t bEnableCharacterBlobShadows : 1; // 0x3d
    uint8_t bLimitCharacterBlobShadows : 1; // 0x3d
    uint8_t pad_bitfield_3d_3 : 5;
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
