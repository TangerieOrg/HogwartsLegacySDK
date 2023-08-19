#include "AActor.hpp"
#include "EInputDeviceUsed.hpp"
#include "EUMGInputAction.hpp"
#include "FInputCheckpoint.hpp"
#include "FSpellUnlockMiniGameData.hpp"
#include "FSpellUnlockMiniGamePath.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UObject.hpp"
#include "UScreen.hpp"
#include "USpellMiniGameBase.hpp"
#include "USpellMiniGameSpark.hpp"
#include "UTexture2D.hpp"
FName USpellMiniGameBase::GetMiniGameName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetMiniGameName"));
    struct Params_GetMiniGameName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMiniGameName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USpellMiniGameBase::OnInputFailure(int32_t InputIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnInputFailure"));
    struct Params_OnInputFailure {
        int32_t InputIndex; // 0x0
    }; // Size: 0x4
    Params_OnInputFailure params{};
    params.InputIndex = (int32_t)InputIndex;
    ProcessEvent(func, &params);
}
USpellMiniGameBase* USpellMiniGameBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellMiniGameBase");
    return (USpellMiniGameBase*)res;
}
void USpellMiniGameBase::ResetSparks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.ResetSparks"));
    struct Params_ResetSparks {
    }; // Size: 0x0
    Params_ResetSparks params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::UpdateButtonGlow(int32_t Checkpoint, float GlowOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.UpdateButtonGlow"));
    struct Params_UpdateButtonGlow {
        int32_t Checkpoint; // 0x0
        float GlowOpacity; // 0x4
    }; // Size: 0x8
    Params_UpdateButtonGlow params{};
    params.Checkpoint = (int32_t)Checkpoint;
    params.GlowOpacity = (float)GlowOpacity;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnMinigameFailure(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnMinigameFailure"));
    struct Params_OnMinigameFailure {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_OnMinigameFailure params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::StartMiniGameReset(UObject* sender, int32_t RemoveWaitRequest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.StartMiniGameReset"));
    struct Params_StartMiniGameReset {
        UObject* sender; // 0x0
        int32_t RemoveWaitRequest; // 0x8
    }; // Size: 0xc
    Params_StartMiniGameReset params{};
    params.sender = (UObject*)sender;
    params.RemoveWaitRequest = (int32_t)RemoveWaitRequest;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::SetUseDefaultCamera(bool UseDefault) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.SetUseDefaultCamera"));
    struct Params_SetUseDefaultCamera {
        bool UseDefault; // 0x0
    }; // Size: 0x1
    Params_SetUseDefaultCamera params{};
    params.UseDefault = (bool)UseDefault;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnPathSplineSet(FSpellUnlockMiniGamePath& Spline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnPathSplineSet"));
    struct Params_OnPathSplineSet {
        FSpellUnlockMiniGamePath Spline; // 0x0
    }; // Size: 0x10
    Params_OnPathSplineSet params{};
    params.Spline = (FSpellUnlockMiniGamePath)Spline;
    ProcessEvent(func, &params);
    Spline = params.Spline;
}
void USpellMiniGameBase::SetSpellIconImages() {}
void USpellMiniGameBase::ResetMiniGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.ResetMiniGame"));
    struct Params_ResetMiniGame {
    }; // Size: 0x0
    Params_ResetMiniGame params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::PostMiniGameDataSet(FSpellUnlockMiniGameData Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.PostMiniGameDataSet"));
    struct Params_PostMiniGameDataSet {
        FSpellUnlockMiniGameData Data; // 0x0
    }; // Size: 0xf8
    Params_PostMiniGameDataSet params{};
    params.Data = (FSpellUnlockMiniGameData)Data;
    ProcessEvent(func, &params);
}
bool USpellMiniGameBase::GetIsMiniGameActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetIsMiniGameActive"));
    struct Params_GetIsMiniGameActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMiniGameActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USpellMiniGameBase::PauseMiniGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.PauseMiniGame"));
    struct Params_PauseMiniGame {
    }; // Size: 0x0
    Params_PauseMiniGame params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::PathTextureCallback(UTexture2D* MI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.PathTextureCallback"));
    struct Params_PathTextureCallback {
        UTexture2D* MI; // 0x0
    }; // Size: 0x8
    Params_PathTextureCallback params{};
    params.MI = (UTexture2D*)MI;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnPreDrawComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnPreDrawComplete"));
    struct Params_OnPreDrawComplete {
    }; // Size: 0x0
    Params_OnPreDrawComplete params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::PathMaskCallback(UTexture2D* T2D) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.PathMaskCallback"));
    struct Params_PathMaskCallback {
        UTexture2D* T2D; // 0x0
    }; // Size: 0x8
    Params_PathMaskCallback params{};
    params.T2D = (UTexture2D*)T2D;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnUpdatePreDrawProgress(float NewProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnUpdatePreDrawProgress"));
    struct Params_OnUpdatePreDrawProgress {
        float NewProgress; // 0x0
    }; // Size: 0x4
    Params_OnUpdatePreDrawProgress params{};
    params.NewProgress = (float)NewProgress;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnUpdatePlayerProgress(FVector2D NewProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnUpdatePlayerProgress"));
    struct Params_OnUpdatePlayerProgress {
        FVector2D NewProgress; // 0x0
    }; // Size: 0x8
    Params_OnUpdatePlayerProgress params{};
    params.NewProgress = (FVector2D)NewProgress;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnMinigameSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnMinigameSuccess"));
    struct Params_OnMinigameSuccess {
    }; // Size: 0x0
    Params_OnMinigameSuccess params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnUpdateFailProgress(FVector2D NewProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnUpdateFailProgress"));
    struct Params_OnUpdateFailProgress {
        FVector2D NewProgress; // 0x0
    }; // Size: 0x8
    Params_OnUpdateFailProgress params{};
    params.NewProgress = (FVector2D)NewProgress;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnStartPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnStartPressed"));
    struct Params_OnStartPressed {
    }; // Size: 0x0
    Params_OnStartPressed params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnStartMiniGameReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnStartMiniGameReset"));
    struct Params_OnStartMiniGameReset {
    }; // Size: 0x0
    Params_OnStartMiniGameReset params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnSpellTextureLoaded(UTexture2D* PathTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnSpellTextureLoaded"));
    struct Params_OnSpellTextureLoaded {
        UTexture2D* PathTexture; // 0x0
    }; // Size: 0x8
    Params_OnSpellTextureLoaded params{};
    params.PathTexture = (UTexture2D*)PathTexture;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnMinigameFullyLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnMinigameFullyLoaded"));
    struct Params_OnMinigameFullyLoaded {
    }; // Size: 0x0
    Params_OnMinigameFullyLoaded params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnSpellMaskLoaded(UTexture2D* PathMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnSpellMaskLoaded"));
    struct Params_OnSpellMaskLoaded {
        UTexture2D* PathMask; // 0x0
    }; // Size: 0x8
    Params_OnSpellMaskLoaded params{};
    params.PathMask = (UTexture2D*)PathMask;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnInputSuccess(int32_t InputButtonIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnInputSuccess"));
    struct Params_OnInputSuccess {
        int32_t InputButtonIndex; // 0x0
    }; // Size: 0x4
    Params_OnInputSuccess params{};
    params.InputButtonIndex = (int32_t)InputButtonIndex;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnInputDeviceChanged(EInputDeviceUsed UsedInputDevice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnInputDeviceChanged"));
    struct Params_OnInputDeviceChanged {
        EInputDeviceUsed UsedInputDevice; // 0x0
    }; // Size: 0x1
    Params_OnInputDeviceChanged params{};
    params.UsedInputDevice = (EInputDeviceUsed)UsedInputDevice;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnExitPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnExitPressed"));
    struct Params_OnExitPressed {
    }; // Size: 0x0
    Params_OnExitPressed params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnEnterInputWindow(int32_t Checkpoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnEnterInputWindow"));
    struct Params_OnEnterInputWindow {
        int32_t Checkpoint; // 0x0
    }; // Size: 0x4
    Params_OnEnterInputWindow params{};
    params.Checkpoint = (int32_t)Checkpoint;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnDestroySparks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnDestroySparks"));
    struct Params_OnDestroySparks {
    }; // Size: 0x0
    Params_OnDestroySparks params{};
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnButtonPreDraw(int32_t ButtonIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnButtonPreDraw"));
    struct Params_OnButtonPreDraw {
        int32_t ButtonIndex; // 0x0
    }; // Size: 0x4
    Params_OnButtonPreDraw params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::OnBadSparkHitCheckpoint(int32_t Checkpoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnBadSparkHitCheckpoint"));
    struct Params_OnBadSparkHitCheckpoint {
        int32_t Checkpoint; // 0x0
    }; // Size: 0x4
    Params_OnBadSparkHitCheckpoint params{};
    params.Checkpoint = (int32_t)Checkpoint;
    ProcessEvent(func, &params);
}
FVector2D USpellMiniGameBase::GetProgressOnMask(USpellMiniGameSpark* Spark) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetProgressOnMask"));
    struct Params_GetProgressOnMask {
        USpellMiniGameSpark* Spark; // 0x0
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetProgressOnMask params{};
    params.Spark = (USpellMiniGameSpark*)Spark;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void USpellMiniGameBase::OnBadSparkEnterInputWindow(int32_t Checkpoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.OnBadSparkEnterInputWindow"));
    struct Params_OnBadSparkEnterInputWindow {
        int32_t Checkpoint; // 0x0
    }; // Size: 0x4
    Params_OnBadSparkEnterInputWindow params{};
    params.Checkpoint = (int32_t)Checkpoint;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::AsyncUIMaterialLoadCallback__DelegateSignature(UMaterialInstance* LoadedMat) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.SpellMiniGameBase.AsyncUIMaterialLoadCallback__DelegateSignature"));
    struct Params_AsyncUIMaterialLoadCallback__DelegateSignature {
        UMaterialInstance* LoadedMat; // 0x0
    }; // Size: 0x8
    Params_AsyncUIMaterialLoadCallback__DelegateSignature params{};
    params.LoadedMat = (UMaterialInstance*)LoadedMat;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::LogSpellMinigameData(FString LogData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.LogSpellMinigameData"));
    struct Params_LogSpellMinigameData {
        FString LogData; // 0x0
    }; // Size: 0x10
    Params_LogSpellMinigameData params{};
    params.LogData = (FString)LogData;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::AddInputButton(FString ButtonKey, FVector2D Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.AddInputButton"));
    struct Params_AddInputButton {
        FString ButtonKey; // 0x0
        FVector2D Position; // 0x10
    }; // Size: 0x18
    Params_AddInputButton params{};
    params.ButtonKey = (FString)ButtonKey;
    params.Position = (FVector2D)Position;
    ProcessEvent(func, &params);
}
bool USpellMiniGameBase::GetIsWaitingForStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetIsWaitingForStart"));
    struct Params_GetIsWaitingForStart {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsWaitingForStart params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USpellMiniGameBase::GetIsInInputWindow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetIsInInputWindow"));
    struct Params_GetIsInInputWindow {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInInputWindow params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FInputCheckpoint> USpellMiniGameBase::GetInputCheckpoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetInputCheckpoints"));
    struct Params_GetInputCheckpoints {
        TArray<FInputCheckpoint> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetInputCheckpoints params{};
    ProcessEvent(func, &params);
    return (TArray<FInputCheckpoint>)params.ReturnValue;
}
FInputCheckpoint USpellMiniGameBase::GetCurrentCheckpointData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.GetCurrentCheckpointData"));
    struct Params_GetCurrentCheckpointData {
        FInputCheckpoint ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetCurrentCheckpointData params{};
    ProcessEvent(func, &params);
    return (FInputCheckpoint)params.ReturnValue;
}
void USpellMiniGameBase::AsyncUITextureLoadCallback__DelegateSignature(UTexture2D* LoadedTex) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.SpellMiniGameBase.AsyncUITextureLoadCallback__DelegateSignature"));
    struct Params_AsyncUITextureLoadCallback__DelegateSignature {
        UTexture2D* LoadedTex; // 0x0
    }; // Size: 0x8
    Params_AsyncUITextureLoadCallback__DelegateSignature params{};
    params.LoadedTex = (UTexture2D*)LoadedTex;
    ProcessEvent(func, &params);
}
void USpellMiniGameBase::AddResetWaitRequest(UObject* sender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellMiniGameBase.AddResetWaitRequest"));
    struct Params_AddResetWaitRequest {
        UObject* sender; // 0x0
    }; // Size: 0x8
    Params_AddResetWaitRequest params{};
    params.sender = (UObject*)sender;
    ProcessEvent(func, &params);
}
