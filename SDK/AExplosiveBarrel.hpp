#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "FGameplayTagContainer.hpp"
class UStaticMeshComponent;
class AActor;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class AExplosiveBarrel : public AWorldObject {
public:
    UStaticMeshComponent* BarrelMesh; // 0x2b0
    bool bSimulatePhysics; // 0x2b8
    char pad_2b9[0x3];
    float ExplosionTimer; // 0x2bc
    float ExplodeDelay; // 0x2c0
    float ExplosionRadius; // 0x2c4
    ERadialImpulseFalloff Falloff; // 0x2c8
    char pad_2c9[0x3];
    float ImpulseStrength; // 0x2cc
    float AdditionalRadialForce; // 0x2d0
    float ExplosionVFXScale; // 0x2d4
    float ExplosionDamage_Objects; // 0x2d8
    float ExplosionDamage_Pawns; // 0x2dc
    float PropagateFireChance; // 0x2e0
    float FireDamage; // 0x2e4
    TArray<AActor*> IgnoreActors; // 0x2e8
    EDrawDebugTrace::Type TraceVisibility; // 0x2f8
    char pad_2f9[0x3];
    float BombardaExplosionRadius; // 0x2fc
    float BombardaImpulseStrength; // 0x300
    float BombardaAdditionalRadialForce; // 0x304
    float BombardaExplosionVFXScale; // 0x308
    float BombardaExplosionDamage_Objects; // 0x30c
    float BombardaExplosionDamage_Pawns; // 0x310
    char pad_314[0x4];
    TArray<EObjectTypeQuery> OverlapActorTypes; // 0x318
    AActor* BarrelInstigator; // 0x328
    FGameplayTagContainer DamageTags; // 0x330
    UInteractionArchitectAsset* DamageDataAsset; // 0x350
    TArray<AActor*> ExplosionIgnoreActors; // 0x358
    char pad_368[0x10];
    static AExplosiveBarrel* StaticClass();
    bool SphereOverlap(TArray<AActor*>& OutActors);
    void SortAffectedActors(TArray<AActor*>& OutActors);
    void KillBarrel();
    void HitByBombarda();
    float GetExplosionVFXScale();
    void ExplodeStart();
    void ExplodeEnd();
    bool ExplodeDamage(AActor* DamageActor);
    void ApplyOnFireDoT(AActor* Target, AActor* InInstigator);
}; // Size: 0x378
#pragma pack(pop)
