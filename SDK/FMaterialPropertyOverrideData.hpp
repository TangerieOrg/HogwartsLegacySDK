#pragma once
#include <cstdint>
#include "EObjectPropertyType.hpp"
class UMaterialInterface;
class UAkAudioEvent;
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FMaterialPropertyOverrideData {
    bool bOverrideObjectPropertyType; // 0x0
    EObjectPropertyType ObjectPropertyType; // 0x1
    bool bOverrideWaterproof; // 0x2
    uint8_t bWaterproof : 1; // 0x3
    uint8_t pad_bitfield_3_1 : 7;
    bool bOverrideImmuneToFireDamage; // 0x4
    uint8_t bImmuneToFireDamage : 1; // 0x5
    uint8_t pad_bitfield_5_1 : 7;
    bool bOverrideDamagableWhenCharred; // 0x6
    uint8_t bDamagableWhenCharred : 1; // 0x7
    uint8_t pad_bitfield_7_1 : 7;
    bool bOverrideDestroyWhenCharred; // 0x8
    uint8_t bDestroyWhenCharred : 1; // 0x9
    uint8_t pad_bitfield_9_1 : 7;
    bool bOverrideFireDamagePerSecond; // 0xa
    char pad_b[0x1];
    float FireDamagePerSecond; // 0xc
    bool bOverrideBurnRate; // 0x10
    char pad_11[0x3];
    float BurnRate; // 0x14
    bool bOverrideCharacterDurationScale; // 0x18
    char pad_19[0x3];
    float CharacterDurationScale; // 0x1c
    bool bOverrideBurnRingWidth; // 0x20
    char pad_21[0x3];
    float BurnRingWidth; // 0x24
    bool bOverrideFireJumpDistance; // 0x28
    char pad_29[0x3];
    float FireJumpDistance; // 0x2c
    bool bOverrideCharredPercent; // 0x30
    char pad_31[0x3];
    float CharredPercent; // 0x34
    bool bOverridOverlayBurn; // 0x38
    uint8_t bOverlayBurn : 1; // 0x39
    uint8_t pad_bitfield_39_1 : 7;
    bool bOverrideBurnMaterial; // 0x3a
    char pad_3b[0x5];
    UMaterialInterface* BurnMaterial; // 0x40
    bool bOverrideCharredMaterial; // 0x48
    char pad_49[0x7];
    UMaterialInterface* CharredMaterial; // 0x50
    bool bOverrideCharredDamageMultiplier; // 0x58
    char pad_59[0x3];
    float CharredDamageMultiplier; // 0x5c
    bool bOverrideFireParticleSpawnRateScale; // 0x60
    char pad_61[0x3];
    float FireParticleSpawnRateScale; // 0x64
    bool bOverrideFireStartSfx; // 0x68
    char pad_69[0x7];
    UAkAudioEvent* FireStartSfx; // 0x70
    bool bOverrideFireLoopSfx; // 0x78
    char pad_79[0x7];
    UAkAudioEvent* FireLoopSfx; // 0x80
    bool bOverrideFireEndSfx; // 0x88
    char pad_89[0x7];
    UAkAudioEvent* FireEndSfx; // 0x90
    bool bOverrideFreezable; // 0x98
    uint8_t bFreezable : 1; // 0x99
    uint8_t pad_bitfield_99_1 : 7;
    bool bOverrideDamagableWhenFrozen; // 0x9a
    uint8_t bDamagableWhenFrozen : 1; // 0x9b
    uint8_t pad_bitfield_9b_1 : 7;
    bool bOverrideIcePhysicalMaterial; // 0x9c
    char pad_9d[0x3];
    UPhysicalMaterial* IcePhysicalMaterial; // 0xa0
    bool bOverrideFrozenDamageMultiplier; // 0xa8
    char pad_a9[0x3];
    float FrozenDamageMultiplier; // 0xac
}; // Size: 0xb0
#pragma pack(pop)
