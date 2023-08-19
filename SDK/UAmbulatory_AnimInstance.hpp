#pragma once
#include <cstdint>
#include "EAnimMechanicType\Type.hpp"
#include "EAnimSpeedType\Type.hpp"
#include "EClimbingLadderState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ELandingType\Type.hpp"
#include "EMobilityActionState\Type.hpp"
#include "EMobilityModeState\Type.hpp"
#include "EPreWandCastState\Type.hpp"
#include "EWandCastType\Type.hpp"
#include "FVector.hpp"
#include "FWandCastInfo.hpp"
#include "UAble_AnimInstance.hpp"
#pragma pack(push, 1)
class UAmbulatory_AnimInstance : public UAble_AnimInstance {
public:
    char pad_510[0x8];
    EMobilityModeState::Type MobilityModeState; // 0x518
    EMobilityModeState::Type PrevMobilityModeState; // 0x519
    bool bPartialBodyUseAbilitiesTest; // 0x51a
    EMobilityActionState::Type MobilityActionState; // 0x51b
    EMobilityActionState::Type PrevMobilityActionState; // 0x51c
    EJumpingType::Type JumpType; // 0x51d
    ELandingType::Type LandType; // 0x51e
    EAnimSpeedType::Type AnimSpeedType; // 0x51f
    EAnimMechanicType::Type AnimMechanicType; // 0x520
    EClimbingLedgeState::Type ClimbingLedgeState; // 0x521
    EClimbingLadderState::Type ClimbingLadderState; // 0x522
    char pad_523[0x1];
    float StrafeAngle; // 0x524
    bool IsMoving; // 0x528
    bool IsAim; // 0x529
    bool IsMovementInput; // 0x52a
    bool IsTurningInPlace; // 0x52b
    bool IsStrafing; // 0x52c
    bool DesiredIsStrafing; // 0x52d
    bool ForceTurnAndFace; // 0x52e
    bool BlockedByWall; // 0x52f
    bool IsViewAlignedWithDesiredDirection; // 0x530
    bool IsActorAlignedWithDesiredDirection; // 0x531
    char pad_532[0x2];
    float LookAtDirection; // 0x534
    float DesiredDirection; // 0x538
    float InterpedDesiredDirection; // 0x53c
    float LastDesiredDirection; // 0x540
    float FixedDesiredDirection; // 0x544
    float StopTurnDirection; // 0x548
    float StartTurnDirection; // 0x54c
    float WalkRunLean; // 0x550
    float Speed; // 0x554
    float FixedSpeed; // 0x558
    float TrackingSpeed; // 0x55c
    float ShortStepTrackingSpeed; // 0x560
    float LastDesiredWorldSpeed; // 0x564
    float MaxSpeed; // 0x568
    float PlayRate; // 0x56c
    float DesiredForwardBodyLean; // 0x570
    float DesiredHorizontalBodyLean; // 0x574
    float DesiredBodyTurn; // 0x578
    float GameTimeAtStartMove; // 0x57c
    float GameTimeAtStopMove; // 0x580
    float AimLeanYaw; // 0x584
    float AimLeanPitch; // 0x588
    float JumpHeight; // 0x58c
    bool IsFlicked; // 0x590
    bool IsOverridenForCinematic; // 0x591
    bool IsInIdle; // 0x592
    char pad_593[0x1];
    float LookAtTargetPitch; // 0x594
    float LookAtTargetYaw; // 0x598
    FVector LookAtTargetLocation; // 0x59c
    bool HasLookAtTarget; // 0x5a8
    char pad_5a9[0x3];
    FVector ImpactDirection; // 0x5ac
    bool bUsingStairsAnims; // 0x5b8
    char pad_5b9[0x3];
    FWandCastInfo WandCastInfo; // 0x5bc
    char pad_5d8[0x8];
    static UAmbulatory_AnimInstance* StaticClass();
    void WandCastInfo_ClearAttackCount();
    void SetWandCastInfo_PreWandCastState(EPreWandCastState::Type PreWandCastState);
    void SetWandCastInfo_AnticipationWandCastState(EPreWandCastState::Type AnticipationWandCastState);
    void SetStartMoveTimeToCurrentTime();
    void SetPlayerIKState(bool State);
    void SetNextWandCastType(EWandCastType::Type WandCastType);
    void SetLandingType(ELandingType::Type InType);
    void SetJumpingType(EJumpingType::Type InType);
    void SetIsViewAlignedWithDesiredDirection(bool InFlag);
    void SetIsAim(bool InIsAim);
    void SetIsActorAlignedWithDesiredDirection(bool InFlag);
    void SetIKStateWithEaseIn(bool State, float Delay, float EaseTime);
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
    void Set_IsMoving(bool InIsMoving);
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
    EPreWandCastState::Type GetWandCastInfo_AnticipationWandCastState();
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
    void Get_IsMoving(bool& InIsMoving);
    void Get_IsMovementInput(bool& OutFlag);
    void Get_FixedSpeed(float& OutSpeed);
    void Get_DesiredDirection(float& OutDirection);
    void AnimNotify_TurnAssistOn();
    void AnimNotify_TurnAssistOff();
    void AnimNotify_StartMoveBegin();
    void AnimNotify_SetStrafing();
    void AnimNotify_MoveEnd();
    void AnimNotify_MoveBegin();
    void AnimNotify_LeftIdle();
    void AnimNotify_LandingFinished();
    void AnimNotify_JumpStarted();
    void AnimNotify_JumpFinished();
    void AnimNotify_IdleBegin();
}; // Size: 0x5e0
#pragma pack(pop)
