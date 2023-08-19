#pragma once
#include <cstdint>
#include "ENoiseSize.hpp"
#include "FObjectFadeParams.hpp"
#include "FPerPlatformInt.hpp"
#include "FVector.hpp"
class UGeometryCollection;
class UStaticMesh;
class UMultiFX2_Base;
class UPhysicalMaterial;
class UClass;
class UNiagaraSystem;
class UParticleSystem;
class UReparoData;
class UAkAudioEvent;
#pragma pack(push, 1)
struct FRepairData {
    UGeometryCollection* DestructibleGeometryCollection; // 0x0
    UStaticMesh* BaseMesh; // 0x8
    FName BaseCollisionProfileName; // 0x10
    TArray<UMultiFX2_Base*> DeathFX2; // 0x18
    TArray<UMultiFX2_Base*> DamagableInPiecesFX2; // 0x28
    ENoiseSize DeathNoiseSize; // 0x38
    bool bFadeOutEntireGC; // 0x39
    char pad_3a[0x2];
    float ChunkFadeOutDelay; // 0x3c
    float ChunkFadeVisiblePct; // 0x40
    int32_t ChunkFadeVisibleMax; // 0x44
    int32_t ChunkFadeVisibleMin; // 0x48
    FPerPlatformInt MaxClusterLevel; // 0x4c
    FPerPlatformInt DisableMeshBreak; // 0x50
    FVector AnchorFieldOffset; // 0x54
    FVector AnchorFieldSize; // 0x60
    float DestroyFromCenterMultiplier; // 0x6c
    float DestroyObjectRadius; // 0x70
    float DestroyObjectStrain; // 0x74
    float DestroyLinearForce; // 0x78
    float DestroyLinearForceMultiplier; // 0x7c
    float DestroyAngularForceMultiplier; // 0x80
    float DestroyRadialForce; // 0x84
    UClass* DestroyObjectFieldSystemClass; // 0x88
    FName ChunkCollisionProfileName; // 0x90
    UPhysicalMaterial* ChunkPhysicalMaterial; // 0x98
    TArray<UMultiFX2_Base*> ChunkTrailFX2; // 0xa0
    UParticleSystem* ChunkTrailParticleSystem; // 0xb0
    UNiagaraSystem* ChunkTrailNiagaraVfx; // 0xb8
    UParticleSystem* ChunkFadeParticleSystem; // 0xc0
    UNiagaraSystem* ChunkFadeNiagaraVfx; // 0xc8
    UParticleSystem* ChunkImpactParticleSystem; // 0xd0
    UNiagaraSystem* ChunkImpactNiagaraVfx; // 0xd8
    float ChunkImpactDelay; // 0xe0
    float ChunkImpactMinimumImpulse; // 0xe4
    float ChunkImpactMinimumVolume; // 0xe8
    char pad_ec[0x4];
    FObjectFadeParams ChunkFadeOutParams; // 0xf0
    FObjectFadeParams ChunkFadeInParams; // 0x180
    TArray<UReparoData*> ReparoDataArray; // 0x210
    UAkAudioEvent* RepairSfx; // 0x220
    UReparoData* ReparoDataPtr; // 0x228
    uint8_t bRepairable : 1; // 0x230
    uint8_t bRepairChildren : 1; // 0x230
    uint8_t bRepairInPlaceOnly : 1; // 0x230
    uint8_t bRepairUsingActorTransform : 1; // 0x230
    uint8_t bUseMainComponentTransform : 1; // 0x230
    uint8_t Hide : 1; // 0x230
    uint8_t DisableCollision : 1; // 0x230
    uint8_t DisablePhysics : 1; // 0x230
    uint8_t bEnableCollisionDuringRepair : 1; // 0x231
    uint8_t bNavigationBlockedIfDestroyed : 1; // 0x231
    uint8_t bCommonBreakable : 1; // 0x231
    uint8_t bSpawnAnchorField : 1; // 0x231
    uint8_t bDestroyAnchorFieldOnDestroyed : 1; // 0x231
    uint8_t bDisableGC : 1; // 0x231
    uint8_t bChunkCharacterStepUpOn : 1; // 0x231
    uint8_t bLargeDestructible : 1; // 0x231
    uint8_t bAutoTargetableBroken : 1; // 0x232
    uint8_t pad_bitfield_232_1 : 7;
    char pad_233[0x5];
}; // Size: 0x238
#pragma pack(pop)
