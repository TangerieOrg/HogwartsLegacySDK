#pragma once
#include <cstdint>
#include "EEnemyBuffTypeEnum.hpp"
#include "UInterface.hpp"
class USceneComponent;
struct FHitResult;
class UMeshComponent;
struct FGameplayTagContainer;
class UCapsuleComponent;
#pragma pack(push, 1)
class UEnemyAIWeapon_Interface : public UInterface {
public:
    static UEnemyAIWeapon_Interface* StaticClass();
    bool WeaponStored();
    bool StartWeaponSwing();
    bool SpawnStoredWeapon();
    bool ShowWeaponStartFX();
    bool InterfaceWeaponRigidBodyDeactivate();
    bool InterfaceWeaponRigidBodyActivate();
    bool InterfaceWeaponAcquire();
    bool HideWeaponStopFX();
    USceneComponent* GetSceneComponent();
    UMeshComponent* GetMeshComponent();
    UCapsuleComponent* GetCapsuleComponent();
    UMeshComponent* FireWeaponAOE1();
    bool EventWeaponTriggerThrownFx();
    bool EventWeaponTriggerProtegoFx(FHitResult& HitResult);
    bool EventWeaponTriggerImpactFx(FHitResult& HitResult);
    bool EventWeaponTriggerGenericImpactFx(FHitResult& HitResult);
    bool EventWeaponThrownPawnStabFx(FHitResult& HitResult);
    bool EventWeaponSpawnStoredWeaponFx();
    bool EventWeaponMeleePawnSlashFx(FHitResult& HitResult, FGameplayTagContainer& InMunitionTagContainer);
    bool EventWeaponMeleeAttackStartFx();
    bool EventWeaponImpactGlowFx();
    bool EventWeaponFireAOE1Fx();
    bool EventWeaponDisarmedFx();
    bool EventWeaponDisarmedForRecoveryFx();
    bool EventWeaponDestroyedFx(FHitResult& HitResult);
    bool EventWeaponDeactivateLiteFx();
    bool EventWeaponDeactivateHeavyFx();
    bool EventWeaponDeactivatedFx();
    bool EventWeaponDeactivateBuffEmitterFx();
    bool EventWeaponActivateLiteFx();
    bool EventWeaponActivateBuffEmitterFx(EEnemyBuffTypeEnum InBuffType);
    bool EventTransientWeaponPoweredUp();
    bool EventTransientWeaponDeactivate();
    bool EventTransientWeaponActivate();
    bool EventTrackPoints();
    void EventDisableRangedPawnCollision();
    bool EnableShieldCollision();
    bool EnablePhysicsSim();
    bool EnableMeleeCollision();
    bool EnableCollision();
    bool DisableShieldCollision();
    bool DisablePhysicsSim();
    bool DisableMeleeCollision();
    bool DisableCollision();
    bool DeactivateWeaponThreat();
    bool DeactivateWeapon();
    bool ActivateWeaponThreat();
    bool ActivateWeapon();
}; // Size: 0x28
#pragma pack(pop)
