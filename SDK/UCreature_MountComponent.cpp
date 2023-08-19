#include "AActor.hpp"
#include "ACharacter.hpp"
#include "ACreatureMountHandler.hpp"
#include "ACreature_Character.hpp"
#include "EMountCombatChargeState.hpp"
#include "EMountFlyingGait.hpp"
#include "EMountMovementState.hpp"
#include "EMovementMode.hpp"
#include "FMercuna3DMovementProperties.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCreature_MountComponent.hpp"
#include "UCreature_MountFlightDynamics.hpp"
#include "UCreature_MountLandingDynamics.hpp"
#include "UFlightAnimationComponent.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
#include "UMountHeightLimitComponent.hpp"
#include "UMountStreamingComponent.hpp"
#include "UMovementPredictionComponent.hpp"
#include "UTriggerEffect.hpp"
UCreature_MountComponent* UCreature_MountComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_MountComponent");
    return (UCreature_MountComponent*)res;
}
void UCreature_MountComponent::UpdateMoveInput(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.UpdateMoveInput"));
    struct Params_UpdateMoveInput {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_UpdateMoveInput params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::SpeedUpReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.SpeedUpReleased"));
    struct Params_SpeedUpReleased {
    }; // Size: 0x0
    Params_SpeedUpReleased params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::UpdateGroundMovement(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.UpdateGroundMovement"));
    struct Params_UpdateGroundMovement {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_UpdateGroundMovement params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::SetMinimumFlyingGait(EMountFlyingGait InMinimumFlyingGait) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.SetMinimumFlyingGait"));
    struct Params_SetMinimumFlyingGait {
        EMountFlyingGait InMinimumFlyingGait; // 0x0
    }; // Size: 0x1
    Params_SetMinimumFlyingGait params{};
    params.InMinimumFlyingGait = (EMountFlyingGait)InMinimumFlyingGait;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::ToggleGallopTimedOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.ToggleGallopTimedOut"));
    struct Params_ToggleGallopTimedOut {
    }; // Size: 0x0
    Params_ToggleGallopTimedOut params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::TakeoffRequested(bool bSkipTakeoffAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.TakeoffRequested"));
    struct Params_TakeoffRequested {
        bool bSkipTakeoffAnimation; // 0x0
    }; // Size: 0x1
    Params_TakeoffRequested params{};
    params.bSkipTakeoffAnimation = (bool)bSkipTakeoffAnimation;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::StopVocalSfx(int32_t InTransitionDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.StopVocalSfx"));
    struct Params_StopVocalSfx {
        int32_t InTransitionDuration; // 0x0
    }; // Size: 0x4
    Params_StopVocalSfx params{};
    params.InTransitionDuration = (int32_t)InTransitionDuration;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::TakeOffPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.TakeOffPressed"));
    struct Params_TakeOffPressed {
    }; // Size: 0x0
    Params_TakeOffPressed params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::SpeedUpPressed(bool bSprintToggle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.SpeedUpPressed"));
    struct Params_SpeedUpPressed {
        bool bSprintToggle; // 0x0
    }; // Size: 0x1
    Params_SpeedUpPressed params{};
    params.bSprintToggle = (bool)bSprintToggle;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::ShowActionDiamond(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.ShowActionDiamond"));
    struct Params_ShowActionDiamond {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowActionDiamond params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::SetAutoLandingEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.SetAutoLandingEnabled"));
    struct Params_SetAutoLandingEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetAutoLandingEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::OnNearDeathKneel(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.OnNearDeathKneel"));
    struct Params_OnNearDeathKneel {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_OnNearDeathKneel params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::OnMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.OnMovementModeChanged"));
    struct Params_OnMovementModeChanged {
        ACharacter* Character; // 0x0
        EMovementMode PrevMovementMode; // 0x8
        uint8_t PreviousCustomMode; // 0x9
    }; // Size: 0xa
    Params_OnMovementModeChanged params{};
    params.Character = (ACharacter*)Character;
    params.PrevMovementMode = (EMovementMode)PrevMovementMode;
    params.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.OnHealthChanged"));
    struct Params_OnHealthChanged {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_OnHealthChanged params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::LightAttackReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.LightAttackReleased"));
    struct Params_LightAttackReleased {
    }; // Size: 0x0
    Params_LightAttackReleased params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::LightAttackPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.LightAttackPressed"));
    struct Params_LightAttackPressed {
    }; // Size: 0x0
    Params_LightAttackPressed params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::LandingRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.LandingRequested"));
    struct Params_LandingRequested {
    }; // Size: 0x0
    Params_LandingRequested params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::KeyboardWalkReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.KeyboardWalkReleased"));
    struct Params_KeyboardWalkReleased {
    }; // Size: 0x0
    Params_KeyboardWalkReleased params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::KeyboardWalkPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.KeyboardWalkPressed"));
    struct Params_KeyboardWalkPressed {
    }; // Size: 0x0
    Params_KeyboardWalkPressed params{};
    ProcessEvent(func, &params);
}
bool UCreature_MountComponent::IsFlying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.IsFlying"));
    struct Params_IsFlying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFlying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_MountComponent::CanFly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.CanFly"));
    struct Params_CanFly {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanFly params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EMountMovementState UCreature_MountComponent::GetMovementState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.GetMovementState"));
    struct Params_GetMovementState {
        EMountMovementState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMovementState params{};
    ProcessEvent(func, &params);
    return (EMountMovementState)params.ReturnValue;
}
EMovementMode UCreature_MountComponent::GetMovementMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.GetMovementMode"));
    struct Params_GetMovementMode {
        EMovementMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMovementMode params{};
    ProcessEvent(func, &params);
    return (EMovementMode)params.ReturnValue;
}
ACreatureMountHandler* UCreature_MountComponent::GetMountHandler() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.GetMountHandler"));
    struct Params_GetMountHandler {
        ACreatureMountHandler* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMountHandler params{};
    ProcessEvent(func, &params);
    return (ACreatureMountHandler*)params.ReturnValue;
}
bool UCreature_MountComponent::GetFlyingDistanceAboveGround(float& OutDistanceAboveGround) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.GetFlyingDistanceAboveGround"));
    struct Params_GetFlyingDistanceAboveGround {
        float OutDistanceAboveGround; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetFlyingDistanceAboveGround params{};
    params.OutDistanceAboveGround = (float)OutDistanceAboveGround;
    ProcessEvent(func, &params);
    OutDistanceAboveGround = params.OutDistanceAboveGround;
    return (bool)params.ReturnValue;
}
void UCreature_MountComponent::DismountTriggered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.DismountTriggered"));
    struct Params_DismountTriggered {
    }; // Size: 0x0
    Params_DismountTriggered params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::DismountReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.DismountReleased"));
    struct Params_DismountReleased {
    }; // Size: 0x0
    Params_DismountReleased params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::DismountPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.DismountPressed"));
    struct Params_DismountPressed {
    }; // Size: 0x0
    Params_DismountPressed params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::DismountBeganHold() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.DismountBeganHold"));
    struct Params_DismountBeganHold {
    }; // Size: 0x0
    Params_DismountBeganHold params{};
    ProcessEvent(func, &params);
}
void UCreature_MountComponent::DeactivateMountComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.DeactivateMountComponent"));
    struct Params_DeactivateMountComponent {
    }; // Size: 0x0
    Params_DeactivateMountComponent params{};
    ProcessEvent(func, &params);
}
bool UCreature_MountComponent::CanCharge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.CanCharge"));
    struct Params_CanCharge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanCharge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreature_MountComponent::ActivateMountComponent(ACreatureMountHandler* InMountHandler, bool bInRiderIsPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_MountComponent.ActivateMountComponent"));
    struct Params_ActivateMountComponent {
        ACreatureMountHandler* InMountHandler; // 0x0
        bool bInRiderIsPlayer; // 0x8
    }; // Size: 0x9
    Params_ActivateMountComponent params{};
    params.InMountHandler = (ACreatureMountHandler*)InMountHandler;
    params.bInRiderIsPlayer = (bool)bInRiderIsPlayer;
    ProcessEvent(func, &params);
}
