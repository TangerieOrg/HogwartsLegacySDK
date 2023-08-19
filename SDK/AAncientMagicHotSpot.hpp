#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UObject;
class UNiagaraComponent;
class UNiagaraSystem;
class UBTService_AvaAITree;
#pragma pack(push, 1)
class AAncientMagicHotSpot : public AActor {
public:
    char pad_248[0x8];
    bool bDebugDraw; // 0x250
    char pad_251[0x3];
    float HotSpotHeightAllowed; // 0x254
    float OuterRadiusMaxAngle; // 0x258
    float OuterRadiusActiveMaxAngle; // 0x25c
    bool bOuterAngleUseCameraFacing; // 0x260
    char pad_261[0x3];
    float OuterAngleRatioInterpToSpeed; // 0x264
    float OuterAngleRatioInterpOutSpeed; // 0x268
    float OuterRadius; // 0x26c
    float MinOuterAngleRatio; // 0x270
    float MinOuterRadiusRatio; // 0x274
    bool bInsideOuterRadius; // 0x278
    bool bInsideCollision; // 0x279
    char pad_27a[0x2];
    float InnerRadiusMaxAngle; // 0x27c
    bool bInnerAngleUseCameraFacing; // 0x280
    char pad_281[0x3];
    float InnerAngleRatioInterpToSpeed; // 0x284
    float InnerAngleRatioInterpOutSpeed; // 0x288
    float InnerRadius; // 0x28c
    float ExitInnerRadius; // 0x290
    float MinInnerAngleRatio; // 0x294
    float MinInnerRadiusRatio; // 0x298
    bool bInsideInnerRadius; // 0x29c
    char pad_29d[0x3];
    float HotSpotRadius; // 0x2a0
    float HotSpotRumbleDeadZone; // 0x2a4
    bool bInsideHotSpotRadius; // 0x2a8
    bool bUseDiscoverAbility; // 0x2a9
    bool bHotSpotActive; // 0x2aa
    bool bTriggerAOEMunition; // 0x2ab
    int32_t NumberOfUses; // 0x2ac
    float Cooldown; // 0x2b0
    char pad_2b4[0x34];
    UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x2e8
    char pad_2f0[0x8];
    UNiagaraComponent* VFXPulseComponent; // 0x2f8
    char pad_300[0x28];
    static AAncientMagicHotSpot* StaticClass();
    void UpdateVFX(float AngleRatio, float DistanceRatio);
    void UpdateOuterRadius(float AngleRatio, float DistanceRatio);
    void UpdateInnerRadius(float AngleRatio, float Ratio);
    void UpdateHotSpotRadius();
    void UpdateHotSpot();
    void UnHide();
    void TrackFootPlants();
    void StopTrackingFootPlants();
    void StartVFX(UNiagaraSystem* InAsset);
    void Reactivate();
    void PlayerIsInHotSpot(AActor* InPlayerActor, bool bInHotSpot);
    void NovaComplete();
    void LogList(TArray<AActor*>& LogActorList, FString HeaderInfo, FString PerActorInfo, FString PerActorExtraInfo);
    void Log(FString Info, UObject* LogObjectName, FString ExtraInfo);
    bool IsHotspotBeingForcedActive();
    void Interact(UBTService_AvaAITree* AvaService);
    void HotSpotWasForcedInactive();
    void HotSpotWasForcedActive();
    void HideRevealOBJ();
    void HideHideOBJ();
    static void GetLoggingIsEnabled(bool& bLoggingIsEnabled);
    void ForceDeactivateHotSpot();
    void ForceActivateHotSpot(AActor* InPlayerActor, float InRadiiMultiplier, float InHeightMultiplier);
    void FootPlantOccurred(FVector FootLocation, FRotator FootRotator);
    void FireWand();
    void ExitedOuterRadius();
    void ExitedInnerRadius();
    void ExitedHotSpotRadius();
    void EnteredOuterRadius();
    void EnteredInnerRadius();
    void EnteredHotSpotRadius();
    void EnableInteract();
    void Done(bool DeactivateHotSpot);
    void DestroyVFX();
    void DeactivateHotSpot();
    void ActivateHotSpot();
}; // Size: 0x328
#pragma pack(pop)
