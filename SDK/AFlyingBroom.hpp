#pragma once
#include <cstdint>
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
class UMountHeightLimitComponent;
class UPhysicsAsset;
class UCapsuleComponent;
class UCurveFloat;
class USkeletalMeshComponent;
class UMountStreamingComponent;
class UTriggerEffect;
class UFlyingBroomMovementComponent;
class UAkComponent;
class ABiped_Player;
class UClass;
class UFlyingBroomAudio;
class AEnemyBroomRider_AiController;
class UFlyingBroomPhysics;
class UObject;
class USplineComponent;
class ACharacter;
class UScheduledEntity;
#pragma pack(push, 1)
class AFlyingBroom : public APawn {
public:
    char pad_2a8[0x50];
    APawn* MountedCharacter; // 0x2f8
    char pad_300[0x8];
    FVector LastDirection; // 0x308
    float ActiveScale; // 0x314
    bool bScaleIn; // 0x318
    char pad_319[0x7];
    UPhysicsAsset* BroomPhysicAssetForRiderCloth; // 0x320
    FClothMountTargets ClothMountTargets; // 0x328
    UCapsuleComponent* CapsuleComponent; // 0x340
    USkeletalMeshComponent* BroomMeshComponent; // 0x348
    USkeletalMeshComponent* BeaterMeshComponent; // 0x350
    UFlyingBroomMovementComponent* MovementComponent; // 0x358
    UMountStreamingComponent* MountStreamingComponent; // 0x360
    UMountHeightLimitComponent* MountHeightLimitComponent; // 0x368
    UAkComponent* AudioComponent; // 0x370
    UClass* PlayerMountAbility; // 0x378
    UClass* PlayerDismountDiveAbility; // 0x380
    UClass* PlayerDismountGroundAbility; // 0x388
    UClass* PlayerDismountGround2JogAbility; // 0x390
    UClass* PlayerDismountInstantAbility; // 0x398
    UClass* SwingBeaterAbility; // 0x3a0
    UClass* SwingBeaterBackhandAbility; // 0x3a8
    UClass* ThrowQuaffleAbility; // 0x3b0
    UClass* StudentHoverBroomFlyAbility; // 0x3b8
    UClass* StudentIdleAbility; // 0x3c0
    char pad_3c8[0x28];
    UFlyingBroomAudio* FlyingBroomAudio; // 0x3f0
    UCurveFloat* DeadZoneCurve; // 0x3f8
    float DeadZone; // 0x400
    float FastFlightInputEaseSpeed; // 0x404
    FRuntimeFloatCurve FastFlightInputMagnitudeAdjustmentCurve; // 0x408
    float GroundDismountHeight; // 0x490
    float MinCollisionResponseSpeed; // 0x494
    char pad_498[0x4];
    float IdleBreakTime; // 0x49c
    char pad_4a0[0x2e0];
    float SpeedBoostUnavailableMessageTimeout; // 0x780
    char pad_784[0x2c];
    ECustomInterpType::Type DecelerationInterpType; // 0x7b0
    char pad_7b1[0x3];
    float DecelerationInterpSpeed; // 0x7b4
    char pad_7b8[0x108];
    UTriggerEffect* pBoostTriggerEffect; // 0x8c0
    UTriggerEffect* pSpeedUpTriggerEffect; // 0x8c8
    UTriggerEffect* pInactiveTriggerEffect; // 0x8d0
    UClass* MountedAIControllerClass; // 0x8d8
    AEnemyBroomRider_AiController* EnemyAIController; // 0x8e0
    char pad_8e8[0x38];
    UFlyingBroomPhysics* StudentDefaultFlightData; // 0x920
    char pad_928[0x58];
    static AFlyingBroom* StaticClass();
    void UpdateRTPCValue(float InRTPCValue, FString RTPC, FVector2D ValueRange, FVector2D AudioValueRange);
    void UpdateBroomAudio(UFlyingBroomAudio* BroomAudio);
    bool Teleport(FVector DestLocation, float DestYaw, bool ResetCamera, bool TeleportPhysics);
    void SupressHoverDisabledUI(bool bDisable);
    void StartSettingMaxFlyHeightValue(float Value, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingForceHoverValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingDismountAllowedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingDisableInputValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingDisableBarrelRollValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void StartSettingBoostAllowedValue(bool bValue, EStandardManagedPriority Priority, UObject* InInstigator);
    void ShowBroomHUD(bool bShow);
    void SetupPlayerOnBroom(ABiped_Player* BipedPlayer);
    void SetupBroomComponents(UCapsuleComponent* Capsule, UFlyingBroomMovementComponent* Movement, USkeletalMeshComponent* Mesh);
    void SetSplineComponent(USplineComponent* InSplineComponent, bool bTeleportToStart);
    void SetScaleInfo(bool bInScaleIn, float InActiveScale);
    void SetMaxFlyingSpeed(float Speed);
    void SetForceLand(bool bInForceLand);
    void SafeDismountHeightCheck();
    void RemoveRiderClothCollisionSources(ACharacter* Character, bool bRemoveDelegates);
    void PushFlightDataOntoStack(UFlyingBroomPhysics* NewFlightData);
    void PopFlightDataOffStack();
    void OnTurboStart();
    void OnPlayerMountBroom();
    void OnPlayerDismountBroom();
    void OnNPCMountBroom();
    void OnNPCDismountBroom();
    void OnMountedNPCHiddenIsChanged(UScheduledEntity* inParticipant, bool inHidden);
    void OnLeaveBoostZone();
    void OnEnterBoostZone();
    void OnBoostStart();
    void OnBarrelRollStart(bool bRollLeft);
    void OnActorIsHiddenChanged(bool NewValue);
    bool IsInTurbo();
    bool IsInHoverMode();
    bool IsInBoost();
    bool IsForceLanding();
    bool IsBoostRecharging();
    float GetMaxBoostMeter();
    EFlyingBroomHitObjectType GetLastHitObject();
    EBroomDismountType GetDismountType();
    float GetBoostMeterAmount();
    void FinishSettingMaxFlyHeightValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingForceHoverValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingDismountAllowedValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingDisableInputValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingDisableBarrelRollValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void FinishSettingBoostAllowedValue(EStandardManagedPriority Priority, UObject* InInstigator);
    void EnableMovement();
    void EnableMountedRiderIKSetup(bool bEnabled);
    void DismountBroom(ABiped_Player* Player, bool Instant);
    void DisableSpellHUD(bool DisableSpellHUD, bool DisableHealtHUD);
    void DisableMovement();
    void DetachPlayerFromBroomOnDismount(ABiped_Player* BipedPlayer, AFlyingBroom* BroomProp, float VelocityDamping);
    bool CanIdleBreak();
    void BroomEvent(FName EventName);
    void AttachPlayerToBroomOnMount(ABiped_Player* BipedPlayer, AFlyingBroom* BroomProp, EBroomMountType InMountType);
    void ApplyBroomStats();
    bool AllowDismount();
    void AIMountBroom(ACharacter* Character, UFlyingBroomPhysics* FlightData);
    void AIDismountBroom();
    void AddRiderClothCollisionSources(ACharacter* Character);
    void AddBoostPercentage(float Percent);
    void AcceleratePressed();
}; // Size: 0x980
#pragma pack(pop)
