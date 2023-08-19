#pragma once
#include <cstdint>
#include "AStaticMeshActor.hpp"
#include "EObjectTypeQuery.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FBTCustomAction.hpp"
#include "FHitResult.hpp"
#include "FVariantMapHandle.hpp"
class AActor;
class UInteractionArchitectAsset;
class UEnemy_SpawnSpiders;
#pragma pack(push, 1)
class ASpiderWeb_EggSack : public AStaticMeshActor {
public:
    bool bBroken; // 0x258
    bool bFrozen; // 0x259
    bool bOnFire; // 0x25a
    bool bSpawnObject; // 0x25b
    char pad_25c[0x4];
    FString ObjectDBID; // 0x260
    float LootChance; // 0x270
    float SpiderChance; // 0x274
    ESpiderTypeEnum SpiderType; // 0x278
    char pad_279[0x3];
    int32_t BaseSpiderNum; // 0x27c
    int32_t SpiderNumVariance; // 0x280
    float ExplodeDelay; // 0x284
    float ExplosionDamage; // 0x288
    float ExplosionRadius; // 0x28c
    float OnFireExplosionDamage; // 0x290
    float OnFireExplosionRadius; // 0x294
    float AccioTime; // 0x298
    char pad_29c[0x4];
    TArray<EObjectTypeQuery> OverlapActorTypes; // 0x2a0
    TArray<AActor*> IgnoreActors; // 0x2b0
    TArray<UInteractionArchitectAsset*> ExplodeMunition; // 0x2c0
    FHitResult BlankHit; // 0x2d0
    FBTCustomAction StumbleAction; // 0x358
    FVariantMapHandle ActionMapHandle; // 0x364
    UEnemy_SpawnSpiders* EnemySpiders; // 0x368
    char pad_370[0x10];
    static ASpiderWeb_EggSack* StaticClass();
    void StartAccioTimer(bool i_Start);
    void SpawnSpiders();
    void SpawnLoot();
    void SpawnEnemySpiders();
    void SpawnDBObject();
    void OnBreak(bool i_Explode);
    void InitializeSack(float i_LootChance, float i_SpiderChance, ESpiderTypeEnum i_SpiderType, int32_t i_SpiderBaseNum, int32_t i_SpiderNumVariation, bool i_bObjectNotSpiders, FString i_ObjectDBID);
    void ExplodeSack();
    void AccioBreak();
}; // Size: 0x380
#pragma pack(pop)
