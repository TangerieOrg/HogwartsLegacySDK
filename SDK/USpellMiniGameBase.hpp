#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "EUMGInputAction.hpp"
#include "FInputCheckpoint.hpp"
#include "FSpellUnlockMiniGameData.hpp"
#include "FVector2D.hpp"
#include "UScreen.hpp"
class USpellMiniGameSpark;
class AActor;
class UTexture2D;
class UObject;
struct FSpellUnlockMiniGamePath;
class UMaterialInstance;
#pragma pack(push, 1)
class USpellMiniGameBase : public UScreen {
public:
    float PreDrawTime; // 0x370
    char pad_374[0x4];
    USpellMiniGameSpark* PlayerSpark; // 0x378
    USpellMiniGameSpark* BadSpark; // 0x380
    FVector2D FailProgress; // 0x388
    AActor* PlayerProxy; // 0x390
    float ThreatChaserDelay; // 0x398
    float PreDrawProgress; // 0x39c
    FVector2D PlayerSparkInput; // 0x3a0
    FVector2D LastTouchpadInput; // 0x3a8
    FVector2D SpellPathScale; // 0x3b0
    UTexture2D* SpellPathMask; // 0x3b8
    TArray<EUMGInputAction> PossiblePrompts; // 0x3c0
    char pad_3d0[0x158];
    static USpellMiniGameBase* StaticClass();
    void UpdateButtonGlow(int32_t Checkpoint, float GlowOpacity);
    void StartMiniGameReset(UObject* sender, int32_t RemoveWaitRequest);
    void SetUseDefaultCamera(bool UseDefault);
    void SetSpellIconImages();
    void ResetSparks();
    void ResetMiniGame();
    void PostMiniGameDataSet(FSpellUnlockMiniGameData Data);
    void PauseMiniGame();
    void PathTextureCallback(UTexture2D* MI);
    void PathMaskCallback(UTexture2D* T2D);
    void OnUpdatePreDrawProgress(float NewProgress);
    void OnUpdatePlayerProgress(FVector2D NewProgress);
    void OnUpdateFailProgress(FVector2D NewProgress);
    void OnStartPressed();
    void OnStartMiniGameReset();
    void OnSpellTextureLoaded(UTexture2D* PathTexture);
    void OnSpellMaskLoaded(UTexture2D* PathMask);
    void OnPreDrawComplete();
    void OnPathSplineSet(FSpellUnlockMiniGamePath& Spline);
    void OnMinigameSuccess();
    void OnMinigameFullyLoaded();
    void OnMinigameFailure(UObject* sender);
    void OnInputSuccess(int32_t InputButtonIndex);
    void OnInputFailure(int32_t InputIndex);
    void OnInputDeviceChanged(EInputDeviceUsed UsedInputDevice);
    void OnExitPressed();
    void OnEnterInputWindow(int32_t Checkpoint);
    void OnDestroySparks();
    void OnButtonPreDraw(int32_t ButtonIndex);
    void OnBadSparkHitCheckpoint(int32_t Checkpoint);
    void OnBadSparkEnterInputWindow(int32_t Checkpoint);
    void LogSpellMinigameData(FString LogData);
    FVector2D GetProgressOnMask(USpellMiniGameSpark* Spark);
    FName GetMiniGameName();
    bool GetIsWaitingForStart();
    bool GetIsMiniGameActive();
    bool GetIsInInputWindow();
    TArray<FInputCheckpoint> GetInputCheckpoints();
    FInputCheckpoint GetCurrentCheckpointData();
    void AsyncUITextureLoadCallback__DelegateSignature(UTexture2D* LoadedTex);
    void AsyncUIMaterialLoadCallback__DelegateSignature(UMaterialInstance* LoadedMat);
    void AddResetWaitRequest(UObject* sender);
    void AddInputButton(FString ButtonKey, FVector2D Position);
}; // Size: 0x528
#pragma pack(pop)
