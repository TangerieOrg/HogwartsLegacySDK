#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#include "ECaptureState.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FGameplayTagContainer.hpp"
class UClass;
class UAkAudioEvent;
class ABiped_Player;
class USkinnedMeshComponent;
class UCapturingWidget;
class AActor;
#pragma pack(push, 1)
class ACaptureDeviceItemTool : public AInventoryItemTool {
public:
    UClass* WidgetClass; // 0x430
    float PerceptionNoiseEventLoudness; // 0x438
    float PerceptionNoiseEventMaxRange; // 0x43c
    bool TriggersSight; // 0x440
    bool TriggersHearing; // 0x441
    ETargetSpeedMode::Type UsingToolSpeedMode; // 0x442
    char pad_443[0x1];
    float GracePeriodTime; // 0x444
    UAkAudioEvent* BeastCapture_MusicStartEvent; // 0x448
    UAkAudioEvent* BeastCapture_MusicStopEvent; // 0x450
    UAkAudioEvent* BeastCapture_SuccessStingerEvent; // 0x458
    FGameplayTagContainer ReactionTagContainer; // 0x460
    char pad_480[0x8];
    ECaptureState CurrentCaptureState; // 0x488
    char pad_489[0x7];
    ABiped_Player* BipedPlayer; // 0x490
    char pad_498[0x4];
    float CurrentDistance; // 0x49c
    char pad_4a0[0x8];
    UCapturingWidget* CaptureWidget; // 0x4a8
    bool bEnableIntermediateGates; // 0x4b0
    char pad_4b1[0x23f];
    FName OutOfRangeTutorialStat; // 0x6f0
    FName OutOfRangeTutorial; // 0x6f8
    static ACaptureDeviceItemTool* StaticClass();
    void PlayCaptureStinger();
    void OnConfirmCapture();
    void OnCompletedGate(bool bIsFinalGate);
    void OnCaptureStateChanged(ECaptureState PreviousState, ECaptureState NewState);
    void OnCancelCapture();
    bool IsTargetConsideredLarge();
    void InvalidateCachedMeshBounds(USkinnedMeshComponent* InMeshComponent);
    int32_t GetTotalNumGates();
    AActor* GetTargetActor();
    float GetProgressTowardNextGate();
    int32_t GetNumGatesPassed();
    float GetMaxCapturingDistance();
    bool GetIsGateActive();
    float GetCapturingProgress();
    void FinishSucceeding();
    void FinishCancelling();
    void BeginCapturing();
}; // Size: 0x700
#pragma pack(pop)
