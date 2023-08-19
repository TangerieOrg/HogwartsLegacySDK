#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
#include "FVector.hpp"
class UCurveFloat;
class UClass;
class USkeletalMeshComponent;
class UParticleSystem;
class UAkAudioEvent;
struct FHitResult;
class UNiagaraSystem;
class USphereComponent;
class UMaterialInterface;
class UMunitionMovementComponent;
class AActor;
#pragma pack(push, 1)
class AMunitionType_Subsonic : public AMunitionType_Base {
public:
    float m_speed; // 0x360
    float m_gravity; // 0x364
    bool m_explodeOnContactWithActors; // 0x368
    bool m_explodeOnContactWithTerrain; // 0x369
    bool m_explodeWhenLifetimeExpires; // 0x36a
    bool m_deactivteParticlesOnDeath; // 0x36b
    float m_delayedDeactivationTime; // 0x36c
    float m_delayedDeathTime; // 0x370
    float m_physicsImpulse; // 0x374
    UClass* m_AOE; // 0x378
    UParticleSystem* m_hitActorFX; // 0x380
    UParticleSystem* m_hitTerrainFX; // 0x388
    UParticleSystem* m_hitBlockedFX; // 0x390
    UParticleSystem* m_fizzleOutFX; // 0x398
    UNiagaraSystem* m_hitActorNiagaraFX; // 0x3a0
    UNiagaraSystem* m_hitTerrainNiagaraFX; // 0x3a8
    UNiagaraSystem* m_hitBlockedNiagaraFX; // 0x3b0
    UNiagaraSystem* m_fizzleOutNiagaraFX; // 0x3b8
    UAkAudioEvent* m_destroyedTargetSfx; // 0x3c0
    UAkAudioEvent* m_hitActorSfx; // 0x3c8
    UAkAudioEvent* m_hitTerrainSfx; // 0x3d0
    UAkAudioEvent* m_hitBlockedSfx; // 0x3d8
    UAkAudioEvent* m_fizzleOutSfx; // 0x3e0
    bool m_placeDecal; // 0x3e8
    char pad_3e9[0x7];
    UMaterialInterface* m_decalMaterial; // 0x3f0
    FVector m_decalSize; // 0x3f8
    float m_decalLifeSpan; // 0x404
    float m_decalFadeTime; // 0x408
    char pad_40c[0x4];
    UCurveFloat* HomingMarkerOffsetCurve; // 0x410
    UCurveFloat* HomingAccelerationCurve; // 0x418
    USphereComponent* m_sphereComp; // 0x420
    USkeletalMeshComponent* m_meshComp; // 0x428
    UMunitionMovementComponent* ProjectileMovementComponent; // 0x430
    char pad_438[0x30];
    static AMunitionType_Subsonic* StaticClass();
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void OnFire(AActor* Target, FVector TargetLocation, FVector Velocity);
    USphereComponent* GetSphereComp();
    UMunitionMovementComponent* GetProjectileMovement();
    USkeletalMeshComponent* GetMeshComp();
    void DestroyMunition();
}; // Size: 0x468
#pragma pack(pop)
