#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EWandLinkResult.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPerPlatformInt.hpp"
#include "FVector2D.hpp"
#include "FWandLinkStage.hpp"
class UActorProvider;
class UAkAudioEvent;
class UNiagaraSystem;
class UInteractionArchitectAsset;
class UMultiFX2_Base;
class UClass;
class AWandLinkProjectile;
class UNiagaraComponent;
class UObject;
class UWandLinkKillBystander;
#pragma pack(push, 1)
class AWandLinkObject : public AActor {
public:
    UActorProvider* ProtagonistProvider; // 0x248
    UActorProvider* AntagonistProvider; // 0x250
    UActorProvider* TeleportLocation1; // 0x258
    UActorProvider* TeleportLocation2; // 0x260
    float UIRenderScale; // 0x268
    float DamageToPlayerOnFailPct; // 0x26c
    UNiagaraSystem* ProtagonistMuzzleFX; // 0x270
    UNiagaraSystem* ProtagonistProjectileFX; // 0x278
    TArray<UMultiFX2_Base*> ProtagonistBeamFX2; // 0x280
    UNiagaraSystem* ProtagonistNudgeFX; // 0x290
    UNiagaraSystem* ProtagonistSuccessFX; // 0x298
    UNiagaraSystem* AntagonistMuzzleFX; // 0x2a0
    UNiagaraSystem* AntagonistProjectileFX; // 0x2a8
    TArray<UMultiFX2_Base*> AntagonistBeamFX2; // 0x2b0
    UNiagaraSystem* AntagonistNudgeFX; // 0x2c0
    UNiagaraSystem* AntagonistSuccessFX; // 0x2c8
    TArray<UMultiFX2_Base*> BystanderBeamFX2; // 0x2d0
    float BystanderBeamTime; // 0x2e0
    char pad_2e4[0x4];
    FGameplayTagContainer ZapBystanderMunitionTags; // 0x2e8
    float ZapForce; // 0x308
    float ZapMiscTimeMin; // 0x30c
    float ZapMiscTimeMax; // 0x310
    float ZapTerrainChance; // 0x314
    FVector2D ZapTerrainRange; // 0x318
    float ZapTerrainZ; // 0x320
    char pad_324[0x4];
    UInteractionArchitectAsset* InitialClashMunitionDataAssets; // 0x328
    float InitialClashDistance_Close; // 0x330
    char pad_334[0x4];
    FGameplayTagContainer InitialClashMunitionTags_Close; // 0x338
    float InitialClashForce_Close_Inner; // 0x358
    float InitialClashForce_Close_Outer; // 0x35c
    float InitialClashDamagePct_Close; // 0x360
    float InitialClashDistance_Med; // 0x364
    FGameplayTagContainer InitialClashMunitionTags_Med; // 0x368
    float InitialClashForce_Med_Inner; // 0x388
    float InitialClashForce_Med_Outer; // 0x38c
    float InitialClashDamagePct_Med; // 0x390
    float InitialClashDistance_Far; // 0x394
    FGameplayTagContainer InitialClashMunitionTags_Far; // 0x398
    float InitialClashForce_Far; // 0x3b8
    float InitialClashDamagePct_Far; // 0x3bc
    UNiagaraSystem* ClashVFX; // 0x3c0
    UAkAudioEvent* ClashStartSFXEvent; // 0x3c8
    UAkAudioEvent* LinkLoopSFXEvent; // 0x3d0
    UAkAudioEvent* LinkLoopEndSFXEvent; // 0x3d8
    UAkAudioEvent* LightningBoltSFXEvent; // 0x3e0
    UAkAudioEvent* ClashExplodeSFXEvent; // 0x3e8
    UAkAudioEvent* LightningBoltMotionFXEvent; // 0x3f0
    FName ProtagonistWandTipSocket; // 0x3f8
    FName AntagonistWandTipSocket; // 0x400
    float ProjectileSpeed; // 0x408
    char pad_40c[0x4];
    UClass* ClashCameraShake; // 0x410
    UClass* KillBystandersMunition; // 0x418
    FPerPlatformInt SimpleBlowBystanders; // 0x420
    char pad_424[0x4];
    TArray<FWandLinkStage> WandLinkStages; // 0x428
    TArray<AActor*> BlowBystanders; // 0x438
    TArray<UInteractionArchitectAsset*> LastMunitionDataAssets; // 0x448
    char pad_458[0x40];
    AWandLinkProjectile* ProtagonistProjectile; // 0x498
    AWandLinkProjectile* AntagonistProjectile; // 0x4a0
    UNiagaraComponent* ProtagonistMuzzle; // 0x4a8
    UNiagaraComponent* AntagonistMuzzle; // 0x4b0
    UNiagaraComponent* VFXComponent; // 0x4b8
    UObject* LastCaller; // 0x4c0
    TArray<UWandLinkKillBystander*> KillBystanderArray; // 0x4c8
    char pad_4d8[0x90];
    static AWandLinkObject* StaticClass();
    void WandLinkStarted();
    void WandLinkInputSuccess();
    void WandLinkInputFail();
    void WandLinkInitialized();
    void WandLinkEnded();
    bool GetUIHidden();
    AActor* GetProtagonist();
    EWandLinkResult GetLethal();
    int32_t GetCurrentStage();
    float GetCurrentRatio();
    AActor* GetAntagonist();
    void Event_WandLinkSuspend(UObject* Caller);
    void Event_WandLinkSuccessFX(UObject* Caller);
    void Event_WandLinkStop(UObject* Caller);
    void Event_WandLinkStart(UObject* Caller);
    void Event_WandLinkKillBystanders(UObject* Caller, float KillPct);
    void Event_WandLinkInitialize(UObject* Caller);
    void Event_WandLinkGameOver(UObject* Caller);
    void Event_WandLinkForward(UObject* Caller);
    void Event_WandLinkFailFX(UObject* Caller);
    void Event_WandLinkDefend(UObject* Caller);
    void Event_WandLinkBackward(UObject* Caller);
    void Event_WandLinkAdvanceStage(UObject* Caller);
    void Event_TeleportLocation2(UObject* Caller);
    void Event_TeleportLocation1(UObject* Caller);
}; // Size: 0x568
#pragma pack(pop)
