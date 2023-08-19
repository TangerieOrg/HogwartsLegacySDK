#pragma once
#include <cstdint>
#include "EClimbingLadderState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ELandingType\Type.hpp"
#include "EMobilityActionState\Type.hpp"
#include "EMobilityModeState\Type.hpp"
#include "ESpeedModifierType\Type.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "ETargetSpeedPriority\Type.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class UAnimInstance;
class UTargetTracker;
class USceneComponent;
#pragma pack(push, 1)
class UAmbulatory_Character_Interface : public UInterface {
public:
    static UAmbulatory_Character_Interface* StaticClass();
    void StopWorldTurnInPlace();
    void StartWorldTurnInPlace(FVector WorldDirection);
    void SprintStop();
    void SprintStart(ESpeedModifierType::Type SpeedModType);
    void SetUseSpeedModifier(bool bUseSpeedModifier);
    void SetTurnAssist(bool InFlag);
    void SetSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier, ETargetSpeedPriority::Type SpeedPriority);
    void SetMovementSpeeds(float InMin, float InMax);
    void SetMountTransform(FTransform& Transform);
    void SetMountNormal(FVector& Normal);
    void SetMobilityModeState(EMobilityModeState::Type InMobilityModeState);
    void SetMobilityActionState(EMobilityActionState::Type InMobilityActionState, bool bSetTargetSpeed);
    void SetLandingType(ELandingType::Type InType);
    void SetJumpingType(EJumpingType::Type InType);
    void SetIsInIdle(bool IsInIdle);
    void SetInWaterVolume(bool bInFlag);
    void SetDesiredDirection(FVector InWorldDirection);
    void SetClimbingLedgeState(EClimbingLedgeState::Type InType);
    void SetClimbingLadderState(EClimbingLadderState::Type InType);
    void SetBaseSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier);
    void Set_ForceTurnAndFace(bool InFlag);
    void RevertSpeedMode(ETargetSpeedPriority::Type SpeedPriority);
    void RevertMobilityModeState();
    void RevertMobilityActionState(bool bSetTargetSpeed);
    void JumpStarted(UAnimInstance* InAnimInstance);
    void JumpFinished(UAnimInstance* InAnimInstance);
    bool IsUsingSpeedModifier();
    void GetTargetSpeedModifier(ETargetSpeedMode::Type& OutState);
    ESpeedModifierType::Type GetSpeedModifierType();
    void GetPreviousMobilityActionState(EMobilityActionState::Type& OutMobilityActionState);
    void GetMountTransform(FTransform& LedgeTransform);
    void GetMountNormal(FVector& LedgeNormal);
    void GetMobilityModeState(EMobilityModeState::Type& OutMobilityModeState);
    void GetMobilityActionState(EMobilityActionState::Type& OutMobilityActionState);
    UTargetTracker* GetLookAtTargetTracker();
    void GetLedgeTransform(FTransform& OutTransform);
    void GetLedgeNormal(FVector& OutVector);
    void GetLandingType(ELandingType::Type& OutType);
    void GetJumpingType(EJumpingType::Type& OutType);
    bool GetIsMovementInput();
    bool GetIsInIdle();
    UTargetTracker* GetFaceTargetTracker();
    void GetClimbingLedgeState(EClimbingLedgeState::Type& OutType);
    void GetClimbingLadderState(EClimbingLadderState::Type& OutType);
    void GetBaseSpeedMode(ETargetSpeedMode::Type& OutState);
    UTargetTracker* GetAimAtTargetTracker();
    void DestroyAttachedSceneComponent(USceneComponent* InSceneComponent);
    USceneComponent* AttachSceneComponent(FTransform InTransform, FName InTag);
    void ApplyMobilityModeStateSpeeds(EMobilityModeState::Type InMobilityModeState);
}; // Size: 0x28
#pragma pack(pop)
