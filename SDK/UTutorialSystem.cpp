#include "FNewTutorialInfo.hpp"
#include "FNewTutorialSequence.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UTutorialScreen.hpp"
#include "UTutorialSystem.hpp"
void UTutorialSystem::CallAttentionToAnnex(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.CallAttentionToAnnex"));
    struct Params_CallAttentionToAnnex {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_CallAttentionToAnnex params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::StopCallAttentionToAnnex(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.StopCallAttentionToAnnex"));
    struct Params_StopCallAttentionToAnnex {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_StopCallAttentionToAnnex params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
UTutorialSystem* UTutorialSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TutorialSystem");
    return (UTutorialSystem*)res;
}
bool UTutorialSystem::CompleteTutorialStep(FName TutorialName, int32_t TutorialStep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.CompleteTutorialStep"));
    struct Params_CompleteTutorialStep {
        FName TutorialName; // 0x0
        int32_t TutorialStep; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_CompleteTutorialStep params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStep = (int32_t)TutorialStep;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::IsModalTutorialQueued() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsModalTutorialQueued"));
    struct Params_IsModalTutorialQueued {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsModalTutorialQueued params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::StartTutorialStepExpiryTimerByAlias(FName TutorialName, FName TutorialStepAlias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.StartTutorialStepExpiryTimerByAlias"));
    struct Params_StartTutorialStepExpiryTimerByAlias {
        FName TutorialName; // 0x0
        FName TutorialStepAlias; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartTutorialStepExpiryTimerByAlias params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStepAlias = (FName)TutorialStepAlias;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::ZoomLowerHogsfield(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ZoomLowerHogsfield"));
    struct Params_ZoomLowerHogsfield {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_ZoomLowerHogsfield params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::ResetMapFastTravelTutorial(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ResetMapFastTravelTutorial"));
    struct Params_ResetMapFastTravelTutorial {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_ResetMapFastTravelTutorial params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::TutorialsAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.TutorialsAvailable"));
    struct Params_TutorialsAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TutorialsAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::IsTutorialQueuePaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialQueuePaused"));
    struct Params_IsTutorialQueuePaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTutorialQueuePaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::UnpauseTutorialQueue(FString Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.UnpauseTutorialQueue"));
    struct Params_UnpauseTutorialQueue {
        FString Context; // 0x0
    }; // Size: 0x10
    Params_UnpauseTutorialQueue params{};
    params.Context = (FString)Context;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::StartTutorialStepExpiryTimer(FName TutorialName, int32_t TutorialStep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.StartTutorialStepExpiryTimer"));
    struct Params_StartTutorialStepExpiryTimer {
        FName TutorialName; // 0x0
        int32_t TutorialStep; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartTutorialStepExpiryTimer params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStep = (int32_t)TutorialStep;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::PauseTutorialQueue(FString Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.PauseTutorialQueue"));
    struct Params_PauseTutorialQueue {
        FString Context; // 0x0
    }; // Size: 0x10
    Params_PauseTutorialQueue params{};
    params.Context = (FString)Context;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::StartTutorial(FName TutorialName, bool AfterNotifications) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.StartTutorial"));
    struct Params_StartTutorial {
        FName TutorialName; // 0x0
        bool AfterNotifications; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_StartTutorial params{};
    params.TutorialName = (FName)TutorialName;
    params.AfterNotifications = (bool)AfterNotifications;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::StartNextTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.StartNextTutorial"));
    struct Params_StartNextTutorial {
    }; // Size: 0x0
    Params_StartNextTutorial params{};
    ProcessEvent(func, &params);
}
void UTutorialSystem::SetZZDActivate(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.SetZZDActivate"));
    struct Params_SetZZDActivate {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_SetZZDActivate params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::SetupMapTutorials(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.SetupMapTutorials"));
    struct Params_SetupMapTutorials {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_SetupMapTutorials params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::SetupMapIconsForOverlandTutorial(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.SetupMapIconsForOverlandTutorial"));
    struct Params_SetupMapIconsForOverlandTutorial {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_SetupMapIconsForOverlandTutorial params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::SetupMapFastTravelTutorial(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.SetupMapFastTravelTutorial"));
    struct Params_SetupMapFastTravelTutorial {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_SetupMapFastTravelTutorial params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::ResetMap(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ResetMap"));
    struct Params_ResetMap {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_ResetMap params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::IsTutorialQueued(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialQueued"));
    struct Params_IsTutorialQueued {
        FName TutorialName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsTutorialQueued params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::PreLoadTutorial(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.PreLoadTutorial"));
    struct Params_PreLoadTutorial {
        FName TutorialName; // 0x0
    }; // Size: 0x8
    Params_PreLoadTutorial params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
}
void UTutorialSystem::OverlandZoomOut(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OverlandZoomOut"));
    struct Params_OverlandZoomOut {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_OverlandZoomOut params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::OverlandZoomIn(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OverlandZoomIn"));
    struct Params_OverlandZoomIn {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_OverlandZoomIn params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
UTutorialSystem* UTutorialSystem::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.Get"));
    struct Params_Get {
        UTutorialSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTutorialSystem*)params.ReturnValue;
}
bool UTutorialSystem::IsTutorialStepActiveOrAboutToBeByAlias(FName TutorialName, FName TutorialStepAlias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialStepActiveOrAboutToBeByAlias"));
    struct Params_IsTutorialStepActiveOrAboutToBeByAlias {
        FName TutorialName; // 0x0
        FName TutorialStepAlias; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTutorialStepActiveOrAboutToBeByAlias params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStepAlias = (FName)TutorialStepAlias;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::OnTutorialImageLoaded(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnTutorialImageLoaded"));
    struct Params_OnTutorialImageLoaded {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_OnTutorialImageLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::IsCurrentTutorialActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsCurrentTutorialActive"));
    struct Params_IsCurrentTutorialActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCurrentTutorialActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UTutorialSystem::OnMissionFailedScreenLoaded(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnMissionFailedScreenLoaded"));
    struct Params_OnMissionFailedScreenLoaded {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_OnMissionFailedScreenLoaded params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::IsTutorialStepActiveOrAboutToBe(FName TutorialName, int32_t TutorialStep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialStepActiveOrAboutToBe"));
    struct Params_IsTutorialStepActiveOrAboutToBe {
        FName TutorialName; // 0x0
        int32_t TutorialStep; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsTutorialStepActiveOrAboutToBe params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStep = (int32_t)TutorialStep;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::OnIntroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnIntroEnded"));
    struct Params_OnIntroEnded {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnIntroEnded params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UTutorialSystem::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UTutorialSystem::OnCurrentScreenOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.OnCurrentScreenOutroEnded"));
    struct Params_OnCurrentScreenOutroEnded {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnCurrentScreenOutroEnded params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::IsTutorialStepActiveByAlias(FName TutorialName, FName TutorialStepAlias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialStepActiveByAlias"));
    struct Params_IsTutorialStepActiveByAlias {
        FName TutorialName; // 0x0
        FName TutorialStepAlias; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTutorialStepActiveByAlias params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStepAlias = (FName)TutorialStepAlias;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::IsTutorialStepActive(FName TutorialName, int32_t TutorialStep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialStepActive"));
    struct Params_IsTutorialStepActive {
        FName TutorialName; // 0x0
        int32_t TutorialStep; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_IsTutorialStepActive params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStep = (int32_t)TutorialStep;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::IsTutorialActiveOrAboutToBe(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialActiveOrAboutToBe"));
    struct Params_IsTutorialActiveOrAboutToBe {
        FName TutorialName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsTutorialActiveOrAboutToBe params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::CompleteTutorialStepInternal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.CompleteTutorialStepInternal"));
    struct Params_CompleteTutorialStepInternal {
    }; // Size: 0x0
    Params_CompleteTutorialStepInternal params{};
    ProcessEvent(func, &params);
}
bool UTutorialSystem::IsTutorialActive(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsTutorialActive"));
    struct Params_IsTutorialActive {
        FName TutorialName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsTutorialActive params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::GetInitialTutorialStepInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.GetInitialTutorialStepInProgress"));
    struct Params_GetInitialTutorialStepInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInitialTutorialStepInProgress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::IsAnyTutorialQueued() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.IsAnyTutorialQueued"));
    struct Params_IsAnyTutorialQueued {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAnyTutorialQueued params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::HighlightCharmsClass(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.HighlightCharmsClass"));
    struct Params_HighlightCharmsClass {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_HighlightCharmsClass params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::HermesStartNextTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.HermesStartNextTutorial"));
    struct Params_HermesStartNextTutorial {
    }; // Size: 0x0
    Params_HermesStartNextTutorial params{};
    ProcessEvent(func, &params);
}
void UTutorialSystem::HideLivingQuarters(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.HideLivingQuarters"));
    struct Params_HideLivingQuarters {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_HideLivingQuarters params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::ForceCompleteTutorial(FName TutorialName, bool DontFireCompletionMessages) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ForceCompleteTutorial"));
    struct Params_ForceCompleteTutorial {
        FName TutorialName; // 0x0
        bool DontFireCompletionMessages; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ForceCompleteTutorial params{};
    params.TutorialName = (FName)TutorialName;
    params.DontFireCompletionMessages = (bool)DontFireCompletionMessages;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::CompleteTutorialCurrentStep(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.CompleteTutorialCurrentStep"));
    struct Params_CompleteTutorialCurrentStep {
        FName TutorialName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CompleteTutorialCurrentStep params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTutorialSystem::CompleteTutorialStepByAlias(FName TutorialName, FName TutorialStepAlias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.CompleteTutorialStepByAlias"));
    struct Params_CompleteTutorialStepByAlias {
        FName TutorialName; // 0x0
        FName TutorialStepAlias; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CompleteTutorialStepByAlias params{};
    params.TutorialName = (FName)TutorialName;
    params.TutorialStepAlias = (FName)TutorialStepAlias;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::ClosePauseMenu(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ClosePauseMenu"));
    struct Params_ClosePauseMenu {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_ClosePauseMenu params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::ClearTutorialCacheByName(FName TutorialName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ClearTutorialCacheByName"));
    struct Params_ClearTutorialCacheByName {
        FName TutorialName; // 0x0
    }; // Size: 0x8
    Params_ClearTutorialCacheByName params{};
    params.TutorialName = (FName)TutorialName;
    ProcessEvent(func, &params);
}
void UTutorialSystem::ClearTutorialCache() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.ClearTutorialCache"));
    struct Params_ClearTutorialCache {
    }; // Size: 0x0
    Params_ClearTutorialCache params{};
    ProcessEvent(func, &params);
}
void UTutorialSystem::BackOutOfRegion(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.BackOutOfRegion"));
    struct Params_BackOutOfRegion {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_BackOutOfRegion params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void UTutorialSystem::AllowTravelToAnnex(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.AllowTravelToAnnex"));
    struct Params_AllowTravelToAnnex {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_AllowTravelToAnnex params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
bool UTutorialSystem::AbortTutorial(FName TutorialName, bool bInstant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.AbortTutorial"));
    struct Params_AbortTutorial {
        FName TutorialName; // 0x0
        bool bInstant; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_AbortTutorial params{};
    params.TutorialName = (FName)TutorialName;
    params.bInstant = (bool)bInstant;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTutorialSystem::AbortQueuedTutorials(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TutorialSystem.AbortQueuedTutorials"));
    struct Params_AbortQueuedTutorials {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_AbortQueuedTutorials params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
