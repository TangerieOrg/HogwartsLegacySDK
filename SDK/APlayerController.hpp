#pragma once
#include <cstdint>
#include "AController.hpp"
#include "ECameraShakePlaySpace.hpp"
#include "ECollisionChannel.hpp"
#include "EControllerAnalogStick\Type.hpp"
#include "EControllerHand.hpp"
#include "EDynamicForceFeedbackAction\Type.hpp"
#include "EMouseCursor\Type.hpp"
#include "EObjectTypeQuery.hpp"
#include "ETouchIndex\Type.hpp"
#include "ETraceTypeQuery.hpp"
#include "ETravelType.hpp"
#include "EViewTargetBlendFunction.hpp"
#include "FActiveForceFeedbackEffect.hpp"
#include "FColor.hpp"
#include "FForceFeedbackParameters.hpp"
#include "FGuid.hpp"
#include "FKey.hpp"
#include "FLatentActionInfo.hpp"
#include "FRotator.hpp"
#include "FUniqueNetIdRepl.hpp"
#include "FUpdateLevelStreamingLevelStatus.hpp"
#include "FUpdateLevelVisibilityLevelInfo.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector_NetQuantize.hpp"
#include "FViewTargetTransitionParams.hpp"
class UClass;
class AHUD;
class UPlayer;
class APawn;
class UUserWidget;
class UInterpTrackInstDirector;
class APlayerCameraManager;
class AActor;
class UCheatManager;
class UPlayerInput;
class UNetConnection;
class UInputComponent;
class UTouchInterface;
class ASpectatorPawn;
class USceneComponent;
struct FHitResult;
class UHapticFeedbackEffect_Base;
class USoundBase;
class UForceFeedbackEffect;
class APlayerState;
class UCameraShakeSourceComponent;
class UCameraAnim;
class UMaterialInterface;
class UObject;
#pragma pack(push, 1)
class APlayerController : public AController {
public:
    UPlayer* Player; // 0x2c0
    APawn* AcknowledgedPawn; // 0x2c8
    UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2d0
    AHUD* MyHUD; // 0x2d8
    APlayerCameraManager* PlayerCameraManager; // 0x2e0
    UClass* PlayerCameraManagerClass; // 0x2e8
    bool bAutoManageActiveCameraTarget; // 0x2f0
    char pad_2f1[0x3];
    FRotator TargetViewRotation; // 0x2f4
    char pad_300[0xc];
    float SmoothTargetViewRotationSpeed; // 0x30c
    char pad_310[0x8];
    TArray<AActor*> HiddenActors; // 0x318
    TArray<void*> HiddenPrimitiveComponents; // 0x328
    char pad_338[0x4];
    float LastSpectatorStateSynchTime; // 0x33c
    FVector LastSpectatorSyncLocation; // 0x340
    FRotator LastSpectatorSyncRotation; // 0x34c
    int32_t ClientCap; // 0x358
    char pad_35c[0x4];
    UCheatManager* CheatManager; // 0x360
    UClass* CheatClass; // 0x368
    UPlayerInput* PlayerInput; // 0x370
    TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x378
    char pad_388[0x80];
    uint8_t pad_bitfield_408_0 : 4;
    uint8_t bPlayerIsWaiting : 1; // 0x408
    uint8_t pad_bitfield_408_5 : 3;
    char pad_409[0x3];
    uint8_t NetPlayerIndex; // 0x40c
    char pad_40d[0x3b];
    UNetConnection* PendingSwapConnection; // 0x448
    UNetConnection* NetConnection; // 0x450
    char pad_458[0xc];
    float InputYawScale; // 0x464
    float InputPitchScale; // 0x468
    float InputRollScale; // 0x46c
    uint8_t bShowMouseCursor : 1; // 0x470
    uint8_t bEnableClickEvents : 1; // 0x470
    uint8_t bEnableTouchEvents : 1; // 0x470
    uint8_t bEnableMouseOverEvents : 1; // 0x470
    uint8_t bEnableTouchOverEvents : 1; // 0x470
    uint8_t bForceFeedbackEnabled : 1; // 0x470
    uint8_t pad_bitfield_470_6 : 2;
    char pad_471[0x3];
    float ForceFeedbackScale; // 0x474
    float HapticFeedbackScale; // 0x478
    char pad_47c[0x4];
    TArray<FKey> ClickEventKeys; // 0x480
    EMouseCursor::Type DefaultMouseCursor; // 0x490
    EMouseCursor::Type CurrentMouseCursor; // 0x491
    ECollisionChannel DefaultClickTraceChannel; // 0x492
    ECollisionChannel CurrentClickTraceChannel; // 0x493
    float HitResultTraceDistance; // 0x494
    uint16_t SeamlessTravelCount; // 0x498
    uint16_t LastCompletedSeamlessTravelCount; // 0x49a
    char pad_49c[0x74];
    UInputComponent* InactiveStateInputComponent; // 0x510
    uint8_t pad_bitfield_518_0 : 2;
    uint8_t bShouldPerformFullTickWhenPaused : 1; // 0x518
    uint8_t pad_bitfield_518_3 : 5;
    char pad_519[0x17];
    UTouchInterface* CurrentTouchInterface; // 0x530
    char pad_538[0x50];
    ASpectatorPawn* SpectatorPawn; // 0x588
    char pad_590[0x4];
    bool bIsLocalPlayerController; // 0x594
    char pad_595[0x3];
    FVector SpawnLocation; // 0x598
    char pad_5a4[0xc];
    static APlayerController* StaticClass();
    bool WasInputKeyJustReleased(FKey Key);
    bool WasInputKeyJustPressed(FKey Key);
    void ToggleSpeaking(bool bInSpeaking);
    void TestServerLevelVisibilityChange(FName PackageName, FName Filename);
    void SwitchLevel(FString URL);
    void StopMemTrace();
    void StopHapticEffect(EControllerHand Hand);
    void StartMemTrace(FString ip, int32_t Port);
    void StartFire(uint8_t FireModeNum);
    void SetVirtualJoystickVisibility(bool bVisible);
    void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
    void SetShouldPerformFullTickWhenPaused(bool ShouldPerformFullTickWhenPaused);
    void SetName(FString S);
    void SetMouseLocation(int32_t X, int32_t Y);
    void SetMouseCursorWidget(EMouseCursor::Type Cursor, UUserWidget* CursorWidget);
    void SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand);
    void SetDisableHaptics(bool bNewDisabled);
    void SetControllerLightColor(FColor Color);
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
    void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
    void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
    void ServerViewPrevPlayer();
    void ServerViewNextPlayer();
    void ServerVerifyViewTarget();
    void ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw);
    void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerToggleAILogging();
    void ServerShortTimeout();
    void ServerSetSpectatorWaiting(bool bWaiting);
    void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);
    void ServerRestartPlayer();
    void ServerPause();
    void ServerNotifyLoadedWorld(FName WorldPackageName);
    void ServerMutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerExecRPC(FString Msg);
    void ServerExec(FString Msg);
    void ServerCheckClientPossessionReliable();
    void ServerCheckClientPossession();
    void ServerChangeName(FString S);
    void ServerCamera(FName NewMode);
    void ServerAcknowledgePossession(APawn* P);
    void SendToConsole(FString Command);
    void RestartLevel();
    void ResetControllerLightColor();
    bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative);
    void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop);
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, EDynamicForceFeedbackAction::Type Action, FLatentActionInfo LatentInfo);
    void Pause();
    void OnServerStartedVisualLogger(bool bIsLogging);
    void MemTraceUserMark(FString userMark);
    void LocalTravel(FString URL);
    void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    bool IsInputKeyDown(FKey Key);
    void GetViewportSize(int32_t& SizeX, int32_t& SizeY);
    ASpectatorPawn* GetSpectatorPawn();
    bool GetMousePosition(float& LocationX, float& LocationY);
    FVector GetInputVectorKeyState(FKey Key);
    void GetInputTouchState(ETouchIndex::Type FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    void GetInputMouseDelta(float& DeltaX, float& DeltaY);
    void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration);
    float GetInputKeyTimeDown(FKey Key);
    void GetInputAnalogStickState(EControllerAnalogStick::Type WhichStick, float& StickX, float& StickY);
    float GetInputAnalogKeyState(FKey Key);
    AHUD* GetHUD();
    bool GetHitResultUnderFingerForObjects(ETouchIndex::Type FingerIndex, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFingerByChannel(ETouchIndex::Type FingerIndex, ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorForObjects(TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorByChannel(ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    float GetHapticFeedbackScale();
    float GetForceFeedbackScale();
    FVector GetFocalLocation();
    void FOV(float NewFOV);
    void EnableCheats();
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection);
    bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection);
    void ConsoleKey(FKey Key);
    void ClientWasKicked();
    void ClientVoiceHandshakeComplete();
    void ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses);
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex);
    void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientTravelInternal(FString URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTravel(FString URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTeamMessage(APlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);
    void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void ClientStopCameraShake(UClass* Shake, bool bImmediately);
    void ClientStopCameraAnim(UCameraAnim* AnimToStop);
    void ClientStartOnlineSession();
    void ClientStartCameraShakeFromSource(UClass* Shake, UCameraShakeSourceComponent* SourceComponent);
    void ClientStartCameraShake(UClass* Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ClientSpawnCameraLensEffect(UClass* LensEffectEmitterClass);
    void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);
    void ClientSetSpectatorWaiting(bool bWaiting);
    void ClientSetHUD(UClass* NewHUDClass);
    void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups);
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    void ClientSetCameraMode(FName NewCamMode);
    void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished);
    void ClientSetBlockOnAsyncLoading();
    void ClientReturnToMainMenuWithTextReason();
    void ClientReturnToMainMenu(FString ReturnReason);
    void ClientRetryClientRestart(APawn* NewPawn);
    void ClientRestart(APawn* NewPawn);
    void ClientReset();
    void ClientRepObjRef(UObject* Object);
    void ClientReceiveLocalizedMessage(UClass* Message, int32_t Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject);
    void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups);
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
    void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
    void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace);
    void ClientMutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientMessage(FString S, FName Type, float MsgLifeTime);
    void ClientIgnoreMoveInput(bool bIgnore);
    void ClientIgnoreLookInput(bool bIgnore);
    void ClientGotoState(FName NewState);
    void ClientGameEnded(AActor* EndGameFocus, bool bIsWinner);
    void ClientForceGarbageCollection();
    void ClientFlushLevelStreaming();
    void ClientEndOnlineSession();
    void ClientEnableNetworkVoice(bool bEnable);
    void ClientCommitMapChange();
    void ClientClearCameraLensEffects();
    void ClientCapBandwidth(int32_t Cap);
    void ClientCancelPendingMapChange();
    void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);
    void ClearAudioListenerOverride();
    void ClearAudioListenerAttenuationOverride();
    bool CanRestartPlayer();
    void Camera(FName NewMode);
    void AddYawInput(float Val);
    void AddRollInput(float Val);
    void AddPitchInput(float Val);
    void ActivateTouchInterface(UTouchInterface* NewTouchInterface);
}; // Size: 0x5b0
#pragma pack(pop)
