#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMultiFX2Handle.hpp"
#include "FProtegoEffectsData.hpp"
#include "FProtegoLevelData.hpp"
class UCurveFloat;
class UClass;
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UAkAudioEvent;
struct FHitResult;
class AMunitionType_Base;
class AActor;
struct FDamageResult;
class UPrimitiveComponent;
#pragma pack(push, 1)
class AProtegoSpellTool : public AChannelingSpellTool {
public:
    bool bShowDebug; // 0x960
    bool bAllowTick; // 0x961
    char pad_962[0x6];
    TArray<FProtegoLevelData> LevelDataArray; // 0x968
    UClass* ProtegoActorClass; // 0x978
    TArray<UClass*> IgnoreSpellList; // 0x980
    float MinimumObjectVelocity; // 0x990
    float DoubleHitIgnoreTime; // 0x994
    TArray<UMultiFX2_Base*> ProtegoActivateFX2; // 0x998
    TArray<UMultiFX2_Base*> ProtegoMuzzleLoopFX2; // 0x9a8
    float ProtegoLoopFxDelay; // 0x9b8
    float ProtegoLoopFxDelayAfterHit; // 0x9bc
    float MinActiveTimeToPlayDeactivate; // 0x9c0
    char pad_9c4[0x4];
    TArray<UMultiFX2_Base*> ProtegoLoopFX2; // 0x9c8
    TArray<UMultiFX2_Base*> ProtegoWeakenFX2; // 0x9d8
    char pad_9e8[0xa0];
    TArray<UMultiFX2_Base*> ProtegoDeactivateFX2; // 0xa88
    TArray<FProtegoEffectsData> DWShieldEffectData; // 0xa98
    TArray<UMultiFX2_Base*> ShieldHitFX2; // 0xaa8
    FGameplayTag ProtegoFaceOriginatorTag; // 0xab8
    float NoDeactivateTime; // 0xac0
    float SustainedBlastEndTime; // 0xac4
    int32_t PerfectBounceBackPercent; // 0xac8
    int32_t PerfectTargetEnemyPercent; // 0xacc
    int32_t PerfectTargetObjectPercent; // 0xad0
    int32_t PerfectRandomPercent; // 0xad4
    FGameplayTagContainer PerfectMunitionTagContainer; // 0xad8
    UInteractionArchitectAsset* PerfectMunitionDataAsset; // 0xaf8
    FGameplayTagContainer PerfectAOEMunitionTagContainer; // 0xb00
    UInteractionArchitectAsset* PerfectAOEMunitionDataAsset; // 0xb20
    TArray<UMultiFX2_Base*> PerfectFX2; // 0xb28
    UAkAudioEvent* PerfectMotionFX; // 0xb38
    UCurveFloat* PerfectTimeDilationCurve; // 0xb40
    float PerfectDeflectDelay; // 0xb48
    int32_t NormalBounceBackPercent; // 0xb4c
    int32_t NormalTargetEnemyPercent; // 0xb50
    int32_t NormalTargetObjectPercent; // 0xb54
    int32_t NormalRandomPercent; // 0xb58
    char pad_b5c[0x4];
    FGameplayTagContainer NormalMunitionTagContainer; // 0xb60
    UInteractionArchitectAsset* NormalMunitionDataAsset; // 0xb80
    UCurveFloat* NormalTimeDilationCurve; // 0xb88
    float NormalDeflectDelay; // 0xb90
    char pad_b94[0x4];
    TArray<UMultiFX2_Base*> NormalFX2; // 0xb98
    UAkAudioEvent* NormalMotionFX; // 0xba8
    TArray<UMultiFX2_Base*> FailedFX2; // 0xbb0
    float DeflectDistance; // 0xbc0
    float DeflectHalfAngleXY; // 0xbc4
    float DeflectLaunchAngle; // 0xbc8
    float DeflectDelay; // 0xbcc
    float ObjectDamageRandomBlock; // 0xbd0
    float DestroyedObjectBlockForce; // 0xbd4
    float PerkIncreasedDeflectionScale; // 0xbd8
    float PerkWeakessTime; // 0xbdc
    TArray<UMultiFX2_Base*> DeflectedMunitionFX2; // 0xbe0
    UAkAudioEvent* DeflectedMunitionMotionFX; // 0xbf0
    UAkAudioEvent* DeflectedCharacterMotionFX; // 0xbf8
    float DeflectedMaxCharacterDamage; // 0xc00
    float DeflectedMaxObjectDamage; // 0xc04
    float ShieldBreakDamageScale; // 0xc08
    FGameplayTag ShieldBreakTag; // 0xc0c
    char pad_c14[0x4];
    UClass* CameraShake; // 0xc18
    float InnerRadius; // 0xc20
    float OuterRadius; // 0xc24
    float Falloff; // 0xc28
    uint8_t bOrientShakeTowardsEpicenter : 1; // 0xc2c
    uint8_t pad_bitfield_c2c_1 : 7;
    char pad_c2d[0x3];
    float ProtegoMeleeCooldown; // 0xc30
    char pad_c34[0x4];
    UClass* AOEMunition; // 0xc38
    float DisabledProtegoTime; // 0xc40
    float InstantKillBounceChance; // 0xc44
    float InstantKillBounceAngle; // 0xc48
    float InstantKillBounceAngleVariance; // 0xc4c
    float InstantKillBounceDeflectionSpeedMultiplier; // 0xc50
    char pad_c54[0x4];
    UAkAudioEvent* InstantKillAkEvent; // 0xc58
    float OppugnoObjectSpeed; // 0xc60
    float OppugnoObjectMaxWobble; // 0xc64
    float OppugnoObjectAwayRotSpeed; // 0xc68
    float OppugnoObjectRandLeftRightAngle; // 0xc6c
    float OppugnoMinAngle; // 0xc70
    float OppugnoMaxAngle; // 0xc74
    FMultiFX2Handle LoopDWFX2Handle; // 0xc78
    FMultiFX2Handle IntensityFXHandle2; // 0xc80
    FMultiFX2Handle ActivateDWFX2Handle; // 0xc88
    FMultiFX2Handle WandDWFX2Handle; // 0xc90
    FMultiFX2Handle ShieldHitFX2Handle; // 0xc98
    FName ShieldSkinEffectName; // 0xca0
    AActor* ProtegoActor; // 0xca8
    AMunitionType_Base* IgnoreMunition; // 0xcb0
    char pad_cb8[0xf8];
    static AProtegoSpellTool* StaticClass();
    bool WasParryAbilityEventSent();
    void UpdateShieldEffects();
    void TurnOnProtegoEffects(bool bInShowActivateEffect, bool bInShowLoopEffect, int32_t InEffectIdx);
    void TurnOffProtegoEffects(bool bInShowDeactivateEffect, int32_t InEffectIdx);
    void StateChanged(bool bInHideShield);
    void StartShieldSkinEffects();
    void StartShieldEffects();
    void ShutOffProtegoTimerExpired();
    bool ShouldShieldBeOn();
    void QueueParryTimerExpired();
    void ParryWindowStackChanged(int32_t NewValue);
    void OnDeflectedAttack(FDamageResult& DamageResult);
    bool IsDisabled();
    void Hit(FHitResult& HitResult, AMunitionType_Base* MunitionInstance, AActor* HitObject, UPrimitiveComponent* OverlappedComp, bool bUnblockable, bool bOverlap, bool bMunitionImpact);
    void HideProtego(bool bInHide);
    float GetProtegoShieldIntensityValue();
    AActor* GetLastInstigator();
    AActor* GetAttackingActor();
    void EndShieldSkinEffects();
    void EndShieldEffects();
    bool CreateLinkToAttackingActor();
}; // Size: 0xdb0
#pragma pack(pop)
