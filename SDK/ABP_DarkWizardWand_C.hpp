#pragma once
#include <cstdint>
#include "AEnemyAIWeapon.hpp"
#include "EEnemyBuffTypeEnum.hpp"
#include "FMultiFX2Var.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class UParticleSystemComponent;
class UObjectStateComponent;
struct FHitResult;
class USceneComponent;
class UNiagaraComponent;
class USphereComponent;
struct FGameplayTagContainer;
class UMeshComponent;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_DarkWizardWand_C : public AEnemyAIWeapon {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x670
    UParticleSystemComponent* ParticleLiteFx; // 0x678
    UObjectStateComponent* ObjectState; // 0x680
    USceneComponent* WeaponFxImpactLocation; // 0x688
    UStaticMeshComponent* SM_WP_DarkWizard_Wand; // 0x690
    USphereComponent* Sphere; // 0x698
    FMultiFX2Var Var; // 0x6a0
    UParticleSystemComponent* DropEffect; // 0x6a8
    UNiagaraComponent* OminisWandEffects; // 0x6b0
    static ABP_DarkWizardWand_C* StaticClass();
    bool EventTransientWeaponPoweredUp();
    bool HideWeaponStopFX();
    bool ShowWeaponStartFX();
    bool EventWeaponDisarmedForRecoveryFx();
    bool ActivateWeapon();
    bool ActivateWeaponThreat();
    bool DeactivateWeapon();
    bool DeactivateWeaponThreat();
    bool DisableShieldCollision();
    bool EnableShieldCollision();
    bool SpawnStoredWeapon();
    bool StartWeaponSwing();
    bool WeaponStored();
    bool EventTrackPoints();
    bool EventTransientWeaponActivate();
    bool EventTransientWeaponDeactivate();
    bool EventWeaponImpactGlowFx();
    bool EventWeaponMeleeAttackStartFx();
    bool EventWeaponFireAOE1Fx();
    bool EventWeaponMeleePawnSlashFx(FHitResult& HitResult, FGameplayTagContainer& InMunitionTagContainer);
    bool EventWeaponThrownPawnStabFx(FHitResult& HitResult);
    UMeshComponent* FireWeaponAOE1();
    bool EventWeaponDeactivatedFx();
    bool EventWeaponSpawnStoredWeaponFx();
    bool EventWeaponDisarmedFx();
    bool EventWeaponActivateBuffEmitterFx(EEnemyBuffTypeEnum InBuffType);
    bool EventWeaponDeactivateBuffEmitterFx();
    bool InterfaceWeaponAcquire();
    bool InterfaceWeaponRigidBodyActivate();
    bool InterfaceWeaponRigidBodyDeactivate();
    bool EventWeaponDestroyedFx(FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FRotator CallFunc_MakeRotationFromAxes_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
    bool EventWeaponTriggerGenericImpactFx(FHitResult& HitResult, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    bool EventWeaponTriggerThrownFx();
    bool EventWeaponTriggerProtegoFx(FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32_t CallFunc_BreakHitResult_HitItem, int32_t CallFunc_BreakHitResult_ElementIndex, int32_t CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FRotator CallFunc_MakeRotationFromAxes_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    bool EventWeaponActivateLiteFx();
    bool EventWeaponDeactivateLiteFx();
    bool EventWeaponTriggerImpactFx(FHitResult& HitResult, FVector CallFunc_GetSocketLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    bool EventWeaponDeactivateHeavyFx();
    UCapsuleComponent* GetCapsuleComponent();
    UMeshComponent* GetMeshComponent();
    bool DisableCollision();
    bool DisableMeleeCollision();
    bool EnableCollision();
    bool EnableMeleeCollision();
    bool DisablePhysicsSim(bool CallFunc_IsAnySimulatingPhysics_ReturnValue);
    bool EnablePhysicsSim(bool CallFunc_IsAnySimulatingPhysics_ReturnValue);
    USceneComponent* GetSceneComponent();
    void EventDisableRangedPawnCollision();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DarkWizardWand(int32_t EntryPoint, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_DisableMeleeCollision_ReturnValue);
}; // Size: 0x6b8
#pragma pack(pop)
