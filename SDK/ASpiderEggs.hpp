#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESpiderTypeEnum.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UAkComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UNiagaraComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UArrowComponent;
class ULootDropComponent;
class UEnemyStateComponent;
class UCognitionStimuliSourceComponent;
class UInteractionArchitectAsset;
class UClass;
class APerceptionPointArea;
class UAkAudioEvent;
struct FHitResult;
class UNiagaraSystem;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ASpiderEggs : public AActor {
public:
    UStaticMeshComponent* SM_SpiderEggs_A_Broken; // 0x248
    USkeletalMeshComponent* SK_SpiderEggs_01; // 0x250
    USphereComponent* ActivationRadiusSphere; // 0x258
    USphereComponent* ProximitySphere; // 0x260
    USphereComponent* StealthActivationSphere; // 0x268
    UParticleSystemComponent* LitFlames; // 0x270
    UParticleSystemComponent* VFX_P_Spider_Pro_Impact_Ground_2; // 0x278
    UAkComponent* Ak_BP_SpiderEggs; // 0x280
    UStaticMeshComponent* Base; // 0x288
    UArrowComponent* SpawnAngle; // 0x290
    UParticleSystemComponent* SacFire; // 0x298
    UNiagaraComponent* IncendioFire; // 0x2a0
    ULootDropComponent* LootDrop; // 0x2a8
    UEnemyStateComponent* EnemyState; // 0x2b0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2b8
    bool bIsActive; // 0x2c0
    bool bIsBreathing; // 0x2c1
    bool bIsPulsing; // 0x2c2
    bool bIsOnfire; // 0x2c3
    bool bWasKilledByFire; // 0x2c4
    bool bIsFrozen; // 0x2c5
    bool bIsArrested; // 0x2c6
    bool bWasKilled; // 0x2c7
    bool bHeavyBlow; // 0x2c8
    bool bFireJustStarted; // 0x2c9
    bool bAlertProcessed; // 0x2ca
    char pad_2cb[0x1];
    float mBreathStartTime; // 0x2cc
    TArray<AActor*> mActorsInRadius; // 0x2d0
    float mActivationRadius; // 0x2e0
    float mStealthActivationRadius; // 0x2e4
    float mBurstTime; // 0x2e8
    float mBurstDelay; // 0x2ec
    char pad_2f0[0x38];
    TArray<ASpiderEggs*> mNearbyEggsForAlert; // 0x328
    float mNearEggAlertRadius; // 0x338
    float mNearEggAlertTime; // 0x33c
    float mNearEggAlertDelay; // 0x340
    char pad_344[0x4];
    TArray<ASpiderEggs*> mProximityEggs; // 0x348
    float mProximityRadius; // 0x358
    float mForceBurstTime; // 0x35c
    float mForceBurstDelay; // 0x360
    char pad_364[0x4];
    FTimerHandle mForceBurstHandle; // 0x368
    FVector2D mSpiderSpawnRange; // 0x370
    float mExplodeDamage; // 0x378
    float mExplodeRadius; // 0x37c
    float mDamageDelay; // 0x380
    FVector mInitialScale; // 0x384
    char pad_390[0x18];
    bool bAllowDebug; // 0x3a8
    bool bHideBase; // 0x3a9
    bool bIsBurst; // 0x3aa
    bool bSpawnSpidersOnExplode; // 0x3ab
    bool bSpawnWhenHit; // 0x3ac
    bool bIgnoreTriggerSphere; // 0x3ad
    ESpiderTypeEnum mSpidersToSpawn; // 0x3ae
    char pad_3af[0x1];
    float mSpawnAngleSpread; // 0x3b0
    float mSpawnLandDistance; // 0x3b4
    bool bSpawnLootOnExplode; // 0x3b8
    char pad_3b9[0x3];
    float mLootChance; // 0x3bc
    FTransform mSpawnTransform; // 0x3c0
    float mDamageAmount; // 0x3f0
    float mFireLifetime; // 0x3f4
    float mFireDamage; // 0x3f8
    float mBreathingAnimSpeed; // 0x3fc
    float mPulsingAnimSpeed; // 0x400
    float mAsyncLoadRadius; // 0x404
    char pad_408[0x140];
    TArray<UInteractionArchitectAsset*> mFireDamageMunitions; // 0x548
    UClass* mExplodeIgnoreInterface; // 0x558
    UClass* mExplodeMunition; // 0x560
    TArray<APerceptionPointArea*> StayInVolumeList; // 0x568
    bool bCanRemoveStayInVolumes; // 0x578
    char pad_579[0x3];
    float StayInRadius; // 0x57c
    float StayInVolumeTeleportTimeout; // 0x580
    bool bStayInVolumeOffNavTeleport; // 0x584
    char pad_585[0xb];
    UAkAudioEvent* mAkEvent_Explode; // 0x590
    UNiagaraSystem* mNiagara_HeavyFireBurstEffect; // 0x598
    UNiagaraSystem* mNiagara_FirePopEffect; // 0x5a0
    UNiagaraSystem* mNiagara_FrozenBurstEffect; // 0x5a8
    UNiagaraSystem* mNiagara_DamagedEffect; // 0x5b0
    char pad_5b8[0x8];
    static ASpiderEggs* StaticClass();
    void OnStopPulse();
    void OnStartPulse();
    void OnOverlapEnd_StealthActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapEnd_ProximitySphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapEnd_ActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin_StealthActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnOverlapBegin_ProximitySphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnOverlapBegin_ActivationSphere(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnBurst();
    void _UpdateObjectState();
    void _StopPulse();
    void _StopMotion();
    void _StopForceBurstDelay();
    void _StopFireLight();
    void _StopFire();
    void _StopExplodeDelay();
    void _StopBreathing();
    void _StopAlertDelay();
    void _StartTimerDelays();
    void _StartPulse();
    void _StartMotion();
    void _StartForceBurstDelay();
    void _StartFireLight();
    void _StartExplode();
    void _StartBurst();
    void _StartBreathing();
    void _SpawnLoot();
    void _SpawnEnemies();
    void _SetupParamsForSpawnType();
    void _ResumePulse();
    void _ResumeMotion();
    void _ResumeBreathing();
    bool _RemoveActorInRadius(AActor* InActor, bool RemoveAll);
    void _PropagateFire();
    void _PrintDebug(FString Name, float Value);
    void _PlayExplodeEffects();
    void _PlayDamagedEffects(float InDamage);
    void _PausePulse();
    void _PauseMotion();
    void _PauseBreathing();
    void _LightFire();
    bool _IsPausedBySpell();
    void _HideEggSacMesh();
    void _HideBaseMesh();
    void _HeavyBlowExplode();
    bool _HasActorsInRadius();
    void _ForceBurstStart();
    void _ForceBurst();
    void _FireTick();
    void _Fire();
    FTransform _FindValidEnemySpawn();
    void _Explode();
    void _DoDamageOnExplode();
    void _DoDamageFire();
    void _CancelExplode();
    void _CallDispatcher();
    void _AlertNearby();
    bool _AddActorInRadius(AActor* InActor);
    void _ActivateObject();
}; // Size: 0x5c0
#pragma pack(pop)
