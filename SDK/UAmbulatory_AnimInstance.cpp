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
#include "UAmbulatory_AnimInstance.hpp"
#include "UFunction.hpp"
void UAmbulatory_AnimInstance::GetClimbingLedgeState(EClimbingLedgeState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetClimbingLedgeState"));
    struct Params_GetClimbingLedgeState {
        EClimbingLedgeState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLedgeState params{};
    params.OutType = (EClimbingLedgeState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance::Set_DesiredHorizontalBodyLean(float InDesiredHorizontalBodyLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_DesiredHorizontalBodyLean"));
    struct Params_Set_DesiredHorizontalBodyLean {
        float InDesiredHorizontalBodyLean; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredHorizontalBodyLean params{};
    params.InDesiredHorizontalBodyLean = (float)InDesiredHorizontalBodyLean;
    ProcessEvent(func, &params);
}
UAmbulatory_AnimInstance* UAmbulatory_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_AnimInstance");
    return (UAmbulatory_AnimInstance*)res;
}
void UAmbulatory_AnimInstance::WandCastInfo_ClearAttackCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.WandCastInfo_ClearAttackCount"));
    struct Params_WandCastInfo_ClearAttackCount {
    }; // Size: 0x0
    Params_WandCastInfo_ClearAttackCount params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetWandCastInfo_PreWandCastState(EPreWandCastState::Type PreWandCastState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetWandCastInfo_PreWandCastState"));
    struct Params_SetWandCastInfo_PreWandCastState {
        EPreWandCastState::Type PreWandCastState; // 0x0
    }; // Size: 0x1
    Params_SetWandCastInfo_PreWandCastState params{};
    params.PreWandCastState = (EPreWandCastState::Type)PreWandCastState;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_TrackingSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_TrackingSpeed"));
    struct Params_Set_TrackingSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_TrackingSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_LookAtDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_LookAtDirection"));
    struct Params_Set_LookAtDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_LookAtDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_DesiredForwardBodyLean(float InDesiredForwardBodyLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_DesiredForwardBodyLean"));
    struct Params_Set_DesiredForwardBodyLean {
        float InDesiredForwardBodyLean; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredForwardBodyLean params{};
    params.InDesiredForwardBodyLean = (float)InDesiredForwardBodyLean;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_PlayRate(float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_PlayRate"));
    struct Params_Set_PlayRate {
        float InPlayRate; // 0x0
    }; // Size: 0x4
    Params_Set_PlayRate params{};
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetNextWandCastType(EWandCastType::Type WandCastType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetNextWandCastType"));
    struct Params_SetNextWandCastType {
        EWandCastType::Type WandCastType; // 0x0
    }; // Size: 0x1
    Params_SetNextWandCastType params{};
    params.WandCastType = (EWandCastType::Type)WandCastType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_ForceTurnAndFace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_ForceTurnAndFace"));
    struct Params_Set_ForceTurnAndFace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_ForceTurnAndFace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Get_MobilityModeState(EMobilityModeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_MobilityModeState"));
    struct Params_Get_MobilityModeState {
        EMobilityModeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_MobilityModeState params{};
    params.OutState = (EMobilityModeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance::SetWandCastInfo_AnticipationWandCastState(EPreWandCastState::Type AnticipationWandCastState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetWandCastInfo_AnticipationWandCastState"));
    struct Params_SetWandCastInfo_AnticipationWandCastState {
        EPreWandCastState::Type AnticipationWandCastState; // 0x0
    }; // Size: 0x1
    Params_SetWandCastInfo_AnticipationWandCastState params{};
    params.AnticipationWandCastState = (EPreWandCastState::Type)AnticipationWandCastState;
    ProcessEvent(func, &params);
}
bool UAmbulatory_AnimInstance::Get_WandCastMelee() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_WandCastMelee"));
    struct Params_Get_WandCastMelee {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Get_WandCastMelee params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance::SetLandingType(ELandingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetLandingType"));
    struct Params_SetLandingType {
        ELandingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetLandingType params{};
    params.InType = (ELandingType::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetPlayerIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetPlayerIKState"));
    struct Params_SetPlayerIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetPlayerIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetStartMoveTimeToCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetStartMoveTimeToCurrentTime"));
    struct Params_SetStartMoveTimeToCurrentTime {
    }; // Size: 0x0
    Params_SetStartMoveTimeToCurrentTime params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_FixedSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_FixedSpeed"));
    struct Params_Set_FixedSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_FixedSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetJumpingType(EJumpingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetJumpingType"));
    struct Params_SetJumpingType {
        EJumpingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetJumpingType params{};
    params.InType = (EJumpingType::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_StopTurnDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_StopTurnDirection"));
    struct Params_Set_StopTurnDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_StopTurnDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_AimLeanPitch(float InAimLeanPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_AimLeanPitch"));
    struct Params_Set_AimLeanPitch {
        float InAimLeanPitch; // 0x0
    }; // Size: 0x4
    Params_Set_AimLeanPitch params{};
    params.InAimLeanPitch = (float)InAimLeanPitch;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetIsViewAlignedWithDesiredDirection(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetIsViewAlignedWithDesiredDirection"));
    struct Params_SetIsViewAlignedWithDesiredDirection {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetIsViewAlignedWithDesiredDirection params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_JumpFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_JumpFinished"));
    struct Params_AnimNotify_JumpFinished {
    }; // Size: 0x0
    Params_AnimNotify_JumpFinished params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetIsAim(bool InIsAim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetIsAim"));
    struct Params_SetIsAim {
        bool InIsAim; // 0x0
    }; // Size: 0x1
    Params_SetIsAim params{};
    params.InIsAim = (bool)InIsAim;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_IsStrafing(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_IsStrafing"));
    struct Params_Set_IsStrafing {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsStrafing params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetIsActorAlignedWithDesiredDirection(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetIsActorAlignedWithDesiredDirection"));
    struct Params_SetIsActorAlignedWithDesiredDirection {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetIsActorAlignedWithDesiredDirection params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetIKStateWithEaseIn(bool State, float Delay, float EaseTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetIKStateWithEaseIn"));
    struct Params_SetIKStateWithEaseIn {
        bool State; // 0x0
        char pad_1[0x3];
        float Delay; // 0x4
        float EaseTime; // 0x8
    }; // Size: 0xc
    Params_SetIKStateWithEaseIn params{};
    params.State = (bool)State;
    params.Delay = (float)Delay;
    params.EaseTime = (float)EaseTime;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetIKState"));
    struct Params_SetIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetGlobalIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetGlobalIKState"));
    struct Params_SetGlobalIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetGlobalIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_TurnAssistOff() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_TurnAssistOff"));
    struct Params_AnimNotify_TurnAssistOff {
    }; // Size: 0x0
    Params_AnimNotify_TurnAssistOff params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::SetClimbingLedgeState(EClimbingLedgeState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetClimbingLedgeState"));
    struct Params_SetClimbingLedgeState {
        EClimbingLedgeState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLedgeState params{};
    params.InType = (EClimbingLedgeState::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_TurnAssistOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_TurnAssistOn"));
    struct Params_AnimNotify_TurnAssistOn {
    }; // Size: 0x0
    Params_AnimNotify_TurnAssistOn params{};
    ProcessEvent(func, &params);
}
float UAmbulatory_AnimInstance::Get_WalkRunLean() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_WalkRunLean"));
    struct Params_Get_WalkRunLean {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Get_WalkRunLean params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAmbulatory_AnimInstance::SetClimbingLadderState(EClimbingLadderState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.SetClimbingLadderState"));
    struct Params_SetClimbingLadderState {
        EClimbingLadderState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLadderState params{};
    params.InType = (EClimbingLadderState::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_WandCastMelee(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_WandCastMelee"));
    struct Params_Set_WandCastMelee {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_Set_WandCastMelee params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_WalkRunLean(float InWalkRunLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_WalkRunLean"));
    struct Params_Set_WalkRunLean {
        float InWalkRunLean; // 0x0
    }; // Size: 0x4
    Params_Set_WalkRunLean params{};
    params.InWalkRunLean = (float)InWalkRunLean;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_StartTurnDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_StartTurnDirection"));
    struct Params_Set_StartTurnDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_StartTurnDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_Speed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_Speed"));
    struct Params_Set_Speed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_Speed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_ShortStepTrackingSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_ShortStepTrackingSpeed"));
    struct Params_Set_ShortStepTrackingSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_ShortStepTrackingSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_MobilityModeState(EMobilityModeState::Type InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_MobilityModeState"));
    struct Params_Set_MobilityModeState {
        EMobilityModeState::Type InState; // 0x0
    }; // Size: 0x1
    Params_Set_MobilityModeState params{};
    params.InState = (EMobilityModeState::Type)InState;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_MobilityActionState(EMobilityActionState::Type InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_MobilityActionState"));
    struct Params_Set_MobilityActionState {
        EMobilityActionState::Type InState; // 0x0
    }; // Size: 0x1
    Params_Set_MobilityActionState params{};
    params.InState = (EMobilityActionState::Type)InState;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_DesiredDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_DesiredDirection"));
    struct Params_Set_DesiredDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_MaxSpeed(float InMaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_MaxSpeed"));
    struct Params_Set_MaxSpeed {
        float InMaxSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_MaxSpeed params{};
    params.InMaxSpeed = (float)InMaxSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_LastDesiredWorldSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_LastDesiredWorldSpeed"));
    struct Params_Set_LastDesiredWorldSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_LastDesiredWorldSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Revert_MobilityActionState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Revert_MobilityActionState"));
    struct Params_Revert_MobilityActionState {
    }; // Size: 0x0
    Params_Revert_MobilityActionState params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_IsTurningInPlace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_IsTurningInPlace"));
    struct Params_Set_IsTurningInPlace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsTurningInPlace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
bool UAmbulatory_AnimInstance::GetPlayerIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetPlayerIKState"));
    struct Params_GetPlayerIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance::Set_IsOverridenForCinematic(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_IsOverridenForCinematic"));
    struct Params_Set_IsOverridenForCinematic {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsOverridenForCinematic params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Get_Speed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_Speed"));
    struct Params_Get_Speed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_Speed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance::Set_IsMoving(bool InIsMoving) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_IsMoving"));
    struct Params_Set_IsMoving {
        bool InIsMoving; // 0x0
    }; // Size: 0x1
    Params_Set_IsMoving params{};
    params.InIsMoving = (bool)InIsMoving;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_FixedDesiredDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_FixedDesiredDirection"));
    struct Params_Set_FixedDesiredDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_FixedDesiredDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_JumpStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_JumpStarted"));
    struct Params_AnimNotify_JumpStarted {
    }; // Size: 0x0
    Params_AnimNotify_JumpStarted params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_IsMovementInput(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_IsMovementInput"));
    struct Params_Set_IsMovementInput {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsMovementInput params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_DesiredBodyTurn(float InDesiredBodyTurn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_DesiredBodyTurn"));
    struct Params_Set_DesiredBodyTurn {
        float InDesiredBodyTurn; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredBodyTurn params{};
    params.InDesiredBodyTurn = (float)InDesiredBodyTurn;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_MoveBegin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_MoveBegin"));
    struct Params_AnimNotify_MoveBegin {
    }; // Size: 0x0
    Params_AnimNotify_MoveBegin params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Set_AimLeanYaw(float InAimLeanYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Set_AimLeanYaw"));
    struct Params_Set_AimLeanYaw {
        float InAimLeanYaw; // 0x0
    }; // Size: 0x4
    Params_Set_AimLeanYaw params{};
    params.InAimLeanYaw = (float)InAimLeanYaw;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::Revert_MobilityModeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Revert_MobilityModeState"));
    struct Params_Revert_MobilityModeState {
    }; // Size: 0x0
    Params_Revert_MobilityModeState params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::GetLandingType(ELandingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetLandingType"));
    struct Params_GetLandingType {
        ELandingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetLandingType params{};
    params.OutType = (ELandingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance::InitRootMotionModifierVectors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.InitRootMotionModifierVectors"));
    struct Params_InitRootMotionModifierVectors {
    }; // Size: 0x0
    Params_InitRootMotionModifierVectors params{};
    ProcessEvent(func, &params);
}
bool UAmbulatory_AnimInstance::GetGlobalIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetGlobalIKState"));
    struct Params_GetGlobalIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGlobalIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EPreWandCastState::Type UAmbulatory_AnimInstance::GetWandCastInfo_AnticipationWandCastState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetWandCastInfo_AnticipationWandCastState"));
    struct Params_GetWandCastInfo_AnticipationWandCastState {
        EPreWandCastState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetWandCastInfo_AnticipationWandCastState params{};
    ProcessEvent(func, &params);
    return (EPreWandCastState::Type)params.ReturnValue;
}
void UAmbulatory_AnimInstance::GetJumpingType(EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetJumpingType"));
    struct Params_GetJumpingType {
        EJumpingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetJumpingType params{};
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance::GetClimbingLadderState(EClimbingLadderState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetClimbingLadderState"));
    struct Params_GetClimbingLadderState {
        EClimbingLadderState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLadderState params{};
    params.OutType = (EClimbingLadderState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
bool UAmbulatory_AnimInstance::GetIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.GetIKState"));
    struct Params_GetIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance::Get_StopTurnDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_StopTurnDirection"));
    struct Params_Get_StopTurnDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_StopTurnDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance::Get_StartTurnDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_StartTurnDirection"));
    struct Params_Get_StartTurnDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_StartTurnDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance::Get_PrevMobilityModeState(EMobilityModeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_PrevMobilityModeState"));
    struct Params_Get_PrevMobilityModeState {
        EMobilityModeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_PrevMobilityModeState params{};
    params.OutState = (EMobilityModeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance::Get_PrevMobilityActionState(EMobilityActionState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_PrevMobilityActionState"));
    struct Params_Get_PrevMobilityActionState {
        EMobilityActionState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_PrevMobilityActionState params{};
    params.OutState = (EMobilityActionState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance::Get_PlayRate(float& OutPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_PlayRate"));
    struct Params_Get_PlayRate {
        float OutPlayRate; // 0x0
    }; // Size: 0x4
    Params_Get_PlayRate params{};
    params.OutPlayRate = (float)OutPlayRate;
    ProcessEvent(func, &params);
    OutPlayRate = params.OutPlayRate;
}
void UAmbulatory_AnimInstance::Get_MobilityActionState(EMobilityActionState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_MobilityActionState"));
    struct Params_Get_MobilityActionState {
        EMobilityActionState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_MobilityActionState params{};
    params.OutState = (EMobilityActionState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance::Get_DesiredDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_DesiredDirection"));
    struct Params_Get_DesiredDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_DesiredDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance::Get_MaxSpeed(float& OutMaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_MaxSpeed"));
    struct Params_Get_MaxSpeed {
        float OutMaxSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_MaxSpeed params{};
    params.OutMaxSpeed = (float)OutMaxSpeed;
    ProcessEvent(func, &params);
    OutMaxSpeed = params.OutMaxSpeed;
}
void UAmbulatory_AnimInstance::Get_LookAtDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_LookAtDirection"));
    struct Params_Get_LookAtDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_LookAtDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance::Get_Lean(float& OutAimLeanYaw, float& OutAimLeanPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_Lean"));
    struct Params_Get_Lean {
        float OutAimLeanYaw; // 0x0
        float OutAimLeanPitch; // 0x4
    }; // Size: 0x8
    Params_Get_Lean params{};
    params.OutAimLeanYaw = (float)OutAimLeanYaw;
    params.OutAimLeanPitch = (float)OutAimLeanPitch;
    ProcessEvent(func, &params);
    OutAimLeanYaw = params.OutAimLeanYaw;
    OutAimLeanPitch = params.OutAimLeanPitch;
}
void UAmbulatory_AnimInstance::Get_LastDesiredWorldSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_LastDesiredWorldSpeed"));
    struct Params_Get_LastDesiredWorldSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_LastDesiredWorldSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance::Get_IsTurningInPlace(bool& OutFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_IsTurningInPlace"));
    struct Params_Get_IsTurningInPlace {
        bool OutFlag; // 0x0
    }; // Size: 0x1
    Params_Get_IsTurningInPlace params{};
    params.OutFlag = (bool)OutFlag;
    ProcessEvent(func, &params);
    OutFlag = params.OutFlag;
}
void UAmbulatory_AnimInstance::Get_IsMoving(bool& InIsMoving) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_IsMoving"));
    struct Params_Get_IsMoving {
        bool InIsMoving; // 0x0
    }; // Size: 0x1
    Params_Get_IsMoving params{};
    params.InIsMoving = (bool)InIsMoving;
    ProcessEvent(func, &params);
    InIsMoving = params.InIsMoving;
}
void UAmbulatory_AnimInstance::Get_IsMovementInput(bool& OutFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_IsMovementInput"));
    struct Params_Get_IsMovementInput {
        bool OutFlag; // 0x0
    }; // Size: 0x1
    Params_Get_IsMovementInput params{};
    params.OutFlag = (bool)OutFlag;
    ProcessEvent(func, &params);
    OutFlag = params.OutFlag;
}
void UAmbulatory_AnimInstance::Get_FixedSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.Get_FixedSpeed"));
    struct Params_Get_FixedSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_FixedSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance::AnimNotify_StartMoveBegin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_StartMoveBegin"));
    struct Params_AnimNotify_StartMoveBegin {
    }; // Size: 0x0
    Params_AnimNotify_StartMoveBegin params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_SetStrafing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_SetStrafing"));
    struct Params_AnimNotify_SetStrafing {
    }; // Size: 0x0
    Params_AnimNotify_SetStrafing params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_MoveEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_MoveEnd"));
    struct Params_AnimNotify_MoveEnd {
    }; // Size: 0x0
    Params_AnimNotify_MoveEnd params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_LeftIdle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_LeftIdle"));
    struct Params_AnimNotify_LeftIdle {
    }; // Size: 0x0
    Params_AnimNotify_LeftIdle params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_LandingFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_LandingFinished"));
    struct Params_AnimNotify_LandingFinished {
    }; // Size: 0x0
    Params_AnimNotify_LandingFinished params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance::AnimNotify_IdleBegin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance.AnimNotify_IdleBegin"));
    struct Params_AnimNotify_IdleBegin {
    }; // Size: 0x0
    Params_AnimNotify_IdleBegin params{};
    ProcessEvent(func, &params);
}
