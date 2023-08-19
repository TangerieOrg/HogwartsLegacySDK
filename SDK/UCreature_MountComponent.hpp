#pragma once
#include <cstdint>
#include "EMountCombatChargeState.hpp"
#include "EMountFlyingGait.hpp"
#include "EMountMovementState.hpp"
#include "EMovementMode.hpp"
#include "FMercuna3DMovementProperties.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
class UCreature_MountLandingDynamics;
class UAkAudioEvent;
class ACreatureMountHandler;
class UCreature_MountFlightDynamics;
class ACharacter;
class UTriggerEffect;
class UMountStreamingComponent;
class UClass;
class ACreature_Character;
class UIcarus3DMovementComponent;
class UFlightAnimationComponent;
class UMountHeightLimitComponent;
class UMovementPredictionComponent;
class AActor;
#pragma pack(push, 1)
class UCreature_MountComponent : public UActorComponent {
public:
    float HoverFlightGaitSpeed; // 0xc8
    float SlowFlightGaitSpeed; // 0xcc
    float FastFlightGaitSpeed; // 0xd0
    char pad_d4[0x8];
    EMountFlyingGait CurrentFlyingGait; // 0xdc
    char pad_dd[0x3];
    EMountCombatChargeState CurrentChargeState; // 0xe0
    bool CombatChargeActive; // 0xe1
    bool CombatChargeEnabled; // 0xe2
    char pad_e3[0x1];
    float CombatChargeRequestDuration; // 0xe4
    char pad_e8[0x4];
    float CombatChargeMinActiveDuration; // 0xec
    char pad_f0[0x4];
    float CombatChargeCooldownDuration; // 0xf4
    char pad_f8[0x4];
    float CombatChargeRefillDelayDuration; // 0xfc
    char pad_100[0x4];
    float CombatChargeRefillRate; // 0x104
    float CombatChargeDepletionRate; // 0x108
    float CombatChargeAmount_Max; // 0x10c
    char pad_110[0x4];
    float CombatChargeAmount_SpawnsWith; // 0x114
    float CombatChargeAmount_MinUsable; // 0x118
    float CombatChargeWaterDepthLimit; // 0x11c
    UAkAudioEvent* CombatChargeRunOutSfx; // 0x120
    char pad_128[0x8];
    UAkAudioEvent* CombatChargeNoChargeSfx; // 0x130
    char pad_138[0x8];
    UAkAudioEvent* CombatChargePreSpecialAttackSfx; // 0x140
    char pad_148[0x4];
    int32_t DeactiveSfxTransitionDuration; // 0x14c
    float HealthRefillDelayDuration; // 0x150
    char pad_154[0x4];
    float HealthRefillDuration; // 0x158
    char pad_15c[0x4];
    float DeathTimeout; // 0x160
    char pad_164[0x1c];
    ACharacter* RiderCharacter; // 0x180
    UCreature_MountLandingDynamics* LandingDynamics; // 0x188
    UTriggerEffect* pChargeTriggerEffect; // 0x190
    UTriggerEffect* pJogTriggerEffect; // 0x198
    char pad_1a0[0x148];
    float DeadZone; // 0x2e8
    float TrotZone; // 0x2ec
    float ButtonHoldTime; // 0x2f0
    float ButtonTapTime; // 0x2f4
    float ToggleGallopTimeoutTime; // 0x2f8
    float MinInputTime; // 0x2fc
    float StickBounceMagnitudeThreshold; // 0x300
    float CameraRelativeAdjustmentAngle; // 0x304
    FRuntimeFloatCurve GallopHorizontalInputAdjustmentCurve; // 0x308
    FRuntimeFloatCurve GallopInputMagnitudeAdjustmentCurve; // 0x390
    float WallCollisionImpactAngleThreshold; // 0x418
    float FlyingWallCollisionImpactAngleThreshold; // 0x41c
    float NoMountZoneCollisionImpactAngleThreshold; // 0x420
    char pad_424[0x4];
    UCreature_MountFlightDynamics* FlightDynamics; // 0x428
    FMercuna3DMovementProperties FlyingMovementProperties; // 0x430
    FMercuna3DMovementProperties LandingMovementProperties; // 0x46c
    UClass* FlyingAdditiveAbility; // 0x4a8
    FName FlyingAdditiveChannel; // 0x4b0
    UClass* TailAdditiveAbility; // 0x4b8
    FName TailAdditiveChannel; // 0x4c0
    FVector2D MaxLevelGlidingTimeRangeForSlowFlight; // 0x4c8
    FVector2D MaxLevelGlidingTimeRangeForFastFlight; // 0x4d0
    FVector2D MinGlidingResetTimeRangeForSlowFlight; // 0x4d8
    FVector2D MinGlidingResetTimeRangeForFastFlight; // 0x4e0
    float MaxPitchForLevelFlight; // 0x4e8
    float MinSpeedForLevelFlight; // 0x4ec
    FRuntimeFloatCurve PitchToMinGlideSpeed; // 0x4f0
    float MaxPitchDegreesDownForFastFlightGait; // 0x578
    float MinGlideSpeedForFastFlightGait; // 0x57c
    float MinFlightTimeForAutoLanding; // 0x580
    float MaxSpeedForTrotLanding; // 0x584
    float MaxInputMagnitudeForHover; // 0x588
    float MaxDeltaYawToAccelerateWhenHovering; // 0x58c
    FRuntimeFloatCurve FlightInputToPitchCurve; // 0x590
    FRuntimeFloatCurve DistanceToHeightLimitToMaxPitchMultiplierCurve; // 0x618
    float VerticalHoverCollisionPredictionTime; // 0x6a0
    bool bEnableAutoTakeoffWhenFalling; // 0x6a4
    char pad_6a5[0x3];
    float MinFallingTimeForAutoTakeoff; // 0x6a8
    float MinTimeToLandingForAutoTakeoff; // 0x6ac
    float HoverGaitCapsuleHalfHeight; // 0x6b0
    float HoverGaitCapsuleRadius; // 0x6b4
    char pad_6b8[0x3c];
    bool bEnableIdleBreaks; // 0x6f4
    char pad_6f5[0x3];
    float MinIdleTimeForIdleBreak; // 0x6f8
    float MinTimeBetweenIdleBreaks; // 0x6fc
    char pad_700[0x10];
    float MoveZ; // 0x710
    float InputTime; // 0x714
    float ReleaseTime; // 0x718
    bool bStartedMoving; // 0x71c
    bool bUsingKeyboard; // 0x71d
    char pad_71e[0x1];
    bool bToggleGallopRequested; // 0x71f
    char pad_720[0x30];
    ACreatureMountHandler* MountHandler; // 0x750
    ACreature_Character* OwnerCreatureCharacter; // 0x758
    UIcarus3DMovementComponent* FlightMovementComponent; // 0x760
    UFlightAnimationComponent* FlightAnimationComponent; // 0x768
    UMountStreamingComponent* MountStreamingComponent; // 0x770
    UMountHeightLimitComponent* MountHeightLimitComponent; // 0x778
    UMovementPredictionComponent* MovementPredictionComponent; // 0x780
    char pad_788[0x100];
    static UCreature_MountComponent* StaticClass();
    void UpdateMoveInput(float DeltaTime);
    void UpdateGroundMovement(float DeltaTime);
    void ToggleGallopTimedOut();
    void TakeoffRequested(bool bSkipTakeoffAnimation);
    void TakeOffPressed();
    void StopVocalSfx(int32_t InTransitionDuration);
    void SpeedUpReleased();
    void SpeedUpPressed(bool bSprintToggle);
    void ShowActionDiamond(bool bShow);
    void SetMinimumFlyingGait(EMountFlyingGait InMinimumFlyingGait);
    void SetAutoLandingEnabled(bool bInEnabled);
    void OnNearDeathKneel(AActor* Owner);
    void OnMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD);
    void LightAttackReleased();
    void LightAttackPressed();
    void LandingRequested();
    void KeyboardWalkReleased();
    void KeyboardWalkPressed();
    bool IsFlying();
    EMountMovementState GetMovementState();
    EMovementMode GetMovementMode();
    ACreatureMountHandler* GetMountHandler();
    bool GetFlyingDistanceAboveGround(float& OutDistanceAboveGround);
    void DismountTriggered();
    void DismountReleased();
    void DismountPressed();
    void DismountBeganHold();
    void DeactivateMountComponent();
    bool CanFly();
    bool CanCharge();
    void ActivateMountComponent(ACreatureMountHandler* InMountHandler, bool bInRiderIsPlayer);
}; // Size: 0x888
#pragma pack(pop)
