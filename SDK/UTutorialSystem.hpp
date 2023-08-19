#pragma once
#include <cstdint>
#include "FNewTutorialInfo.hpp"
#include "FNewTutorialSequence.hpp"
#include "UObject.hpp"
class UDataTable;
class UTexture2D;
class UTutorialScreen;
class UPhoenixUserWidget;
#pragma pack(push, 1)
class UTutorialSystem : public UObject {
public:
    char pad_28[0xf0];
    UDataTable* TutorialDataTable; // 0x118
    FNewTutorialInfo CurrentTutorialStepData; // 0x120
    FNewTutorialSequence CurrentTutorialData; // 0x230
    UTutorialScreen* CurrentTutorialScreen; // 0x2a8
    char pad_2b0[0x90];
    static UTutorialSystem* StaticClass();
    void ZoomLowerHogsfield(UObject* sender);
    void UnpauseTutorialQueue(FString Context);
    bool TutorialsAvailable();
    void StopCallAttentionToAnnex(UObject* sender);
    bool StartTutorialStepExpiryTimerByAlias(FName TutorialName, FName TutorialStepAlias);
    bool StartTutorialStepExpiryTimer(FName TutorialName, int32_t TutorialStep);
    bool StartTutorial(FName TutorialName, bool AfterNotifications);
    void StartNextTutorial();
    void SetZZDActivate(UObject* sender);
    void SetupMapTutorials(UObject* sender);
    void SetupMapIconsForOverlandTutorial(UObject* sender);
    void SetupMapFastTravelTutorial(UObject* sender);
    void ResetMapFastTravelTutorial(UObject* sender);
    void ResetMap(UObject* sender);
    void PreLoadTutorial(FName TutorialName);
    void PauseTutorialQueue(FString Context);
    void OverlandZoomOut(UObject* sender);
    void OverlandZoomIn(UObject* sender);
    void OnTutorialImageLoaded(UTexture2D* Texture, UObject* Param);
    void OnSaveGameLoaded();
    void OnMissionFailedScreenLoaded(UObject* sender);
    void OnIntroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    void OnGameToBeSaved();
    void OnCurrentScreenOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    bool IsTutorialStepActiveOrAboutToBeByAlias(FName TutorialName, FName TutorialStepAlias);
    bool IsTutorialStepActiveOrAboutToBe(FName TutorialName, int32_t TutorialStep);
    bool IsTutorialStepActiveByAlias(FName TutorialName, FName TutorialStepAlias);
    bool IsTutorialStepActive(FName TutorialName, int32_t TutorialStep);
    bool IsTutorialQueuePaused();
    bool IsTutorialQueued(FName TutorialName);
    bool IsTutorialActiveOrAboutToBe(FName TutorialName);
    bool IsTutorialActive(FName TutorialName);
    bool IsModalTutorialQueued();
    bool IsCurrentTutorialActive();
    bool IsAnyTutorialQueued();
    void HighlightCharmsClass(UObject* sender);
    void HideLivingQuarters(UObject* sender);
    void HermesStartNextTutorial();
    bool GetInitialTutorialStepInProgress();
    static UTutorialSystem* Get();
    bool ForceCompleteTutorial(FName TutorialName, bool DontFireCompletionMessages);
    void CompleteTutorialStepInternal();
    bool CompleteTutorialStepByAlias(FName TutorialName, FName TutorialStepAlias);
    bool CompleteTutorialStep(FName TutorialName, int32_t TutorialStep);
    bool CompleteTutorialCurrentStep(FName TutorialName);
    void ClosePauseMenu(UObject* sender);
    void ClearTutorialCacheByName(FName TutorialName);
    void ClearTutorialCache();
    void CallAttentionToAnnex(UObject* sender);
    void BackOutOfRegion(UObject* sender);
    void AllowTravelToAnnex(UObject* sender);
    bool AbortTutorial(FName TutorialName, bool bInstant);
    void AbortQueuedTutorials(UObject* sender);
}; // Size: 0x340
#pragma pack(pop)
