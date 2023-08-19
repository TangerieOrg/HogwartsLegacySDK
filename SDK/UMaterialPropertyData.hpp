#pragma once
#include <cstdint>
#include "EObjectPropertyType.hpp"
#include "UDataAsset.hpp"
class UAkAudioEvent;
class UMultiFX2_Base;
class UMaterialInterface;
class UPhysicalMaterial;
#pragma pack(push, 1)
class UMaterialPropertyData : public UDataAsset {
public:
    EObjectPropertyType ObjectPropertyType; // 0x30
    uint8_t bWaterproof : 1; // 0x31
    uint8_t bImmuneToFireDamage : 1; // 0x31
    uint8_t bDamagableWhenCharred : 1; // 0x31
    uint8_t bDestroyWhenCharred : 1; // 0x31
    uint8_t bOnlyBurnWhenCriticalHealth : 1; // 0x31
    uint8_t bOverlayBurn : 1; // 0x31
    uint8_t bFreezable : 1; // 0x31
    uint8_t bDamagableWhenFrozen : 1; // 0x31
    char pad_32[0x6];
    UAkAudioEvent* PieceHitSfx; // 0x38
    TArray<UMultiFX2_Base*> WetFX2; // 0x40
    float FireDamagePerSecond; // 0x50
    float BurnRate; // 0x54
    float CharacterDurationScale; // 0x58
    float BurnRingWidth; // 0x5c
    float FireJumpDistance; // 0x60
    float CharredPercent; // 0x64
    UMaterialInterface* BurnMaterial; // 0x68
    UMaterialInterface* CharredMaterial; // 0x70
    float CharredDamageMultiplier; // 0x78
    char pad_7c[0x4];
    TArray<UMultiFX2_Base*> FireFX2; // 0x80
    float FireParticleSpawnRateScale; // 0x90
    char pad_94[0x4];
    UPhysicalMaterial* IcePhysicalMaterial; // 0x98
    float FrozenDamageMultiplier; // 0xa0
    char pad_a4[0x4];
    UAkAudioEvent* FastSfx; // 0xa8
    float bDestroyWhenCharredDelay; // 0xb0
    char pad_b4[0x4];
    static UMaterialPropertyData* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
