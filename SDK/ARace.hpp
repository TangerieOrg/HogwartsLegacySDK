#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ERaceType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FDialogueConversationReference.hpp"
#include "FRacerTime.hpp"
class USplineComponent;
class USceneComponent;
class UPopupScreen;
class ARaceGate;
class UObject;
class UInventoryItemToolRecord;
class AFlyingBroom;
#pragma pack(push, 1)
class ARace : public AActor {
public:
    USplineComponent* SplineComponent; // 0x248
    USceneComponent* TrackGatesParent; // 0x250
    USceneComponent* EndGateParent; // 0x258
    TArray<ARaceGate*> SpawnedGates; // 0x260
    char pad_270[0xd0];
    int32_t CountdownTime; // 0x340
    char pad_344[0x4];
    int32_t TimePenaltySeconds; // 0x348
    char pad_34c[0x3c];
    bool bKeepPlayerCloseToSpline; // 0x388
    char pad_389[0x3];
    int32_t MaxDistanceFromSpline; // 0x38c
    int32_t MaxDistancePastRing; // 0x390
    char pad_394[0x1c];
    ERaceType RaceType; // 0x3b0
    char pad_3b1[0x2f];
    FDbSingleColumnInfo RaceId; // 0x3e0
    FDbSingleColumnInfo FastTravelLocation; // 0x468
    char pad_4f0[0x28];
    TArray<FDialogueConversationReference> GateSuccessDialogueEvents; // 0x518
    float GateSuccessDialoguePercentageChance; // 0x528
    float GateSuccessDialogueCooldown; // 0x52c
    char pad_530[0x10];
    TArray<FDialogueConversationReference> GateMissDialogueEvents; // 0x540
    float GateMissDialoguePercentageChance; // 0x550
    float GateMissDialogueCooldown; // 0x554
    char pad_558[0x10];
    TArray<FDialogueConversationReference> TurboBubbleDialogueEvents; // 0x568
    float TurboBubbleDialoguePercentageChance; // 0x578
    float TurboBubbleDialogueCooldown; // 0x57c
    char pad_580[0x18];
    TArray<FDialogueConversationReference> WinRaceDialogueEvents; // 0x598
    TArray<FDialogueConversationReference> LoseRaceDialogueEvents; // 0x5a8
    FName RaceBeatImeldaLockID; // 0x5b8
    FName RaceAttemptedLockID; // 0x5c0
    FName AttemptsStatName; // 0x5c8
    int32_t StoryModeRaceAttempts; // 0x5d0
    char pad_5d4[0x4];
    static ARace* StaticClass();
    void RaceHudDismissed();
    void OnStoryModeSkipScreenDismissed(UPopupScreen* Popup, int32_t ConfirmationResult);
    void OnRaceStart();
    void OnRaceFinish();
    void OnRaceAbandoned();
    void OnEndOfRaceFTComplete();
    void OnCollectTurboBubble(UObject* i_caller);
    void ItemToolLoadedCallback(UInventoryItemToolRecord* ToolRecord);
    bool IsRaceMissionActive();
    bool IsNewBestTime();
    static float GetTotalRaceTime(TArray<float>& Times);
    float GetTotalPenaltyTime();
    float GetTimeElapsed();
    bool GetRacerBestTime(FName InRacerName, bool bMissionRelevant, float& OutBestTime);
    FString GetRaceID();
    AFlyingBroom* GetPlayerBroom();
    int32_t GetNumberOfGates();
    float GetGatePrevBestTime(int32_t GateNumber);
    FName GetBestRacer_Blueprint(bool bMissionRelevant, float& OutBestTime);
    TArray<FRacerTime> GetAllRacerTimes(bool bMissionRelevant);
}; // Size: 0x5d8
#pragma pack(pop)
