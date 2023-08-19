#include "AActor.hpp"
#include "AController.hpp"
#include "AHUD.hpp"
#include "APawn.hpp"
#include "APlayerCameraManager.hpp"
#include "APlayerController.hpp"
#include "APlayerState.hpp"
#include "ASpectatorPawn.hpp"
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
#include "FHitResult.hpp"
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
#include "UCameraAnim.hpp"
#include "UCameraShakeSourceComponent.hpp"
#include "UCheatManager.hpp"
#include "UClass.hpp"
#include "UForceFeedbackEffect.hpp"
#include "UFunction.hpp"
#include "UHapticFeedbackEffect_Base.hpp"
#include "UInputComponent.hpp"
#include "UInterpTrackInstDirector.hpp"
#include "UMaterialInterface.hpp"
#include "UNetConnection.hpp"
#include "UObject.hpp"
#include "UPlayer.hpp"
#include "UPlayerInput.hpp"
#include "USceneComponent.hpp"
#include "USoundBase.hpp"
#include "UTouchInterface.hpp"
#include "UUserWidget.hpp"
void APlayerController::ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPlayForceFeedback_Internal"));
    struct Params_ClientPlayForceFeedback_Internal {
        UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
        FForceFeedbackParameters Params; // 0x8
    }; // Size: 0x14
    Params_ClientPlayForceFeedback_Internal params{};
    params.ForceFeedbackEffect = (UForceFeedbackEffect*)ForceFeedbackEffect;
    params.Params = (FForceFeedbackParameters)Params;
    ProcessEvent(func, &params);
}
void APlayerController::SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetAudioListenerAttenuationOverride"));
    struct Params_SetAudioListenerAttenuationOverride {
        USceneComponent* AttachToComponent; // 0x0
        FVector AttenuationLocationOVerride; // 0x8
    }; // Size: 0x14
    Params_SetAudioListenerAttenuationOverride params{};
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.AttenuationLocationOVerride = (FVector)AttenuationLocationOVerride;
    ProcessEvent(func, &params);
}
void APlayerController::ServerViewNextPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerViewNextPlayer"));
    struct Params_ServerViewNextPlayer {
    }; // Size: 0x0
    Params_ServerViewNextPlayer params{};
    ProcessEvent(func, &params);
}
AHUD* APlayerController::GetHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHUD"));
    struct Params_GetHUD {
        AHUD* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHUD params{};
    ProcessEvent(func, &params);
    return (AHUD*)params.ReturnValue;
}
bool APlayerController::WasInputKeyJustPressed(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.WasInputKeyJustPressed"));
    struct Params_WasInputKeyJustPressed {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_WasInputKeyJustPressed params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
APlayerController* APlayerController::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerController");
    return (APlayerController*)res;
}
void APlayerController::SetHapticsByValue(float Frequency, float Amplitude, EControllerHand Hand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetHapticsByValue"));
    struct Params_SetHapticsByValue {
        float Frequency; // 0x0
        float Amplitude; // 0x4
        EControllerHand Hand; // 0x8
    }; // Size: 0x9
    Params_SetHapticsByValue params{};
    params.Frequency = (float)Frequency;
    params.Amplitude = (float)Amplitude;
    params.Hand = (EControllerHand)Hand;
    ProcessEvent(func, &params);
}
void APlayerController::ToggleSpeaking(bool bInSpeaking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ToggleSpeaking"));
    struct Params_ToggleSpeaking {
        bool bInSpeaking; // 0x0
    }; // Size: 0x1
    Params_ToggleSpeaking params{};
    params.bInSpeaking = (bool)bInSpeaking;
    ProcessEvent(func, &params);
}
void APlayerController::SendToConsole(FString Command) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SendToConsole"));
    struct Params_SendToConsole {
        FString Command; // 0x0
    }; // Size: 0x10
    Params_SendToConsole params{};
    params.Command = (FString)Command;
    ProcessEvent(func, &params);
}
ASpectatorPawn* APlayerController::GetSpectatorPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetSpectatorPawn"));
    struct Params_GetSpectatorPawn {
        ASpectatorPawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpectatorPawn params{};
    ProcessEvent(func, &params);
    return (ASpectatorPawn*)params.ReturnValue;
}
bool APlayerController::WasInputKeyJustReleased(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.WasInputKeyJustReleased"));
    struct Params_WasInputKeyJustReleased {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_WasInputKeyJustReleased params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void APlayerController::TestServerLevelVisibilityChange(FName PackageName, FName Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.TestServerLevelVisibilityChange"));
    struct Params_TestServerLevelVisibilityChange {
        FName PackageName; // 0x0
        FName Filename; // 0x8
    }; // Size: 0x10
    Params_TestServerLevelVisibilityChange params{};
    params.PackageName = (FName)PackageName;
    params.Filename = (FName)Filename;
    ProcessEvent(func, &params);
}
void APlayerController::GetInputMouseDelta(float& DeltaX, float& DeltaY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputMouseDelta"));
    struct Params_GetInputMouseDelta {
        float DeltaX; // 0x0
        float DeltaY; // 0x4
    }; // Size: 0x8
    Params_GetInputMouseDelta params{};
    params.DeltaX = (float)DeltaX;
    params.DeltaY = (float)DeltaY;
    ProcessEvent(func, &params);
    DeltaX = params.DeltaX;
    DeltaY = params.DeltaY;
}
void APlayerController::StopHapticEffect(EControllerHand Hand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.StopHapticEffect"));
    struct Params_StopHapticEffect {
        EControllerHand Hand; // 0x0
    }; // Size: 0x1
    Params_StopHapticEffect params{};
    params.Hand = (EControllerHand)Hand;
    ProcessEvent(func, &params);
}
void APlayerController::ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerSetSpectatorLocation"));
    struct Params_ServerSetSpectatorLocation {
        FVector NewLoc; // 0x0
        FRotator NewRot; // 0xc
    }; // Size: 0x18
    Params_ServerSetSpectatorLocation params{};
    params.NewLoc = (FVector)NewLoc;
    params.NewRot = (FRotator)NewRot;
    ProcessEvent(func, &params);
}
void APlayerController::SwitchLevel(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SwitchLevel"));
    struct Params_SwitchLevel {
        FString URL; // 0x0
    }; // Size: 0x10
    Params_SwitchLevel params{};
    params.URL = (FString)URL;
    ProcessEvent(func, &params);
}
void APlayerController::StopMemTrace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.StopMemTrace"));
    struct Params_StopMemTrace {
    }; // Size: 0x0
    Params_StopMemTrace params{};
    ProcessEvent(func, &params);
}
void APlayerController::GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputMotionState"));
    struct Params_GetInputMotionState {
        FVector Tilt; // 0x0
        FVector RotationRate; // 0xc
        FVector Gravity; // 0x18
        FVector Acceleration; // 0x24
    }; // Size: 0x30
    Params_GetInputMotionState params{};
    params.Tilt = (FVector)Tilt;
    params.RotationRate = (FVector)RotationRate;
    params.Gravity = (FVector)Gravity;
    params.Acceleration = (FVector)Acceleration;
    ProcessEvent(func, &params);
    Tilt = params.Tilt;
    RotationRate = params.RotationRate;
    Gravity = params.Gravity;
    Acceleration = params.Acceleration;
}
void APlayerController::ClientSetSpectatorWaiting(bool bWaiting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetSpectatorWaiting"));
    struct Params_ClientSetSpectatorWaiting {
        bool bWaiting; // 0x0
    }; // Size: 0x1
    Params_ClientSetSpectatorWaiting params{};
    params.bWaiting = (bool)bWaiting;
    ProcessEvent(func, &params);
}
void APlayerController::StartMemTrace(FString ip, int32_t Port) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.StartMemTrace"));
    struct Params_StartMemTrace {
        FString ip; // 0x0
        int32_t Port; // 0x10
    }; // Size: 0x14
    Params_StartMemTrace params{};
    params.ip = (FString)ip;
    params.Port = (int32_t)Port;
    ProcessEvent(func, &params);
}
void APlayerController::StartFire(uint8_t FireModeNum) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.StartFire"));
    struct Params_StartFire {
        uint8_t FireModeNum; // 0x0
    }; // Size: 0x1
    Params_StartFire params{};
    params.FireModeNum = (uint8_t)FireModeNum;
    ProcessEvent(func, &params);
}
void APlayerController::SetVirtualJoystickVisibility(bool bVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetVirtualJoystickVisibility"));
    struct Params_SetVirtualJoystickVisibility {
        bool bVisible; // 0x0
    }; // Size: 0x1
    Params_SetVirtualJoystickVisibility params{};
    params.bVisible = (bool)bVisible;
    ProcessEvent(func, &params);
}
void APlayerController::SetControllerLightColor(FColor Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetControllerLightColor"));
    struct Params_SetControllerLightColor {
        FColor Color; // 0x0
    }; // Size: 0x4
    Params_SetControllerLightColor params{};
    params.Color = (FColor)Color;
    ProcessEvent(func, &params);
}
void APlayerController::SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetViewTargetWithBlend"));
    struct Params_SetViewTargetWithBlend {
        AActor* NewViewTarget; // 0x0
        float BlendTime; // 0x8
        EViewTargetBlendFunction BlendFunc; // 0xc
        char pad_d[0x3];
        float BlendExp; // 0x10
        bool bLockOutgoing; // 0x14
    }; // Size: 0x15
    Params_SetViewTargetWithBlend params{};
    params.NewViewTarget = (AActor*)NewViewTarget;
    params.BlendTime = (float)BlendTime;
    params.BlendFunc = (EViewTargetBlendFunction)BlendFunc;
    params.BlendExp = (float)BlendExp;
    params.bLockOutgoing = (bool)bLockOutgoing;
    ProcessEvent(func, &params);
}
void APlayerController::OnServerStartedVisualLogger(bool bIsLogging) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.OnServerStartedVisualLogger"));
    struct Params_OnServerStartedVisualLogger {
        bool bIsLogging; // 0x0
    }; // Size: 0x1
    Params_OnServerStartedVisualLogger params{};
    params.bIsLogging = (bool)bIsLogging;
    ProcessEvent(func, &params);
}
void APlayerController::SetShouldPerformFullTickWhenPaused(bool ShouldPerformFullTickWhenPaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetShouldPerformFullTickWhenPaused"));
    struct Params_SetShouldPerformFullTickWhenPaused {
        bool ShouldPerformFullTickWhenPaused; // 0x0
    }; // Size: 0x1
    Params_SetShouldPerformFullTickWhenPaused params{};
    params.ShouldPerformFullTickWhenPaused = (bool)ShouldPerformFullTickWhenPaused;
    ProcessEvent(func, &params);
}
void APlayerController::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
void APlayerController::SetName(FString S) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetName"));
    struct Params_SetName {
        FString S; // 0x0
    }; // Size: 0x10
    Params_SetName params{};
    params.S = (FString)S;
    ProcessEvent(func, &params);
}
void APlayerController::SetMouseLocation(int32_t X, int32_t Y) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetMouseLocation"));
    struct Params_SetMouseLocation {
        int32_t X; // 0x0
        int32_t Y; // 0x4
    }; // Size: 0x8
    Params_SetMouseLocation params{};
    params.X = (int32_t)X;
    params.Y = (int32_t)Y;
    ProcessEvent(func, &params);
}
void APlayerController::SetMouseCursorWidget(EMouseCursor::Type Cursor, UUserWidget* CursorWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetMouseCursorWidget"));
    struct Params_SetMouseCursorWidget {
        EMouseCursor::Type Cursor; // 0x0
        char pad_1[0x7];
        UUserWidget* CursorWidget; // 0x8
    }; // Size: 0x10
    Params_SetMouseCursorWidget params{};
    params.Cursor = (EMouseCursor::Type)Cursor;
    params.CursorWidget = (UUserWidget*)CursorWidget;
    ProcessEvent(func, &params);
}
void APlayerController::SetDisableHaptics(bool bNewDisabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetDisableHaptics"));
    struct Params_SetDisableHaptics {
        bool bNewDisabled; // 0x0
    }; // Size: 0x1
    Params_SetDisableHaptics params{};
    params.bNewDisabled = (bool)bNewDisabled;
    ProcessEvent(func, &params);
}
void APlayerController::ServerCheckClientPossessionReliable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerCheckClientPossessionReliable"));
    struct Params_ServerCheckClientPossessionReliable {
    }; // Size: 0x0
    Params_ServerCheckClientPossessionReliable params{};
    ProcessEvent(func, &params);
}
void APlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetCinematicMode"));
    struct Params_SetCinematicMode {
        bool bInCinematicMode; // 0x0
        bool bHidePlayer; // 0x1
        bool bAffectsHUD; // 0x2
        bool bAffectsMovement; // 0x3
        bool bAffectsTurning; // 0x4
    }; // Size: 0x5
    Params_SetCinematicMode params{};
    params.bInCinematicMode = (bool)bInCinematicMode;
    params.bHidePlayer = (bool)bHidePlayer;
    params.bAffectsHUD = (bool)bAffectsHUD;
    params.bAffectsMovement = (bool)bAffectsMovement;
    params.bAffectsTurning = (bool)bAffectsTurning;
    ProcessEvent(func, &params);
}
void APlayerController::ServerUpdateCamera(FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerUpdateCamera"));
    struct Params_ServerUpdateCamera {
        FVector_NetQuantize CamLoc; // 0x0
        int32_t CamPitchAndYaw; // 0xc
    }; // Size: 0x10
    Params_ServerUpdateCamera params{};
    params.CamLoc = (FVector_NetQuantize)CamLoc;
    params.CamPitchAndYaw = (int32_t)CamPitchAndYaw;
    ProcessEvent(func, &params);
}
void APlayerController::SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.SetAudioListenerOverride"));
    struct Params_SetAudioListenerOverride {
        USceneComponent* AttachToComponent; // 0x0
        FVector Location; // 0x8
        FRotator Rotation; // 0x14
    }; // Size: 0x20
    Params_SetAudioListenerOverride params{};
    params.AttachToComponent = (USceneComponent*)AttachToComponent;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
}
void APlayerController::LocalTravel(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.LocalTravel"));
    struct Params_LocalTravel {
        FString URL; // 0x0
    }; // Size: 0x10
    Params_LocalTravel params{};
    params.URL = (FString)URL;
    ProcessEvent(func, &params);
}
void APlayerController::ClientClearCameraLensEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientClearCameraLensEffects"));
    struct Params_ClientClearCameraLensEffects {
    }; // Size: 0x0
    Params_ClientClearCameraLensEffects params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientFlushLevelStreaming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientFlushLevelStreaming"));
    struct Params_ClientFlushLevelStreaming {
    }; // Size: 0x0
    Params_ClientFlushLevelStreaming params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerNotifyLoadedWorld(FName WorldPackageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerNotifyLoadedWorld"));
    struct Params_ServerNotifyLoadedWorld {
        FName WorldPackageName; // 0x0
    }; // Size: 0x8
    Params_ServerNotifyLoadedWorld params{};
    params.WorldPackageName = (FName)WorldPackageName;
    ProcessEvent(func, &params);
}
void APlayerController::ServerViewSelf(FViewTargetTransitionParams TransitionParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerViewSelf"));
    struct Params_ServerViewSelf {
        FViewTargetTransitionParams TransitionParams; // 0x0
    }; // Size: 0x10
    Params_ServerViewSelf params{};
    params.TransitionParams = (FViewTargetTransitionParams)TransitionParams;
    ProcessEvent(func, &params);
}
void APlayerController::ServerViewPrevPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerViewPrevPlayer"));
    struct Params_ServerViewPrevPlayer {
    }; // Size: 0x0
    Params_ServerViewPrevPlayer params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerShortTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerShortTimeout"));
    struct Params_ServerShortTimeout {
    }; // Size: 0x0
    Params_ServerShortTimeout params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerVerifyViewTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerVerifyViewTarget"));
    struct Params_ServerVerifyViewTarget {
    }; // Size: 0x0
    Params_ServerVerifyViewTarget params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetViewTarget"));
    struct Params_ClientSetViewTarget {
        AActor* A; // 0x0
        FViewTargetTransitionParams TransitionParams; // 0x8
    }; // Size: 0x18
    Params_ClientSetViewTarget params{};
    params.A = (AActor*)A;
    params.TransitionParams = (FViewTargetTransitionParams)TransitionParams;
    ProcessEvent(func, &params);
}
void APlayerController::ClientStartCameraShakeFromSource(UClass* Shake, UCameraShakeSourceComponent* SourceComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStartCameraShakeFromSource"));
    struct Params_ClientStartCameraShakeFromSource {
        UClass* Shake; // 0x0
        UCameraShakeSourceComponent* SourceComponent; // 0x8
    }; // Size: 0x10
    Params_ClientStartCameraShakeFromSource params{};
    params.Shake = (UClass*)Shake;
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    ProcessEvent(func, &params);
}
void APlayerController::ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerUpdateMultipleLevelsVisibility"));
    struct Params_ServerUpdateMultipleLevelsVisibility {
        TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities; // 0x0
    }; // Size: 0x10
    Params_ServerUpdateMultipleLevelsVisibility params{};
    params.LevelVisibilities = (TArray<FUpdateLevelVisibilityLevelInfo>)LevelVisibilities;
    ProcessEvent(func, &params);
    LevelVisibilities = params.LevelVisibilities;
}
bool APlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.DeprojectScreenPositionToWorld"));
    struct Params_DeprojectScreenPositionToWorld {
        float ScreenX; // 0x0
        float ScreenY; // 0x4
        FVector WorldLocation; // 0x8
        FVector WorldDirection; // 0x14
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DeprojectScreenPositionToWorld params{};
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.WorldLocation = (FVector)WorldLocation;
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    WorldDirection = params.WorldDirection;
    return (bool)params.ReturnValue;
}
FVector APlayerController::GetInputVectorKeyState(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputVectorKeyState"));
    struct Params_GetInputVectorKeyState {
        FKey Key; // 0x0
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetInputVectorKeyState params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APlayerController::ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerUpdateLevelVisibility"));
    struct Params_ServerUpdateLevelVisibility {
        FUpdateLevelVisibilityLevelInfo LevelVisibility; // 0x0
    }; // Size: 0x14
    Params_ServerUpdateLevelVisibility params{};
    params.LevelVisibility = (FUpdateLevelVisibilityLevelInfo)LevelVisibility;
    ProcessEvent(func, &params);
    LevelVisibility = params.LevelVisibility;
}
void APlayerController::ServerUnmutePlayer(FUniqueNetIdRepl PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerUnmutePlayer"));
    struct Params_ServerUnmutePlayer {
        FUniqueNetIdRepl PlayerId; // 0x0
    }; // Size: 0x28
    Params_ServerUnmutePlayer params{};
    params.PlayerId = (FUniqueNetIdRepl)PlayerId;
    ProcessEvent(func, &params);
}
void APlayerController::ServerToggleAILogging() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerToggleAILogging"));
    struct Params_ServerToggleAILogging {
    }; // Size: 0x0
    Params_ServerToggleAILogging params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerSetSpectatorWaiting(bool bWaiting) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerSetSpectatorWaiting"));
    struct Params_ServerSetSpectatorWaiting {
        bool bWaiting; // 0x0
    }; // Size: 0x1
    Params_ServerSetSpectatorWaiting params{};
    params.bWaiting = (bool)bWaiting;
    ProcessEvent(func, &params);
}
void APlayerController::ServerRestartPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerRestartPlayer"));
    struct Params_ServerRestartPlayer {
    }; // Size: 0x0
    Params_ServerRestartPlayer params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerPause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerPause"));
    struct Params_ServerPause {
    }; // Size: 0x0
    Params_ServerPause params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerMutePlayer(FUniqueNetIdRepl PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerMutePlayer"));
    struct Params_ServerMutePlayer {
        FUniqueNetIdRepl PlayerId; // 0x0
    }; // Size: 0x28
    Params_ServerMutePlayer params{};
    params.PlayerId = (FUniqueNetIdRepl)PlayerId;
    ProcessEvent(func, &params);
}
void APlayerController::ServerExecRPC(FString Msg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerExecRPC"));
    struct Params_ServerExecRPC {
        FString Msg; // 0x0
    }; // Size: 0x10
    Params_ServerExecRPC params{};
    params.Msg = (FString)Msg;
    ProcessEvent(func, &params);
}
void APlayerController::ServerExec(FString Msg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerExec"));
    struct Params_ServerExec {
        FString Msg; // 0x0
    }; // Size: 0x10
    Params_ServerExec params{};
    params.Msg = (FString)Msg;
    ProcessEvent(func, &params);
}
void APlayerController::GetViewportSize(int32_t& SizeX, int32_t& SizeY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetViewportSize"));
    struct Params_GetViewportSize {
        int32_t SizeX; // 0x0
        int32_t SizeY; // 0x4
    }; // Size: 0x8
    Params_GetViewportSize params{};
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    ProcessEvent(func, &params);
    SizeX = params.SizeX;
    SizeY = params.SizeY;
}
void APlayerController::ServerCheckClientPossession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerCheckClientPossession"));
    struct Params_ServerCheckClientPossession {
    }; // Size: 0x0
    Params_ServerCheckClientPossession params{};
    ProcessEvent(func, &params);
}
void APlayerController::ServerChangeName(FString S) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerChangeName"));
    struct Params_ServerChangeName {
        FString S; // 0x0
    }; // Size: 0x10
    Params_ServerChangeName params{};
    params.S = (FString)S;
    ProcessEvent(func, &params);
}
void APlayerController::ServerCamera(FName NewMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerCamera"));
    struct Params_ServerCamera {
        FName NewMode; // 0x0
    }; // Size: 0x8
    Params_ServerCamera params{};
    params.NewMode = (FName)NewMode;
    ProcessEvent(func, &params);
}
void APlayerController::ServerAcknowledgePossession(APawn* P) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ServerAcknowledgePossession"));
    struct Params_ServerAcknowledgePossession {
        APawn* P; // 0x0
    }; // Size: 0x8
    Params_ServerAcknowledgePossession params{};
    params.P = (APawn*)P;
    ProcessEvent(func, &params);
}
void APlayerController::RestartLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.RestartLevel"));
    struct Params_RestartLevel {
    }; // Size: 0x0
    Params_RestartLevel params{};
    ProcessEvent(func, &params);
}
void APlayerController::ResetControllerLightColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ResetControllerLightColor"));
    struct Params_ResetControllerLightColor {
    }; // Size: 0x0
    Params_ResetControllerLightColor params{};
    ProcessEvent(func, &params);
}
bool APlayerController::ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ProjectWorldLocationToScreen"));
    struct Params_ProjectWorldLocationToScreen {
        FVector WorldLocation; // 0x0
        FVector2D ScreenLocation; // 0xc
        bool bPlayerViewportRelative; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_ProjectWorldLocationToScreen params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.ScreenLocation = (FVector2D)ScreenLocation;
    params.bPlayerViewportRelative = (bool)bPlayerViewportRelative;
    ProcessEvent(func, &params);
    ScreenLocation = params.ScreenLocation;
    return (bool)params.ReturnValue;
}
void APlayerController::PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand Hand, float Scale, bool bLoop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.PlayHapticEffect"));
    struct Params_PlayHapticEffect {
        UHapticFeedbackEffect_Base* HapticEffect; // 0x0
        EControllerHand Hand; // 0x8
        char pad_9[0x3];
        float Scale; // 0xc
        bool bLoop; // 0x10
    }; // Size: 0x11
    Params_PlayHapticEffect params{};
    params.HapticEffect = (UHapticFeedbackEffect_Base*)HapticEffect;
    params.Hand = (EControllerHand)Hand;
    params.Scale = (float)Scale;
    params.bLoop = (bool)bLoop;
    ProcessEvent(func, &params);
}
void APlayerController::PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, EDynamicForceFeedbackAction::Type Action, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.PlayDynamicForceFeedback"));
    struct Params_PlayDynamicForceFeedback {
        float Intensity; // 0x0
        float Duration; // 0x4
        bool bAffectsLeftLarge; // 0x8
        bool bAffectsLeftSmall; // 0x9
        bool bAffectsRightLarge; // 0xa
        bool bAffectsRightSmall; // 0xb
        EDynamicForceFeedbackAction::Type Action; // 0xc
        char pad_d[0x3];
        FLatentActionInfo LatentInfo; // 0x10
    }; // Size: 0x28
    Params_PlayDynamicForceFeedback params{};
    params.Intensity = (float)Intensity;
    params.Duration = (float)Duration;
    params.bAffectsLeftLarge = (bool)bAffectsLeftLarge;
    params.bAffectsLeftSmall = (bool)bAffectsLeftSmall;
    params.bAffectsRightLarge = (bool)bAffectsRightLarge;
    params.bAffectsRightSmall = (bool)bAffectsRightSmall;
    params.Action = (EDynamicForceFeedbackAction::Type)Action;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
}
void APlayerController::MemTraceUserMark(FString userMark) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.MemTraceUserMark"));
    struct Params_MemTraceUserMark {
        FString userMark; // 0x0
    }; // Size: 0x10
    Params_MemTraceUserMark params{};
    params.userMark = (FString)userMark;
    ProcessEvent(func, &params);
}
void APlayerController::K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.K2_ClientPlayForceFeedback"));
    struct Params_K2_ClientPlayForceFeedback {
        UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
        FName Tag; // 0x8
        bool bLooping; // 0x10
        bool bIgnoreTimeDilation; // 0x11
        bool bPlayWhilePaused; // 0x12
    }; // Size: 0x13
    Params_K2_ClientPlayForceFeedback params{};
    params.ForceFeedbackEffect = (UForceFeedbackEffect*)ForceFeedbackEffect;
    params.Tag = (FName)Tag;
    params.bLooping = (bool)bLooping;
    params.bIgnoreTimeDilation = (bool)bIgnoreTimeDilation;
    params.bPlayWhilePaused = (bool)bPlayWhilePaused;
    ProcessEvent(func, &params);
}
bool APlayerController::IsInputKeyDown(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.IsInputKeyDown"));
    struct Params_IsInputKeyDown {
        FKey Key; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsInputKeyDown params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool APlayerController::GetMousePosition(float& LocationX, float& LocationY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetMousePosition"));
    struct Params_GetMousePosition {
        float LocationX; // 0x0
        float LocationY; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMousePosition params{};
    params.LocationX = (float)LocationX;
    params.LocationY = (float)LocationY;
    ProcessEvent(func, &params);
    LocationX = params.LocationX;
    LocationY = params.LocationY;
    return (bool)params.ReturnValue;
}
void APlayerController::GetInputTouchState(ETouchIndex::Type FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputTouchState"));
    struct Params_GetInputTouchState {
        ETouchIndex::Type FingerIndex; // 0x0
        char pad_1[0x3];
        float LocationX; // 0x4
        float LocationY; // 0x8
        bool bIsCurrentlyPressed; // 0xc
    }; // Size: 0xd
    Params_GetInputTouchState params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    params.LocationX = (float)LocationX;
    params.LocationY = (float)LocationY;
    params.bIsCurrentlyPressed = (bool)bIsCurrentlyPressed;
    ProcessEvent(func, &params);
    LocationX = params.LocationX;
    LocationY = params.LocationY;
    bIsCurrentlyPressed = params.bIsCurrentlyPressed;
}
float APlayerController::GetInputKeyTimeDown(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputKeyTimeDown"));
    struct Params_GetInputKeyTimeDown {
        FKey Key; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetInputKeyTimeDown params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void APlayerController::GetInputAnalogStickState(EControllerAnalogStick::Type WhichStick, float& StickX, float& StickY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputAnalogStickState"));
    struct Params_GetInputAnalogStickState {
        EControllerAnalogStick::Type WhichStick; // 0x0
        char pad_1[0x3];
        float StickX; // 0x4
        float StickY; // 0x8
    }; // Size: 0xc
    Params_GetInputAnalogStickState params{};
    params.WhichStick = (EControllerAnalogStick::Type)WhichStick;
    params.StickX = (float)StickX;
    params.StickY = (float)StickY;
    ProcessEvent(func, &params);
    StickX = params.StickX;
    StickY = params.StickY;
}
float APlayerController::GetInputAnalogKeyState(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetInputAnalogKeyState"));
    struct Params_GetInputAnalogKeyState {
        FKey Key; // 0x0
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetInputAnalogKeyState params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool APlayerController::GetHitResultUnderFingerForObjects(ETouchIndex::Type FingerIndex, TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderFingerForObjects"));
    struct Params_GetHitResultUnderFingerForObjects {
        ETouchIndex::Type FingerIndex; // 0x0
        char pad_1[0x7];
        TArray<EObjectTypeQuery> ObjectTypes; // 0x8
        bool bTraceComplex; // 0x18
        char pad_19[0x3];
        FHitResult HitResult; // 0x1c
        bool ReturnValue; // 0xa4
    }; // Size: 0xa5
    Params_GetHitResultUnderFingerForObjects params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool APlayerController::GetHitResultUnderFingerByChannel(ETouchIndex::Type FingerIndex, ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderFingerByChannel"));
    struct Params_GetHitResultUnderFingerByChannel {
        ETouchIndex::Type FingerIndex; // 0x0
        ETraceTypeQuery TraceChannel; // 0x1
        bool bTraceComplex; // 0x2
        char pad_3[0x1];
        FHitResult HitResult; // 0x4
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_GetHitResultUnderFingerByChannel params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool APlayerController::GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderFinger"));
    struct Params_GetHitResultUnderFinger {
        ETouchIndex::Type FingerIndex; // 0x0
        ECollisionChannel TraceChannel; // 0x1
        bool bTraceComplex; // 0x2
        char pad_3[0x1];
        FHitResult HitResult; // 0x4
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_GetHitResultUnderFinger params{};
    params.FingerIndex = (ETouchIndex::Type)FingerIndex;
    params.TraceChannel = (ECollisionChannel)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
void APlayerController::ClientUnmutePlayer(FUniqueNetIdRepl PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientUnmutePlayer"));
    struct Params_ClientUnmutePlayer {
        FUniqueNetIdRepl PlayerId; // 0x0
    }; // Size: 0x28
    Params_ClientUnmutePlayer params{};
    params.PlayerId = (FUniqueNetIdRepl)PlayerId;
    ProcessEvent(func, &params);
}
bool APlayerController::GetHitResultUnderCursorForObjects(TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderCursorForObjects"));
    struct Params_GetHitResultUnderCursorForObjects {
        TArray<EObjectTypeQuery> ObjectTypes; // 0x0
        bool bTraceComplex; // 0x10
        char pad_11[0x3];
        FHitResult HitResult; // 0x14
        bool ReturnValue; // 0x9c
    }; // Size: 0x9d
    Params_GetHitResultUnderCursorForObjects params{};
    params.ObjectTypes = (TArray<EObjectTypeQuery>)ObjectTypes;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    ObjectTypes = params.ObjectTypes;
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
bool APlayerController::GetHitResultUnderCursorByChannel(ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderCursorByChannel"));
    struct Params_GetHitResultUnderCursorByChannel {
        ETraceTypeQuery TraceChannel; // 0x0
        bool bTraceComplex; // 0x1
        char pad_2[0x2];
        FHitResult HitResult; // 0x4
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_GetHitResultUnderCursorByChannel params{};
    params.TraceChannel = (ETraceTypeQuery)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus"));
    struct Params_ClientUpdateMultipleLevelsStreamingStatus {
        TArray<FUpdateLevelStreamingLevelStatus> LevelStatuses; // 0x0
    }; // Size: 0x10
    Params_ClientUpdateMultipleLevelsStreamingStatus params{};
    params.LevelStatuses = (TArray<FUpdateLevelStreamingLevelStatus>)LevelStatuses;
    ProcessEvent(func, &params);
    LevelStatuses = params.LevelStatuses;
}
bool APlayerController::GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult& HitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHitResultUnderCursor"));
    struct Params_GetHitResultUnderCursor {
        ECollisionChannel TraceChannel; // 0x0
        bool bTraceComplex; // 0x1
        char pad_2[0x2];
        FHitResult HitResult; // 0x4
        bool ReturnValue; // 0x8c
    }; // Size: 0x8d
    Params_GetHitResultUnderCursor params{};
    params.TraceChannel = (ECollisionChannel)TraceChannel;
    params.bTraceComplex = (bool)bTraceComplex;
    params.HitResult = (FHitResult)HitResult;
    ProcessEvent(func, &params);
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
float APlayerController::GetHapticFeedbackScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetHapticFeedbackScale"));
    struct Params_GetHapticFeedbackScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHapticFeedbackScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float APlayerController::GetForceFeedbackScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetForceFeedbackScale"));
    struct Params_GetForceFeedbackScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetForceFeedbackScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector APlayerController::GetFocalLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.GetFocalLocation"));
    struct Params_GetFocalLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFocalLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APlayerController::ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStopForceFeedback"));
    struct Params_ClientStopForceFeedback {
        UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
        FName Tag; // 0x8
    }; // Size: 0x10
    Params_ClientStopForceFeedback params{};
    params.ForceFeedbackEffect = (UForceFeedbackEffect*)ForceFeedbackEffect;
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
}
void APlayerController::FOV(float NewFOV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.FOV"));
    struct Params_FOV {
        float NewFOV; // 0x0
    }; // Size: 0x4
    Params_FOV params{};
    params.NewFOV = (float)NewFOV;
    ProcessEvent(func, &params);
}
void APlayerController::EnableCheats() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.EnableCheats"));
    struct Params_EnableCheats {
    }; // Size: 0x0
    Params_EnableCheats params{};
    ProcessEvent(func, &params);
}
bool APlayerController::DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.DeprojectMousePositionToWorld"));
    struct Params_DeprojectMousePositionToWorld {
        FVector WorldLocation; // 0x0
        FVector WorldDirection; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_DeprojectMousePositionToWorld params{};
    params.WorldLocation = (FVector)WorldLocation;
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
    WorldDirection = params.WorldDirection;
    return (bool)params.ReturnValue;
}
void APlayerController::ConsoleKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ConsoleKey"));
    struct Params_ConsoleKey {
        FKey Key; // 0x0
    }; // Size: 0x18
    Params_ConsoleKey params{};
    params.Key = (FKey)Key;
    ProcessEvent(func, &params);
}
void APlayerController::ClientWasKicked() {}
void APlayerController::ClientVoiceHandshakeComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientVoiceHandshakeComplete"));
    struct Params_ClientVoiceHandshakeComplete {
    }; // Size: 0x0
    Params_ClientVoiceHandshakeComplete params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientUpdateLevelStreamingStatus"));
    struct Params_ClientUpdateLevelStreamingStatus {
        FName PackageName; // 0x0
        bool bNewShouldBeLoaded; // 0x8
        bool bNewShouldBeVisible; // 0x9
        bool bNewShouldBlockOnLoad; // 0xa
        char pad_b[0x1];
        int32_t LODIndex; // 0xc
    }; // Size: 0x10
    Params_ClientUpdateLevelStreamingStatus params{};
    params.PackageName = (FName)PackageName;
    params.bNewShouldBeLoaded = (bool)bNewShouldBeLoaded;
    params.bNewShouldBeVisible = (bool)bNewShouldBeVisible;
    params.bNewShouldBlockOnLoad = (bool)bNewShouldBlockOnLoad;
    params.LODIndex = (int32_t)LODIndex;
    ProcessEvent(func, &params);
}
void APlayerController::ClientTravelInternal(FString URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientTravelInternal"));
    struct Params_ClientTravelInternal {
        FString URL; // 0x0
        ETravelType TravelType; // 0x10
        bool bSeamless; // 0x11
        char pad_12[0x2];
        FGuid MapPackageGuid; // 0x14
    }; // Size: 0x24
    Params_ClientTravelInternal params{};
    params.URL = (FString)URL;
    params.TravelType = (ETravelType)TravelType;
    params.bSeamless = (bool)bSeamless;
    params.MapPackageGuid = (FGuid)MapPackageGuid;
    ProcessEvent(func, &params);
}
void APlayerController::ClientTravel(FString URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientTravel"));
    struct Params_ClientTravel {
        FString URL; // 0x0
        ETravelType TravelType; // 0x10
        bool bSeamless; // 0x11
        char pad_12[0x2];
        FGuid MapPackageGuid; // 0x14
    }; // Size: 0x24
    Params_ClientTravel params{};
    params.URL = (FString)URL;
    params.TravelType = (ETravelType)TravelType;
    params.bSeamless = (bool)bSeamless;
    params.MapPackageGuid = (FGuid)MapPackageGuid;
    ProcessEvent(func, &params);
}
void APlayerController::ClientTeamMessage(APlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientTeamMessage"));
    struct Params_ClientTeamMessage {
        APlayerState* SenderPlayerState; // 0x0
        FString S; // 0x8
        FName Type; // 0x18
        float MsgLifeTime; // 0x20
    }; // Size: 0x24
    Params_ClientTeamMessage params{};
    params.SenderPlayerState = (APlayerState*)SenderPlayerState;
    params.S = (FString)S;
    params.Type = (FName)Type;
    params.MsgLifeTime = (float)MsgLifeTime;
    ProcessEvent(func, &params);
}
void APlayerController::ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStopCameraShakesFromSource"));
    struct Params_ClientStopCameraShakesFromSource {
        UCameraShakeSourceComponent* SourceComponent; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_ClientStopCameraShakesFromSource params{};
    params.SourceComponent = (UCameraShakeSourceComponent*)SourceComponent;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerController::ClientStopCameraShake(UClass* Shake, bool bImmediately) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStopCameraShake"));
    struct Params_ClientStopCameraShake {
        UClass* Shake; // 0x0
        bool bImmediately; // 0x8
    }; // Size: 0x9
    Params_ClientStopCameraShake params{};
    params.Shake = (UClass*)Shake;
    params.bImmediately = (bool)bImmediately;
    ProcessEvent(func, &params);
}
void APlayerController::ClientStopCameraAnim(UCameraAnim* AnimToStop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStopCameraAnim"));
    struct Params_ClientStopCameraAnim {
        UCameraAnim* AnimToStop; // 0x0
    }; // Size: 0x8
    Params_ClientStopCameraAnim params{};
    params.AnimToStop = (UCameraAnim*)AnimToStop;
    ProcessEvent(func, &params);
}
void APlayerController::ClientStartOnlineSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStartOnlineSession"));
    struct Params_ClientStartOnlineSession {
    }; // Size: 0x0
    Params_ClientStartOnlineSession params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientStartCameraShake(UClass* Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientStartCameraShake"));
    struct Params_ClientStartCameraShake {
        UClass* Shake; // 0x0
        float Scale; // 0x8
        ECameraShakePlaySpace PlaySpace; // 0xc
        char pad_d[0x3];
        FRotator UserPlaySpaceRot; // 0x10
    }; // Size: 0x1c
    Params_ClientStartCameraShake params{};
    params.Shake = (UClass*)Shake;
    params.Scale = (float)Scale;
    params.PlaySpace = (ECameraShakePlaySpace)PlaySpace;
    params.UserPlaySpaceRot = (FRotator)UserPlaySpaceRot;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSpawnCameraLensEffect(UClass* LensEffectEmitterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSpawnCameraLensEffect"));
    struct Params_ClientSpawnCameraLensEffect {
        UClass* LensEffectEmitterClass; // 0x0
    }; // Size: 0x8
    Params_ClientSpawnCameraLensEffect params{};
    params.LensEffectEmitterClass = (UClass*)LensEffectEmitterClass;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetHUD(UClass* NewHUDClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetHUD"));
    struct Params_ClientSetHUD {
        UClass* NewHUDClass; // 0x0
    }; // Size: 0x8
    Params_ClientSetHUD params{};
    params.NewHUDClass = (UClass*)NewHUDClass;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetForceMipLevelsToBeResident"));
    struct Params_ClientSetForceMipLevelsToBeResident {
        UMaterialInterface* Material; // 0x0
        float ForceDuration; // 0x8
        int32_t CinematicTextureGroups; // 0xc
    }; // Size: 0x10
    Params_ClientSetForceMipLevelsToBeResident params{};
    params.Material = (UMaterialInterface*)Material;
    params.ForceDuration = (float)ForceDuration;
    params.CinematicTextureGroups = (int32_t)CinematicTextureGroups;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetCinematicMode"));
    struct Params_ClientSetCinematicMode {
        bool bInCinematicMode; // 0x0
        bool bAffectsMovement; // 0x1
        bool bAffectsTurning; // 0x2
        bool bAffectsHUD; // 0x3
    }; // Size: 0x4
    Params_ClientSetCinematicMode params{};
    params.bInCinematicMode = (bool)bInCinematicMode;
    params.bAffectsMovement = (bool)bAffectsMovement;
    params.bAffectsTurning = (bool)bAffectsTurning;
    params.bAffectsHUD = (bool)bAffectsHUD;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetCameraMode(FName NewCamMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetCameraMode"));
    struct Params_ClientSetCameraMode {
        FName NewCamMode; // 0x0
    }; // Size: 0x8
    Params_ClientSetCameraMode params{};
    params.NewCamMode = (FName)NewCamMode;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetCameraFade"));
    struct Params_ClientSetCameraFade {
        bool bEnableFading; // 0x0
        char pad_1[0x3];
        FColor FadeColor; // 0x4
        FVector2D FadeAlpha; // 0x8
        float FadeTime; // 0x10
        bool bFadeAudio; // 0x14
        bool bHoldWhenFinished; // 0x15
    }; // Size: 0x16
    Params_ClientSetCameraFade params{};
    params.bEnableFading = (bool)bEnableFading;
    params.FadeColor = (FColor)FadeColor;
    params.FadeAlpha = (FVector2D)FadeAlpha;
    params.FadeTime = (float)FadeTime;
    params.bFadeAudio = (bool)bFadeAudio;
    params.bHoldWhenFinished = (bool)bHoldWhenFinished;
    ProcessEvent(func, &params);
}
void APlayerController::ClientSetBlockOnAsyncLoading() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientSetBlockOnAsyncLoading"));
    struct Params_ClientSetBlockOnAsyncLoading {
    }; // Size: 0x0
    Params_ClientSetBlockOnAsyncLoading params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientRestart(APawn* NewPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientRestart"));
    struct Params_ClientRestart {
        APawn* NewPawn; // 0x0
    }; // Size: 0x8
    Params_ClientRestart params{};
    params.NewPawn = (APawn*)NewPawn;
    ProcessEvent(func, &params);
}
void APlayerController::ClientReturnToMainMenuWithTextReason() {}
void APlayerController::ClientReturnToMainMenu(FString ReturnReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientReturnToMainMenu"));
    struct Params_ClientReturnToMainMenu {
        FString ReturnReason; // 0x0
    }; // Size: 0x10
    Params_ClientReturnToMainMenu params{};
    params.ReturnReason = (FString)ReturnReason;
    ProcessEvent(func, &params);
}
void APlayerController::ClientRetryClientRestart(APawn* NewPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientRetryClientRestart"));
    struct Params_ClientRetryClientRestart {
        APawn* NewPawn; // 0x0
    }; // Size: 0x8
    Params_ClientRetryClientRestart params{};
    params.NewPawn = (APawn*)NewPawn;
    ProcessEvent(func, &params);
}
void APlayerController::ClientReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientReset"));
    struct Params_ClientReset {
    }; // Size: 0x0
    Params_ClientReset params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientRepObjRef(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientRepObjRef"));
    struct Params_ClientRepObjRef {
        UObject* Object; // 0x0
    }; // Size: 0x8
    Params_ClientRepObjRef params{};
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
}
void APlayerController::ClientReceiveLocalizedMessage(UClass* Message, int32_t Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientReceiveLocalizedMessage"));
    struct Params_ClientReceiveLocalizedMessage {
        UClass* Message; // 0x0
        int32_t Switch; // 0x8
        char pad_c[0x4];
        APlayerState* RelatedPlayerState_1; // 0x10
        APlayerState* RelatedPlayerState_2; // 0x18
        UObject* OptionalObject; // 0x20
    }; // Size: 0x28
    Params_ClientReceiveLocalizedMessage params{};
    params.Message = (UClass*)Message;
    params.Switch = (int32_t)Switch;
    params.RelatedPlayerState_1 = (APlayerState*)RelatedPlayerState_1;
    params.RelatedPlayerState_2 = (APlayerState*)RelatedPlayerState_2;
    params.OptionalObject = (UObject*)OptionalObject;
    ProcessEvent(func, &params);
}
void APlayerController::ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPrestreamTextures"));
    struct Params_ClientPrestreamTextures {
        AActor* ForcedActor; // 0x0
        float ForceDuration; // 0x8
        bool bEnableStreaming; // 0xc
        char pad_d[0x3];
        int32_t CinematicTextureGroups; // 0x10
    }; // Size: 0x14
    Params_ClientPrestreamTextures params{};
    params.ForcedActor = (AActor*)ForcedActor;
    params.ForceDuration = (float)ForceDuration;
    params.bEnableStreaming = (bool)bEnableStreaming;
    params.CinematicTextureGroups = (int32_t)CinematicTextureGroups;
    ProcessEvent(func, &params);
}
void APlayerController::ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPrepareMapChange"));
    struct Params_ClientPrepareMapChange {
        FName LevelName; // 0x0
        bool bFirst; // 0x8
        bool bLast; // 0x9
    }; // Size: 0xa
    Params_ClientPrepareMapChange params{};
    params.LevelName = (FName)LevelName;
    params.bFirst = (bool)bFirst;
    params.bLast = (bool)bLast;
    ProcessEvent(func, &params);
}
void APlayerController::ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPlaySoundAtLocation"));
    struct Params_ClientPlaySoundAtLocation {
        USoundBase* Sound; // 0x0
        FVector Location; // 0x8
        float VolumeMultiplier; // 0x14
        float PitchMultiplier; // 0x18
    }; // Size: 0x1c
    Params_ClientPlaySoundAtLocation params{};
    params.Sound = (USoundBase*)Sound;
    params.Location = (FVector)Location;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    ProcessEvent(func, &params);
}
void APlayerController::ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPlaySound"));
    struct Params_ClientPlaySound {
        USoundBase* Sound; // 0x0
        float VolumeMultiplier; // 0x8
        float PitchMultiplier; // 0xc
    }; // Size: 0x10
    Params_ClientPlaySound params{};
    params.Sound = (USoundBase*)Sound;
    params.VolumeMultiplier = (float)VolumeMultiplier;
    params.PitchMultiplier = (float)PitchMultiplier;
    ProcessEvent(func, &params);
}
void APlayerController::ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientPlayCameraAnim"));
    struct Params_ClientPlayCameraAnim {
        UCameraAnim* AnimToPlay; // 0x0
        float Scale; // 0x8
        float Rate; // 0xc
        float BlendInTime; // 0x10
        float BlendOutTime; // 0x14
        bool bLoop; // 0x18
        bool bRandomStartTime; // 0x19
        ECameraShakePlaySpace Space; // 0x1a
        char pad_1b[0x1];
        FRotator CustomPlaySpace; // 0x1c
    }; // Size: 0x28
    Params_ClientPlayCameraAnim params{};
    params.AnimToPlay = (UCameraAnim*)AnimToPlay;
    params.Scale = (float)Scale;
    params.Rate = (float)Rate;
    params.BlendInTime = (float)BlendInTime;
    params.BlendOutTime = (float)BlendOutTime;
    params.bLoop = (bool)bLoop;
    params.bRandomStartTime = (bool)bRandomStartTime;
    params.Space = (ECameraShakePlaySpace)Space;
    params.CustomPlaySpace = (FRotator)CustomPlaySpace;
    ProcessEvent(func, &params);
}
void APlayerController::ClientMutePlayer(FUniqueNetIdRepl PlayerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientMutePlayer"));
    struct Params_ClientMutePlayer {
        FUniqueNetIdRepl PlayerId; // 0x0
    }; // Size: 0x28
    Params_ClientMutePlayer params{};
    params.PlayerId = (FUniqueNetIdRepl)PlayerId;
    ProcessEvent(func, &params);
}
void APlayerController::ClientMessage(FString S, FName Type, float MsgLifeTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientMessage"));
    struct Params_ClientMessage {
        FString S; // 0x0
        FName Type; // 0x10
        float MsgLifeTime; // 0x18
    }; // Size: 0x1c
    Params_ClientMessage params{};
    params.S = (FString)S;
    params.Type = (FName)Type;
    params.MsgLifeTime = (float)MsgLifeTime;
    ProcessEvent(func, &params);
}
void APlayerController::ClientIgnoreMoveInput(bool bIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientIgnoreMoveInput"));
    struct Params_ClientIgnoreMoveInput {
        bool bIgnore; // 0x0
    }; // Size: 0x1
    Params_ClientIgnoreMoveInput params{};
    params.bIgnore = (bool)bIgnore;
    ProcessEvent(func, &params);
}
void APlayerController::ClientIgnoreLookInput(bool bIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientIgnoreLookInput"));
    struct Params_ClientIgnoreLookInput {
        bool bIgnore; // 0x0
    }; // Size: 0x1
    Params_ClientIgnoreLookInput params{};
    params.bIgnore = (bool)bIgnore;
    ProcessEvent(func, &params);
}
void APlayerController::ClientGotoState(FName NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientGotoState"));
    struct Params_ClientGotoState {
        FName NewState; // 0x0
    }; // Size: 0x8
    Params_ClientGotoState params{};
    params.NewState = (FName)NewState;
    ProcessEvent(func, &params);
}
void APlayerController::ClientGameEnded(AActor* EndGameFocus, bool bIsWinner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientGameEnded"));
    struct Params_ClientGameEnded {
        AActor* EndGameFocus; // 0x0
        bool bIsWinner; // 0x8
    }; // Size: 0x9
    Params_ClientGameEnded params{};
    params.EndGameFocus = (AActor*)EndGameFocus;
    params.bIsWinner = (bool)bIsWinner;
    ProcessEvent(func, &params);
}
void APlayerController::ClientForceGarbageCollection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientForceGarbageCollection"));
    struct Params_ClientForceGarbageCollection {
    }; // Size: 0x0
    Params_ClientForceGarbageCollection params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientEndOnlineSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientEndOnlineSession"));
    struct Params_ClientEndOnlineSession {
    }; // Size: 0x0
    Params_ClientEndOnlineSession params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientEnableNetworkVoice(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientEnableNetworkVoice"));
    struct Params_ClientEnableNetworkVoice {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_ClientEnableNetworkVoice params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void APlayerController::ClientCommitMapChange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientCommitMapChange"));
    struct Params_ClientCommitMapChange {
    }; // Size: 0x0
    Params_ClientCommitMapChange params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientCapBandwidth(int32_t Cap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientCapBandwidth"));
    struct Params_ClientCapBandwidth {
        int32_t Cap; // 0x0
    }; // Size: 0x4
    Params_ClientCapBandwidth params{};
    params.Cap = (int32_t)Cap;
    ProcessEvent(func, &params);
}
void APlayerController::ClientCancelPendingMapChange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientCancelPendingMapChange"));
    struct Params_ClientCancelPendingMapChange {
    }; // Size: 0x0
    Params_ClientCancelPendingMapChange params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClientAddTextureStreamingLoc"));
    struct Params_ClientAddTextureStreamingLoc {
        FVector InLoc; // 0x0
        float Duration; // 0xc
        bool bOverrideLocation; // 0x10
    }; // Size: 0x11
    Params_ClientAddTextureStreamingLoc params{};
    params.InLoc = (FVector)InLoc;
    params.Duration = (float)Duration;
    params.bOverrideLocation = (bool)bOverrideLocation;
    ProcessEvent(func, &params);
}
void APlayerController::ClearAudioListenerOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClearAudioListenerOverride"));
    struct Params_ClearAudioListenerOverride {
    }; // Size: 0x0
    Params_ClearAudioListenerOverride params{};
    ProcessEvent(func, &params);
}
void APlayerController::ClearAudioListenerAttenuationOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ClearAudioListenerAttenuationOverride"));
    struct Params_ClearAudioListenerAttenuationOverride {
    }; // Size: 0x0
    Params_ClearAudioListenerAttenuationOverride params{};
    ProcessEvent(func, &params);
}
bool APlayerController::CanRestartPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.CanRestartPlayer"));
    struct Params_CanRestartPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanRestartPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void APlayerController::Camera(FName NewMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.Camera"));
    struct Params_Camera {
        FName NewMode; // 0x0
    }; // Size: 0x8
    Params_Camera params{};
    params.NewMode = (FName)NewMode;
    ProcessEvent(func, &params);
}
void APlayerController::AddYawInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.AddYawInput"));
    struct Params_AddYawInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddYawInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void APlayerController::AddRollInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.AddRollInput"));
    struct Params_AddRollInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddRollInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void APlayerController::AddPitchInput(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.AddPitchInput"));
    struct Params_AddPitchInput {
        float Val; // 0x0
    }; // Size: 0x4
    Params_AddPitchInput params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void APlayerController::ActivateTouchInterface(UTouchInterface* NewTouchInterface) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlayerController.ActivateTouchInterface"));
    struct Params_ActivateTouchInterface {
        UTouchInterface* NewTouchInterface; // 0x0
    }; // Size: 0x8
    Params_ActivateTouchInterface params{};
    params.NewTouchInterface = (UTouchInterface*)NewTouchInterface;
    ProcessEvent(func, &params);
}
