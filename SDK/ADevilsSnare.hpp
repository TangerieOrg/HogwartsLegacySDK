#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EDevilsSnareState.hpp"
#include "FDevilsSnareInfo.hpp"
#include "FDevilsSnareLumosReact.hpp"
#include "FGameplayTagContainer.hpp"
class UStaticMeshComponent;
class UMultiFX2_Base;
class UInteractionArchitectAsset;
class USphereComponent;
class UCurveFloat;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;
#pragma pack(push, 1)
class ADevilsSnare : public AActor {
public:
    UStaticMeshComponent* StaticMeshComponent; // 0x248
    TArray<FDevilsSnareInfo> DevilsSnareInfo; // 0x250
    int32_t TypeIndex; // 0x260
    bool bCanAffectPlayer; // 0x264
    bool bStartsHidden; // 0x265
    char pad_266[0x2];
    float DamagePerSecond; // 0x268
    float RecoilPercentForLumos; // 0x26c
    TArray<FDevilsSnareLumosReact> RecoilForLumos; // 0x270
    float RecoilPercentForIncendio; // 0x280
    float RecoilPercentForConfringo; // 0x284
    float RecoilPercentForAvadaKedavra; // 0x288
    float FireRecoilDistance; // 0x28c
    float GrowBackSpeed; // 0x290
    float RevealTime; // 0x294
    float TimeBeforeRegrowing; // 0x298
    float IncreaseRadiusForLightAndFireCheck; // 0x29c
    FGameplayTagContainer ReactionTags; // 0x2a0
    TArray<UInteractionArchitectAsset*> ReactionInteractionArchitectAssets; // 0x2c0
    float DodgeInterpolatePercent; // 0x2d0
    float MinPlayerSpeed; // 0x2d4
    UCurveFloat* CurvePlayerSpeedReductionPerSecond; // 0x2d8
    bool PlayerDiesOnMinSpeedReached; // 0x2e0
    char pad_2e1[0x7];
    TArray<UMultiFX2_Base*> AffectedFX2; // 0x2e8
    float CurrentPercent; // 0x2f8
    EDevilsSnareState CurrentState; // 0x2fc
    char pad_2fd[0x3];
    float ActualGrowthPercent; // 0x300
    bool bPlayerIsUsingLumos; // 0x304
    char pad_305[0x3];
    TArray<AActor*> ActorsInArea; // 0x308
    TArray<AActor*> ActorsInAreaForLightAndFire; // 0x318
    char pad_328[0x20];
    USphereComponent* LightAndFireCheckVolumeComponent; // 0x348
    UBoxComponent* AreaOfEffectVolumeComponent; // 0x350
    char pad_358[0x4c];
    bool bOverrideBounds; // 0x3a4
    char pad_3a5[0x33];
    static ADevilsSnare* StaticClass();
    void UpdateMeshMaterial();
    void StopRecoiling();
    void StartRecoil(float RecoilPercent);
    void Reveal();
    void PlayerLumosStart();
    void PlayerLumosEnd();
    void OnOverlapEndForLightAndFire(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBeginForLightAndFire(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void HitBySpell(float RecoilPercent);
    void DodgeStop(AActor* InPlayer);
    void DelayedSetup();
}; // Size: 0x3d8
#pragma pack(pop)
