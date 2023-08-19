#pragma once
#include <cstdint>
#include "EClimbingLadderState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ELandingType\Type.hpp"
#include "EMobilityActionState\Type.hpp"
#include "EMobilityModeState\Type.hpp"
#include "UInterface.hpp"
struct FVector;
struct FRotator;
#pragma pack(push, 1)
class UAmbulatory_AnimInstance_Interface : public UInterface {
public:
    static UAmbulatory_AnimInstance_Interface* StaticClass();
    void SetStartMoveTimeToCurrentTime();
    void SetRootMotionOffsets(FVector& TranslationOffset, FRotator& RotationOffset);
    void SetPlayerIKState(bool State);
    void SetLandingType(ELandingType::Type InType);
    void SetJumpingType(EJumpingType::Type InType);
    void SetIsViewAlignedWithDesiredDirection(bool InFlag);
    void SetIsAim(bool InIsAim);
    void SetIsActorAlignedWithDesiredDirection(bool InFlag);
    void SetIKState(bool State);
    void SetGlobalIKState(bool State);
    void SetClimbingLedgeState(EClimbingLedgeState::Type InType);
    void SetClimbingLadderState(EClimbingLadderState::Type InType);
    void Set_WandCastMelee(bool bInFlag);
    void Set_WalkRunLean(float InWalkRunLean);
    void Set_TrackingSpeed(float InSpeed);
    void Set_StopTurnDirection(float InDirection);
    void Set_StartTurnDirection(float InDirection);
    void Set_Speed(float InSpeed);
    void Set_ShortStepTrackingSpeed(float InSpeed);
    void Set_PlayRate(float InPlayRate);
    void Set_MobilityModeState(EMobilityModeState::Type InState);
    void Set_MobilityActionState(EMobilityActionState::Type InState);
    void Set_MaxSpeed(float InMaxSpeed);
    void Set_LookAtDirection(float InDirection);
    void Set_LastDesiredWorldSpeed(float InSpeed);
    void Set_IsTurningInPlace(bool InFlag);
    void Set_IsStrafing(bool InFlag);
    void Set_IsOverridenForCinematic(bool InFlag);
    void Set_IsMoving(bool InFlag);
    void Set_IsMovementInput(bool InFlag);
    void Set_ForceTurnAndFace(bool InFlag);
    void Set_FixedSpeed(float InSpeed);
    void Set_FixedDesiredDirection(float InDirection);
    void Set_DesiredHorizontalBodyLean(float InDesiredHorizontalBodyLean);
    void Set_DesiredForwardBodyLean(float InDesiredForwardBodyLean);
    void Set_DesiredDirection(float InDirection);
    void Set_DesiredBodyTurn(float InDesiredBodyTurn);
    void Set_AimLeanYaw(float InAimLeanYaw);
    void Set_AimLeanPitch(float InAimLeanPitch);
    void Revert_MobilityModeState();
    void Revert_MobilityActionState();
    void InitRootMotionModifierVectors();
    bool GetPlayerIKState();
    void GetLandingType(ELandingType::Type& OutType);
    void GetJumpingType(EJumpingType::Type& OutType);
    bool GetIKState();
    bool GetGlobalIKState();
    void GetClimbingLedgeState(EClimbingLedgeState::Type& OutType);
    void GetClimbingLadderState(EClimbingLadderState::Type& OutType);
    bool Get_WandCastMelee();
    float Get_WalkRunLean();
    void Get_StopTurnDirection(float& OutDirection);
    void Get_StartTurnDirection(float& OutDirection);
    void Get_Speed(float& OutSpeed);
    void Get_PrevMobilityModeState(EMobilityModeState::Type& OutState);
    void Get_PrevMobilityActionState(EMobilityActionState::Type& OutState);
    void Get_PlayRate(float& OutPlayRate);
    void Get_MobilityModeState(EMobilityModeState::Type& OutState);
    void Get_MobilityActionState(EMobilityActionState::Type& OutState);
    void Get_MaxSpeed(float& OutMaxSpeed);
    void Get_LookAtDirection(float& OutDirection);
    void Get_Lean(float& OutAimLeanYaw, float& OutAimLeanPitch);
    void Get_LastDesiredWorldSpeed(float& OutSpeed);
    void Get_IsTurningInPlace(bool& OutFlag);
    void Get_IsMoving(bool& OutFlag);
    void Get_IsMovementInput(bool& OutFlag);
    void Get_FixedSpeed(float& OutSpeed);
    void Get_FixedDesiredDirection(float& OutDirection);
    void Get_DesiredDirection(float& OutDirection);
}; // Size: 0x28
#pragma pack(pop)
