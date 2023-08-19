#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
#include "FVector.hpp"
class AActor;
class AActor_SubsonicProximity;
class UStaticMesh;
class UClass;
class UAkComponent;
class USphereComponent;
class ASpellTool;
class USubsonicSpellMovementComponent;
class UObject;
struct FHitResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class AMunitionType_SubsonicSpell : public AMunitionType_Base {
public:
    char pad_360[0x18];
    bool m_explodeOnContactWithActors; // 0x378
    bool m_explodeOnContactWithTerrain; // 0x379
    bool CheckForCover; // 0x37a
    bool m_spawnStaticMeshInsteadOfTerrainFx; // 0x37b
    char pad_37c[0x4];
    UStaticMesh* StaticMeshInsteadOfTerrainFx; // 0x380
    FVector StaticMeshScale; // 0x388
    bool m_explodeWhenLifetimeExpires; // 0x394
    bool m_deactivateParticlesOnDeath; // 0x395
    bool m_hideMeshOnDeath; // 0x396
    bool m_hitOnOverlap; // 0x397
    bool m_hitWaterOnOverlap; // 0x398
    char pad_399[0x3];
    float DelayVelocityTime; // 0x39c
    float m_delayedDeactivationTime; // 0x3a0
    float m_delayedParticleDeactivationTime; // 0x3a4
    float m_delayedFizzleParticleDeactivationTime; // 0x3a8
    float m_delayedDeathTime; // 0x3ac
    float ProtegoSpeedMultiplier; // 0x3b0
    float ProtegoPerfectSpeedMultiplier; // 0x3b4
    bool bProtegoPerfectLoseBounce; // 0x3b8
    uint8_t SpawnAOECondition; // 0x3b9
    char pad_3ba[0x6];
    UClass* m_AOE; // 0x3c0
    bool bCanOppugnoAfterProtego; // 0x3c8
    char pad_3c9[0x7];
    UClass* OppugnoPhysicsObjectClass; // 0x3d0
    bool bAOEUsesSpellTool; // 0x3d8
    char pad_3d9[0x3];
    float AOERadius; // 0x3dc
    bool bAOEHitsVictimAgain; // 0x3e0
    bool bCanBeDeflected; // 0x3e1
    char pad_3e2[0x2];
    FName m_SpawnActorName; // 0x3e4
    bool bOnlySpawnOnImpact; // 0x3ec
    bool bTrackDistanceTraveled; // 0x3ed
    bool bTrackAngleToPlayer; // 0x3ee
    char pad_3ef[0x1];
    UAkComponent* ProjectileMotionAkComponent; // 0x3f0
    FName InventoryItemToReturn; // 0x3f8
    float PerceptionNoiseEventLoudness; // 0x400
    float PerceptionNoiseEventMaxRange; // 0x404
    UClass* SubsonicProximityActorClass; // 0x408
    USphereComponent* SphereComp; // 0x410
    USubsonicSpellMovementComponent* ProjectileMovementComponent; // 0x418
    ASpellTool* SpellTool; // 0x420
    bool bEnableAsyncLoadAndTrigger; // 0x428
    char pad_429[0x2f];
    UClass* SpawnClassRef; // 0x458
    AActor_SubsonicProximity* SubsonicProximityActor; // 0x460
    char pad_468[0xc0];
    TArray<AActor*> OverlapArray; // 0x528
    static AMunitionType_SubsonicSpell* StaticClass();
    void SetOnlyHitActor(AActor* OnlyHit, FName CollisionProfile);
    void PlayTerrainImpact(UObject* ImpactObject, FVector& ImpactLocation, FVector& ImpactNormal, FVector& ImpactVelocity);
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void OnFizzle();
    void OnFire(AActor* Target, FVector TargetLocation, FVector Velocity);
    USphereComponent* GetSphereComp();
    float GetSpeed();
    USubsonicSpellMovementComponent* GetProjectileMovement();
    void DisableFizzle(bool bDisable);
    void DestroyMunition();
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void AbortEarly();
}; // Size: 0x538
#pragma pack(pop)
