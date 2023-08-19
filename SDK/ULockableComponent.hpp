#pragma once
#include <cstdint>
#include "FDatabaseLockList.hpp"
#include "FGuid.hpp"
#include "UActorComponent.hpp"
class UMeshComponent;
class UAkAudioEvent;
class USceneComponent;
struct FHitResult;
class UParticleSystem;
class UObject;
class UCognitionStimuliSourceComponent;
class USphereComponent;
class UClass;
class ALockable;
class AAmbulatory_Character;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class ULockableComponent : public UActorComponent {
public:
    char pad_c8[0x20];
    UMeshComponent* LockMeshComponent; // 0xe8
    USceneComponent* CalloutLocator; // 0xf0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0xf8
    USphereComponent* LockHitSphere; // 0x100
    int32_t SerializedVersion; // 0x108
    bool AlwaysFaceCamera; // 0x10c
    char pad_10d[0x3];
    FName Socket; // 0x110
    bool Locked; // 0x118
    char pad_119[0x3];
    FName Inventory_KeyName; // 0x11c
    FDatabaseLockList DatabaseLock_KeyName; // 0x124
    bool AutomaticallyChangeLockStateWithKeyPossession; // 0x12c
    bool ShowLock; // 0x12d
    bool PerceptibleWhenLocked; // 0x12e
    char pad_12f[0x1];
    FName GroupName; // 0x130
    FString ScheduleUnlockedTime; // 0x138
    FString ScheduleLockedTime; // 0x148
    UParticleSystem* LockPickParticleSystem; // 0x158
    UParticleSystem* LockLocationUnlockParticleSystem; // 0x160
    UClass* AlohomoraCompleteAbilityClass; // 0x168
    float AlohomoraFailTime; // 0x170
    float AlohomoraAtLevelTime; // 0x174
    float AlohomoraOneAboveTime; // 0x178
    float AlohomoraTwoAboveTime; // 0x17c
    float UnlockWithKeyTime; // 0x180
    float TimeForWiggleSound; // 0x184
    UAkAudioEvent* UnlockSound; // 0x188
    UAkAudioEvent* UnlockingSound; // 0x190
    UAkAudioEvent* UnlockingStopSound; // 0x198
    UAkAudioEvent* VoidSound; // 0x1a0
    UAkAudioEvent* WiggleSound; // 0x1a8
    UAkAudioEvent* AddedSound; // 0x1b0
    UAkAudioEvent* RemovedSound; // 0x1b8
    UAkAudioEvent* HitByMunitionSound; // 0x1c0
    UAkAudioEvent* ClosedWithLockSound; // 0x1c8
    UAkAudioEvent* BumpedIntoLockSound; // 0x1d0
    UAkAudioEvent* UnlockFailSound; // 0x1d8
    FGuid Guid; // 0x1e0
    bool HasBeenSetUp; // 0x1f0
    bool DeleteThisComponent; // 0x1f1
    char pad_1f2[0x2e];
    static ULockableComponent* StaticClass();
    void UpdateLockAfterChange(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild);
    void Unseal(bool ShowLockWhenLocked, bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects);
    void UnlockTimeReached(UObject* Caller);
    void UnlockIfLinked(UObject* Caller, FName& inGroupName);
    void UnlockButtonReleasedEarly(UObject* Caller);
    void UnlockButtonPressed(UObject* Caller);
    void Unlock(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool DoChild, bool FromMinigame);
    void Seal(bool ShowLockWhenLocked, bool PlaySoundsAndEffects);
    void PlayerHitByMunitions();
    void OnPlayerRemovedLock(AAmbulatory_Character* AmbulatoryCharacter);
    void OnLockSphereHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    bool HasKey();
    UMeshComponent* GetLockMeshComponent();
    ALockable* GetLockable();
    void DestroyLock();
    bool CanPlayerUseAlohomoraOnLock();
    bool CanPlayerOpenLock();
}; // Size: 0x220
#pragma pack(pop)
