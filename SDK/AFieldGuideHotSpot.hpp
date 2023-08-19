#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCognitionStimuliSourceComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UBTService_AvaAITree;
#pragma pack(push, 1)
class AFieldGuideHotSpot : public AActor {
public:
    char pad_248[0x10];
    bool bDebugDraw; // 0x258
    char pad_259[0x3];
    float HotSpotHeightAllowed; // 0x25c
    float OuterRadius; // 0x260
    float MinOuterRadiusRatio; // 0x264
    bool bInsideOuterRadius; // 0x268
    bool bInsideCollision; // 0x269
    char pad_26a[0x2];
    float HotSpotRadius; // 0x26c
    float HotSpotRumbleDeadZone; // 0x270
    bool bInsideHotSpotRadius; // 0x274
    bool bHotSpotActive; // 0x275
    char pad_276[0x32];
    UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x2a8
    char pad_2b0[0x8];
    UNiagaraComponent* VFXPulseComponent; // 0x2b8
    bool bPageCollected; // 0x2c0
    char pad_2c1[0xf];
    static AFieldGuideHotSpot* StaticClass();
    void UpdateVFX(float AngleRatio, float DistanceRatio);
    void UpdateOuterRadius(float AngleRatio, float DistanceRatio);
    void UpdateHotSpotRadius();
    void UpdateHotSpot();
    void StartVFX(UNiagaraSystem* InAsset);
    void SetRevealed();
    void RevealedByRevelio();
    void PlayerIsInHotSpot(AActor* InPlayerActor, bool bInHotSpot);
    void PageCollected();
    void NovaComplete();
    void Log(FString InLogString);
    bool IsRevealed();
    void Interact(UBTService_AvaAITree* AvaService);
    void HintedByRevelio(bool bWasHintedAt);
    void ExitedOuterRadius();
    void ExitedHotSpotRadius();
    void EnteredOuterRadius();
    void EnteredHotSpotRadius();
    void DestroyVFX();
    void DeactivateHotSpot();
    void ClearRevealed();
    void ActivateHotSpot();
}; // Size: 0x2d0
#pragma pack(pop)
