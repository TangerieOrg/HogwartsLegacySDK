#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "AEnemyBroomRider_AiController.hpp"
#include "AFlyingBroom.hpp"
#include "APawn.hpp"
#include "EBroomDismountType.hpp"
#include "EBroomMountType.hpp"
#include "ECustomInterpType\Type.hpp"
#include "EFlyingBroomHitObjectType.hpp"
#include "EStandardManagedPriority.hpp"
#include "FClothMountTargets.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAkComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFlyingBroomAudio.hpp"
#include "UFlyingBroomMovementComponent.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFunction.hpp"
#include "UMountHeightLimitComponent.hpp"
#include "UMountStreamingComponent.hpp"
#include "UObject.hpp"
#include "UPhysicsAsset.hpp"
#include "UScheduledEntity.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USplineComponent.hpp"
#include "UTriggerEffect.hpp"
AFlyingBroom* AFlyingBroom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroom");
    return (AFlyingBroom*)res;
}
void AFlyingBroom::StartSettingForceHoverValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingForceHoverValue"));
    struct Params_StartSettingForceHoverValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingForceHoverValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
bool AFlyingBroom::Teleport(FVector DestLocation, float DestYaw, bool ResetCamera, bool TeleportPhysics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.Teleport"));
    struct Params_Teleport {
        FVector DestLocation; // 0x0
        float DestYaw; // 0xc
        bool ResetCamera; // 0x10
        bool TeleportPhysics; // 0x11
        bool ReturnValue; // 0x12
    }; // Size: 0x13
    Params_Teleport params{};
    params.DestLocation = (FVector)DestLocation;
    params.DestYaw = (float)DestYaw;
    params.ResetCamera = (bool)ResetCamera;
    params.TeleportPhysics = (bool)TeleportPhysics;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFlyingBroom::UpdateRTPCValue(float InRTPCValue, FString RTPC, FVector2D ValueRange, FVector2D AudioValueRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.UpdateRTPCValue"));
    struct Params_UpdateRTPCValue {
        float InRTPCValue; // 0x0
        char pad_4[0x4];
        FString RTPC; // 0x8
        FVector2D ValueRange; // 0x18
        FVector2D AudioValueRange; // 0x20
    }; // Size: 0x28
    Params_UpdateRTPCValue params{};
    params.InRTPCValue = (float)InRTPCValue;
    params.RTPC = (FString)RTPC;
    params.ValueRange = (FVector2D)ValueRange;
    params.AudioValueRange = (FVector2D)AudioValueRange;
    ProcessEvent(func, &params);
}
void AFlyingBroom::RemoveRiderClothCollisionSources(ACharacter* Character, bool bRemoveDelegates) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.RemoveRiderClothCollisionSources"));
    struct Params_RemoveRiderClothCollisionSources {
        ACharacter* Character; // 0x0
        bool bRemoveDelegates; // 0x8
    }; // Size: 0x9
    Params_RemoveRiderClothCollisionSources params{};
    params.Character = (ACharacter*)Character;
    params.bRemoveDelegates = (bool)bRemoveDelegates;
    ProcessEvent(func, &params);
}
void AFlyingBroom::StartSettingDismountAllowedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingDismountAllowedValue"));
    struct Params_StartSettingDismountAllowedValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingDismountAllowedValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::UpdateBroomAudio(UFlyingBroomAudio* BroomAudio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.UpdateBroomAudio"));
    struct Params_UpdateBroomAudio {
        UFlyingBroomAudio* BroomAudio; // 0x0
    }; // Size: 0x8
    Params_UpdateBroomAudio params{};
    params.BroomAudio = (UFlyingBroomAudio*)BroomAudio;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetupPlayerOnBroom(ABiped_Player* BipedPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetupPlayerOnBroom"));
    struct Params_SetupPlayerOnBroom {
        ABiped_Player* BipedPlayer; // 0x0
    }; // Size: 0x8
    Params_SetupPlayerOnBroom params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SupressHoverDisabledUI(bool bDisable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SupressHoverDisabledUI"));
    struct Params_SupressHoverDisabledUI {
        bool bDisable; // 0x0
    }; // Size: 0x1
    Params_SupressHoverDisabledUI params{};
    params.bDisable = (bool)bDisable;
    ProcessEvent(func, &params);
}
void AFlyingBroom::StartSettingMaxFlyHeightValue(float Value, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingMaxFlyHeightValue"));
    struct Params_StartSettingMaxFlyHeightValue {
        float Value; // 0x0
        EStandardManagedPriority Priority; // 0x4
        char pad_5[0x3];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingMaxFlyHeightValue params{};
    params.Value = (float)Value;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::StartSettingDisableInputValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingDisableInputValue"));
    struct Params_StartSettingDisableInputValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingDisableInputValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::FinishSettingForceHoverValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingForceHoverValue"));
    struct Params_FinishSettingForceHoverValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingForceHoverValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnNPCMountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnNPCMountBroom"));
    struct Params_OnNPCMountBroom {
    }; // Size: 0x0
    Params_OnNPCMountBroom params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::StartSettingDisableBarrelRollValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingDisableBarrelRollValue"));
    struct Params_StartSettingDisableBarrelRollValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingDisableBarrelRollValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::StartSettingBoostAllowedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.StartSettingBoostAllowedValue"));
    struct Params_StartSettingBoostAllowedValue {
        bool bValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_StartSettingBoostAllowedValue params{};
    params.bValue = (bool)bValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::ShowBroomHUD(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.ShowBroomHUD"));
    struct Params_ShowBroomHUD {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowBroomHUD params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnPlayerDismountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnPlayerDismountBroom"));
    struct Params_OnPlayerDismountBroom {
    }; // Size: 0x0
    Params_OnPlayerDismountBroom params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetupBroomComponents(UCapsuleComponent* Capsule, UFlyingBroomMovementComponent* Movement, USkeletalMeshComponent* Mesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetupBroomComponents"));
    struct Params_SetupBroomComponents {
        UCapsuleComponent* Capsule; // 0x0
        UFlyingBroomMovementComponent* Movement; // 0x8
        USkeletalMeshComponent* Mesh; // 0x10
    }; // Size: 0x18
    Params_SetupBroomComponents params{};
    params.Capsule = (UCapsuleComponent*)Capsule;
    params.Movement = (UFlyingBroomMovementComponent*)Movement;
    params.Mesh = (USkeletalMeshComponent*)Mesh;
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnActorIsHiddenChanged(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnActorIsHiddenChanged"));
    struct Params_OnActorIsHiddenChanged {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_OnActorIsHiddenChanged params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetSplineComponent(USplineComponent* InSplineComponent, bool bTeleportToStart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetSplineComponent"));
    struct Params_SetSplineComponent {
        USplineComponent* InSplineComponent; // 0x0
        bool bTeleportToStart; // 0x8
    }; // Size: 0x9
    Params_SetSplineComponent params{};
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    params.bTeleportToStart = (bool)bTeleportToStart;
    ProcessEvent(func, &params);
}
void AFlyingBroom::EnableMountedRiderIKSetup(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.EnableMountedRiderIKSetup"));
    struct Params_EnableMountedRiderIKSetup {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_EnableMountedRiderIKSetup params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetScaleInfo(bool bInScaleIn, float InActiveScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetScaleInfo"));
    struct Params_SetScaleInfo {
        bool bInScaleIn; // 0x0
        char pad_1[0x3];
        float InActiveScale; // 0x4
    }; // Size: 0x8
    Params_SetScaleInfo params{};
    params.bInScaleIn = (bool)bInScaleIn;
    params.InActiveScale = (float)InActiveScale;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetMaxFlyingSpeed(float Speed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetMaxFlyingSpeed"));
    struct Params_SetMaxFlyingSpeed {
        float Speed; // 0x0
    }; // Size: 0x4
    Params_SetMaxFlyingSpeed params{};
    params.Speed = (float)Speed;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SetForceLand(bool bInForceLand) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SetForceLand"));
    struct Params_SetForceLand {
        bool bInForceLand; // 0x0
    }; // Size: 0x1
    Params_SetForceLand params{};
    params.bInForceLand = (bool)bInForceLand;
    ProcessEvent(func, &params);
}
void AFlyingBroom::SafeDismountHeightCheck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.SafeDismountHeightCheck"));
    struct Params_SafeDismountHeightCheck {
    }; // Size: 0x0
    Params_SafeDismountHeightCheck params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::PushFlightDataOntoStack(UFlyingBroomPhysics* NewFlightData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.PushFlightDataOntoStack"));
    struct Params_PushFlightDataOntoStack {
        UFlyingBroomPhysics* NewFlightData; // 0x0
    }; // Size: 0x8
    Params_PushFlightDataOntoStack params{};
    params.NewFlightData = (UFlyingBroomPhysics*)NewFlightData;
    ProcessEvent(func, &params);
}
void AFlyingBroom::EnableMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.EnableMovement"));
    struct Params_EnableMovement {
    }; // Size: 0x0
    Params_EnableMovement params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::PopFlightDataOffStack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.PopFlightDataOffStack"));
    struct Params_PopFlightDataOffStack {
    }; // Size: 0x0
    Params_PopFlightDataOffStack params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnTurboStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnTurboStart"));
    struct Params_OnTurboStart {
    }; // Size: 0x0
    Params_OnTurboStart params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnPlayerMountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnPlayerMountBroom"));
    struct Params_OnPlayerMountBroom {
    }; // Size: 0x0
    Params_OnPlayerMountBroom params{};
    ProcessEvent(func, &params);
}
bool AFlyingBroom::IsInHoverMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.IsInHoverMode"));
    struct Params_IsInHoverMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInHoverMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFlyingBroom::OnNPCDismountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnNPCDismountBroom"));
    struct Params_OnNPCDismountBroom {
    }; // Size: 0x0
    Params_OnNPCDismountBroom params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::BroomEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.BroomEvent"));
    struct Params_BroomEvent {
        FName EventName; // 0x0
    }; // Size: 0x8
    Params_BroomEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
}
bool AFlyingBroom::IsInTurbo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.IsInTurbo"));
    struct Params_IsInTurbo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInTurbo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFlyingBroom::OnMountedNPCHiddenIsChanged(UScheduledEntity* inParticipant, bool inHidden) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnMountedNPCHiddenIsChanged"));
    struct Params_OnMountedNPCHiddenIsChanged {
        UScheduledEntity* inParticipant; // 0x0
        bool inHidden; // 0x8
    }; // Size: 0x9
    Params_OnMountedNPCHiddenIsChanged params{};
    params.inParticipant = (UScheduledEntity*)inParticipant;
    params.inHidden = (bool)inHidden;
    ProcessEvent(func, &params);
}
void AFlyingBroom::AIMountBroom(ACharacter* Character, UFlyingBroomPhysics* FlightData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AIMountBroom"));
    struct Params_AIMountBroom {
        ACharacter* Character; // 0x0
        UFlyingBroomPhysics* FlightData; // 0x8
    }; // Size: 0x10
    Params_AIMountBroom params{};
    params.Character = (ACharacter*)Character;
    params.FlightData = (UFlyingBroomPhysics*)FlightData;
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnLeaveBoostZone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnLeaveBoostZone"));
    struct Params_OnLeaveBoostZone {
    }; // Size: 0x0
    Params_OnLeaveBoostZone params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnBoostStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnBoostStart"));
    struct Params_OnBoostStart {
    }; // Size: 0x0
    Params_OnBoostStart params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnEnterBoostZone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnEnterBoostZone"));
    struct Params_OnEnterBoostZone {
    }; // Size: 0x0
    Params_OnEnterBoostZone params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::OnBarrelRollStart(bool bRollLeft) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.OnBarrelRollStart"));
    struct Params_OnBarrelRollStart {
        bool bRollLeft; // 0x0
    }; // Size: 0x1
    Params_OnBarrelRollStart params{};
    params.bRollLeft = (bool)bRollLeft;
    ProcessEvent(func, &params);
}
void AFlyingBroom::DisableSpellHUD(bool DisableSpellHUD, bool DisableHealtHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.DisableSpellHUD"));
    struct Params_DisableSpellHUD {
        bool DisableSpellHUD; // 0x0
        bool DisableHealtHUD; // 0x1
    }; // Size: 0x2
    Params_DisableSpellHUD params{};
    params.DisableSpellHUD = (bool)DisableSpellHUD;
    params.DisableHealtHUD = (bool)DisableHealtHUD;
    ProcessEvent(func, &params);
}
bool AFlyingBroom::IsInBoost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.IsInBoost"));
    struct Params_IsInBoost {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInBoost params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AFlyingBroom::IsForceLanding() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.IsForceLanding"));
    struct Params_IsForceLanding {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsForceLanding params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AFlyingBroom::IsBoostRecharging() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.IsBoostRecharging"));
    struct Params_IsBoostRecharging {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBoostRecharging params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFlyingBroom::AddBoostPercentage(float Percent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AddBoostPercentage"));
    struct Params_AddBoostPercentage {
        float Percent; // 0x0
    }; // Size: 0x4
    Params_AddBoostPercentage params{};
    params.Percent = (float)Percent;
    ProcessEvent(func, &params);
}
float AFlyingBroom::GetMaxBoostMeter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.GetMaxBoostMeter"));
    struct Params_GetMaxBoostMeter {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxBoostMeter params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
EFlyingBroomHitObjectType AFlyingBroom::GetLastHitObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.GetLastHitObject"));
    struct Params_GetLastHitObject {
        EFlyingBroomHitObjectType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastHitObject params{};
    ProcessEvent(func, &params);
    return (EFlyingBroomHitObjectType)params.ReturnValue;
}
bool AFlyingBroom::CanIdleBreak() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.CanIdleBreak"));
    struct Params_CanIdleBreak {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanIdleBreak params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EBroomDismountType AFlyingBroom::GetDismountType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.GetDismountType"));
    struct Params_GetDismountType {
        EBroomDismountType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDismountType params{};
    ProcessEvent(func, &params);
    return (EBroomDismountType)params.ReturnValue;
}
void AFlyingBroom::AcceleratePressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AcceleratePressed"));
    struct Params_AcceleratePressed {
    }; // Size: 0x0
    Params_AcceleratePressed params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::DetachPlayerFromBroomOnDismount(ABiped_Player* BipedPlayer, AFlyingBroom* BroomProp, float VelocityDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.DetachPlayerFromBroomOnDismount"));
    struct Params_DetachPlayerFromBroomOnDismount {
        ABiped_Player* BipedPlayer; // 0x0
        AFlyingBroom* BroomProp; // 0x8
        float VelocityDamping; // 0x10
    }; // Size: 0x14
    Params_DetachPlayerFromBroomOnDismount params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.BroomProp = (AFlyingBroom*)BroomProp;
    params.VelocityDamping = (float)VelocityDamping;
    ProcessEvent(func, &params);
}
float AFlyingBroom::GetBoostMeterAmount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.GetBoostMeterAmount"));
    struct Params_GetBoostMeterAmount {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBoostMeterAmount params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AFlyingBroom::FinishSettingMaxFlyHeightValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingMaxFlyHeightValue"));
    struct Params_FinishSettingMaxFlyHeightValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingMaxFlyHeightValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::AIDismountBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AIDismountBroom"));
    struct Params_AIDismountBroom {
    }; // Size: 0x0
    Params_AIDismountBroom params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::FinishSettingDismountAllowedValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingDismountAllowedValue"));
    struct Params_FinishSettingDismountAllowedValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingDismountAllowedValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::FinishSettingDisableInputValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingDisableInputValue"));
    struct Params_FinishSettingDisableInputValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingDisableInputValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::FinishSettingDisableBarrelRollValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingDisableBarrelRollValue"));
    struct Params_FinishSettingDisableBarrelRollValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingDisableBarrelRollValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::FinishSettingBoostAllowedValue(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.FinishSettingBoostAllowedValue"));
    struct Params_FinishSettingBoostAllowedValue {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
    }; // Size: 0x10
    Params_FinishSettingBoostAllowedValue params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
}
void AFlyingBroom::DismountBroom(ABiped_Player* Player, bool Instant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.DismountBroom"));
    struct Params_DismountBroom {
        ABiped_Player* Player; // 0x0
        bool Instant; // 0x8
    }; // Size: 0x9
    Params_DismountBroom params{};
    params.Player = (ABiped_Player*)Player;
    params.Instant = (bool)Instant;
    ProcessEvent(func, &params);
}
void AFlyingBroom::DisableMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.DisableMovement"));
    struct Params_DisableMovement {
    }; // Size: 0x0
    Params_DisableMovement params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::AttachPlayerToBroomOnMount(ABiped_Player* BipedPlayer, AFlyingBroom* BroomProp, EBroomMountType InMountType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AttachPlayerToBroomOnMount"));
    struct Params_AttachPlayerToBroomOnMount {
        ABiped_Player* BipedPlayer; // 0x0
        AFlyingBroom* BroomProp; // 0x8
        EBroomMountType InMountType; // 0x10
    }; // Size: 0x11
    Params_AttachPlayerToBroomOnMount params{};
    params.BipedPlayer = (ABiped_Player*)BipedPlayer;
    params.BroomProp = (AFlyingBroom*)BroomProp;
    params.InMountType = (EBroomMountType)InMountType;
    ProcessEvent(func, &params);
}
bool AFlyingBroom::AllowDismount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AllowDismount"));
    struct Params_AllowDismount {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AllowDismount params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFlyingBroom::ApplyBroomStats() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.ApplyBroomStats"));
    struct Params_ApplyBroomStats {
    }; // Size: 0x0
    Params_ApplyBroomStats params{};
    ProcessEvent(func, &params);
}
void AFlyingBroom::AddRiderClothCollisionSources(ACharacter* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom.AddRiderClothCollisionSources"));
    struct Params_AddRiderClothCollisionSources {
        ACharacter* Character; // 0x0
    }; // Size: 0x8
    Params_AddRiderClothCollisionSources params{};
    params.Character = (ACharacter*)Character;
    ProcessEvent(func, &params);
}
