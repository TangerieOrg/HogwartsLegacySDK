#pragma once
#include <cstdint>
#include "ELockDifficulty.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "ULockableComponent.hpp"
class UStaticMesh;
class UCurveFloat;
class UParticleSystem;
class UMaterialInstanceDynamic;
class UMeshComponent;
#pragma pack(push, 1)
class UPadlockComponent : public ULockableComponent {
public:
    ELockDifficulty LockDifficulty; // 0x220
    bool ReverseLock; // 0x221
    char pad_222[0xe];
    FTransform LockMeshRelativeTransform; // 0x230
    TArray<UStaticMesh*> LockedMeshArray; // 0x260
    TArray<UStaticMesh*> UnlockedMeshArray; // 0x270
    UCurveFloat* GlowCurve; // 0x280
    UParticleSystem* GlowParticleSystem; // 0x288
    char pad_290[0xe8];
    UMaterialInstanceDynamic* LockMaterialInstance; // 0x378
    UMeshComponent* RemovedMeshComponent; // 0x380
    FTimerHandle DeleteLockTimerHandle; // 0x388
    char pad_390[0x10];
    static UPadlockComponent* StaticClass();
    void StartGlow();
    void StartDelayedGlow();
    void SetGlowStrength(float GlowWipeStrength);
}; // Size: 0x3a0
#pragma pack(pop)
