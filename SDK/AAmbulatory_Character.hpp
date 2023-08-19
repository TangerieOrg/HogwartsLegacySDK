#pragma once
#include <cstdint>
#include "AAble_Character.hpp"
#include "EClimbingLadderState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ELandingType\Type.hpp"
#include "ELinkType.hpp"
#include "EMobilityActionState\Type.hpp"
#include "EMobilityModeState\Type.hpp"
#include "ESpeedModifierType\Type.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETargetSpeedPriority\Type.hpp"
#include "FOdcPathSpec.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FValueTracker.hpp"
#include "FVector.hpp"
class UAkAudioEvent;
class USceneComponent;
class UFootPlantEffects;
class UObject;
class UAmbulatory_Data;
class AActor;
class USpeedModeTracker;
class UTargetTracker;
class UPrimitiveComponent;
class UAnimInstance;
#pragma pack(push, 1)
class AAmbulatory_Character : public AAble_Character {
public:
    char pad_540[0x8];
    UAkAudioEvent* AkEvent; // 0x548
    UFootPlantEffects* FootPlantEffects; // 0x550
    bool bIsBiped; // 0x558
    bool bUseTurnAssist; // 0x559
    bool bAbstractMobility; // 0x55a
    bool bTestNewMobilityMotions; // 0x55b
    bool bOnlyLockOnMode; // 0x55c
    char pad_55d[0x3];
    float MinimumMovementSpeed; // 0x560
    float MaximumMovementSpeed; // 0x564
    float SlowWalkMovementSpeed; // 0x568
    float WalkMovementSpeed; // 0x56c
    float FastWalkMovementSpeed; // 0x570
    float JogMovementSpeed; // 0x574
    float SprintMovementSpeed; // 0x578
    char pad_57c[0x4];
    UAmbulatory_Data* AmbulatoryData; // 0x580
    char pad_588[0x8];
    FOdcPathSpec PathSpec; // 0x590
    float JumpStartHeight; // 0x5e0
    FVector JumpStartVelocity; // 0x5e4
    char pad_5f0[0x5];
    bool Debug; // 0x5f5
    char pad_5f6[0x2];
    AActor* LadderActor; // 0x5f8
    char pad_600[0x28];
    FValueTracker WorldSpeedTracker; // 0x628
    char pad_634[0x14];
    UTargetTracker* LookAtTargetTracker; // 0x648
    UTargetTracker* FaceTargetTracker; // 0x650
    UTargetTracker* AimAtTargetTracker; // 0x658
    USpeedModeTracker* SpeedModeTracker; // 0x660
    USpeedModeTracker* SpeedModifierTracker; // 0x668
    TArray<UPrimitiveComponent*> WadingWaterComponents; // 0x670
    char pad_680[0x18];
    FVector FixedWorldDirection; // 0x698
    char pad_6a4[0x5f8];
    bool m_navLinkUsingLedge; // 0xc9c
    ELinkType m_linkType; // 0xc9d
    char pad_c9e[0x2];
    float m_traceWallRadius; // 0xca0
    float m_traceWallDropRadius; // 0xca4
    float m_traceWallForward; // 0xca8
    float m_traceWallHeightAdjust; // 0xcac
    float m_traceLedgeRadius; // 0xcb0
    float m_traceLedgeIntoWallAdjust; // 0xcb4
    float m_traceLedgeUpAdjust; // 0xcb8
    float m_traceLedgeDownCast; // 0xcbc
    static AAmbulatory_Character* StaticClass();
    void StopWorldTurnInPlace();
    void StartWorldTurnInPlace(FVector WorldDirection);
    void SprintStop();
    void SprintStart(ESpeedModifierType::Type SpeedModType);
    static void ShowTimingMessage(FString MyMessage, UObject* WorldContextObject, float Duration);
    void SetWorldSpeedAndDirection(float WorldSpeed, FVector WorldDirection);
    void SetWorldSpeed(float WorldSpeed);
    void SetUseSpeedModifier(bool bUseSpeedModifier);
    void SetTargetSpeedAndDirection(float InAbstractSpeed, FVector InDirection, bool InSetMobilityStateBasedOnSpeed);
    void SetTargetSpeed(float InAbstractSpeed, bool InSetMobilityStateBasedOnSpeed);
    void SetSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier, ETargetSpeedPriority::Type SpeedPriority);
    void SetMovementSpeeds(float InMin, float InMax);
    void SetMountTransform(FTransform& Transform);
    void SetMountNormal(FVector& Normal);
    void SetMobilityModeState(EMobilityModeState::Type InMobilityModeState);
    void SetMobilityActionState(EMobilityActionState::Type InMobilityActionState, bool bSetTargetSpeed);
    void SetLandingType(ELandingType::Type InType);
    void SetJumpingType(EJumpingType::Type& InType);
    void SetIsInIdle(bool isIdle);
    void SetInWaterVolume(bool InFlag);
    void SetDesiredDirection(FVector InWorldDirection);
    void SetClimbingLedgeState(EClimbingLedgeState::Type InType);
    void SetClimbingLadderState(EClimbingLadderState::Type InType);
    void SetBaseSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier);
    void Set_ForceTurnAndFace(bool InFlag);
    void RevertSpeedMode(ETargetSpeedPriority::Type SpeedPriority);
    void RevertMobilityModeState();
    void RevertMobilityActionState(bool bSetTargetSpeed);
    void RemoveWadingComponent(UPrimitiveComponent* InWaterComponent);
    void JumpStarted(UAnimInstance* InAnimInstance);
    void JumpFinished(UAnimInstance* InAnimInstance);
    bool IsWadingComponent(UPrimitiveComponent* InWaterComponent);
    bool IsUsingSpeedModifier();
    int32_t GetWadingComponentCount();
    UPrimitiveComponent* GetWadingComponent();
    void GetTargetSpeedModifier(ETargetSpeedMode::Type& OutState);
    ESpeedModifierType::Type GetSpeedModifierType();
    void GetPreviousMobilityActionState(EMobilityActionState::Type& OutMobilityActionState);
    FOdcPathSpec GetPathSpec();
    void GetMountTransform(FTransform& LedgeTransform);
    void GetMountNormal(FVector& LedgeNormal);
    void GetMobilityModeState(EMobilityModeState::Type& OutMobilityModeState);
    void GetMobilityActionStateName(UAnimInstance* InAnimInstance, FString& OutString);
    void GetMobilityActionState(EMobilityActionState::Type& OutMobilityActionState);
    UTargetTracker* GetLookAtTargetTracker();
    int32_t GetLinkUsageFlags();
    void GetLedgeTransform(FTransform& LedgeTransform);
    void GetLedgeNormal(FVector& LedgeNormal);
    void GetLandingType(ELandingType::Type& OutType);
    void GetJumpingType(EJumpingType::Type& OutType);
    bool GetIsMovementInput();
    bool GetIsInIdle();
    UTargetTracker* GetFaceTargetTracker();
    void GetClimbingLedgeState(EClimbingLedgeState::Type& OutType);
    void GetClimbingLadderState(EClimbingLadderState::Type& OutType);
    int32_t GetBlockageFlags();
    void GetBaseSpeedMode(ETargetSpeedMode::Type& OutState);
    UTargetTracker* GetAimAtTargetTracker();
    void DestroyAttachedSceneComponent(USceneComponent* InSceneComponent);
    float ComputeDesiredDirectionAngle(FVector& InDirection, bool bInComputeDegrees);
    float ComputeAngleBetweenTargetTrackers(UTargetTracker* SourceTracker, UTargetTracker* DestTracker, bool bInComputeDegrees);
    float ComputeAngle(FVector& InDirection, FVector& InSourceForward, bool bInComputeDegrees);
    void CharacterRotatedBySupport(FRotator DeltaRotation);
    USceneComponent* AttachSceneComponent(FTransform InTransform, FName InTag);
    void ApplySlideHorizontalMovement(float WorldSpeed, FVector InWorldDirection);
    void ApplyMobilityModeStateSpeeds(EMobilityModeState::Type InMobilityModeState);
    bool AmIMovingIntoStairs();
    bool AmIMovingIntoSlopes();
    bool AmIGoingUpStairs();
    bool AmIGoingDownStairs();
    void AddWadingComponent(UPrimitiveComponent* InWaterComponent);
}; // Size: 0xcc0
#pragma pack(pop)
