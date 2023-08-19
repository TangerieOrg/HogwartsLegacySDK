#include "EClimbingLadderState\Type.hpp"
#include "EClimbingLedgeState\Type.hpp"
#include "EJumpingType\Type.hpp"
#include "ELandingType\Type.hpp"
#include "EMobilityActionState\Type.hpp"
#include "EMobilityModeState\Type.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
void UAmbulatory_AnimInstance_Interface::Get_IsMoving(bool& OutFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsMoving"));
    struct Params_Get_IsMoving {
        bool OutFlag; // 0x0
    }; // Size: 0x1
    Params_Get_IsMoving params{};
    params.OutFlag = (bool)OutFlag;
    ProcessEvent(func, &params);
    OutFlag = params.OutFlag;
}
void UAmbulatory_AnimInstance_Interface::Set_MaxSpeed(float InMaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_MaxSpeed"));
    struct Params_Set_MaxSpeed {
        float InMaxSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_MaxSpeed params{};
    params.InMaxSpeed = (float)InMaxSpeed;
    ProcessEvent(func, &params);
}
UAmbulatory_AnimInstance_Interface* UAmbulatory_AnimInstance_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_AnimInstance_Interface");
    return (UAmbulatory_AnimInstance_Interface*)res;
}
void UAmbulatory_AnimInstance_Interface::SetJumpingType(EJumpingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetJumpingType"));
    struct Params_SetJumpingType {
        EJumpingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetJumpingType params{};
    params.InType = (EJumpingType::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::InitRootMotionModifierVectors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.InitRootMotionModifierVectors"));
    struct Params_InitRootMotionModifierVectors {
    }; // Size: 0x0
    Params_InitRootMotionModifierVectors params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetStartMoveTimeToCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetStartMoveTimeToCurrentTime"));
    struct Params_SetStartMoveTimeToCurrentTime {
    }; // Size: 0x0
    Params_SetStartMoveTimeToCurrentTime params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetRootMotionOffsets(FVector& TranslationOffset, FRotator& RotationOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetRootMotionOffsets"));
    struct Params_SetRootMotionOffsets {
        FVector TranslationOffset; // 0x0
        FRotator RotationOffset; // 0xc
    }; // Size: 0x18
    Params_SetRootMotionOffsets params{};
    params.TranslationOffset = (FVector)TranslationOffset;
    params.RotationOffset = (FRotator)RotationOffset;
    ProcessEvent(func, &params);
    TranslationOffset = params.TranslationOffset;
    RotationOffset = params.RotationOffset;
}
void UAmbulatory_AnimInstance_Interface::SetClimbingLadderState(EClimbingLadderState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetClimbingLadderState"));
    struct Params_SetClimbingLadderState {
        EClimbingLadderState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLadderState params{};
    params.InType = (EClimbingLadderState::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetIsAim(bool InIsAim) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetIsAim"));
    struct Params_SetIsAim {
        bool InIsAim; // 0x0
    }; // Size: 0x1
    Params_SetIsAim params{};
    params.InIsAim = (bool)InIsAim;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_FixedSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_FixedSpeed"));
    struct Params_Set_FixedSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_FixedSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_IsStrafing(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsStrafing"));
    struct Params_Set_IsStrafing {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsStrafing params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetPlayerIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetPlayerIKState"));
    struct Params_SetPlayerIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetPlayerIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetLandingType(ELandingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetLandingType"));
    struct Params_SetLandingType {
        ELandingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetLandingType params{};
    params.InType = (ELandingType::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetIsViewAlignedWithDesiredDirection(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetIsViewAlignedWithDesiredDirection"));
    struct Params_SetIsViewAlignedWithDesiredDirection {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetIsViewAlignedWithDesiredDirection params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::GetLandingType(ELandingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetLandingType"));
    struct Params_GetLandingType {
        ELandingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetLandingType params{};
    params.OutType = (ELandingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance_Interface::SetGlobalIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetGlobalIKState"));
    struct Params_SetGlobalIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetGlobalIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetIsActorAlignedWithDesiredDirection(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetIsActorAlignedWithDesiredDirection"));
    struct Params_SetIsActorAlignedWithDesiredDirection {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetIsActorAlignedWithDesiredDirection params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetIKState(bool State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetIKState"));
    struct Params_SetIKState {
        bool State; // 0x0
    }; // Size: 0x1
    Params_SetIKState params{};
    params.State = (bool)State;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_AimLeanYaw(float InAimLeanYaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_AimLeanYaw"));
    struct Params_Set_AimLeanYaw {
        float InAimLeanYaw; // 0x0
    }; // Size: 0x4
    Params_Set_AimLeanYaw params{};
    params.InAimLeanYaw = (float)InAimLeanYaw;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::SetClimbingLedgeState(EClimbingLedgeState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.SetClimbingLedgeState"));
    struct Params_SetClimbingLedgeState {
        EClimbingLedgeState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLedgeState params{};
    params.InType = (EClimbingLedgeState::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_TrackingSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_TrackingSpeed"));
    struct Params_Set_TrackingSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_TrackingSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_WandCastMelee(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_WandCastMelee"));
    struct Params_Set_WandCastMelee {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_Set_WandCastMelee params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_StartTurnDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_StartTurnDirection"));
    struct Params_Get_StartTurnDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_StartTurnDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance_Interface::GetClimbingLadderState(EClimbingLadderState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetClimbingLadderState"));
    struct Params_GetClimbingLadderState {
        EClimbingLadderState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLadderState params{};
    params.OutType = (EClimbingLadderState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance_Interface::Set_WalkRunLean(float InWalkRunLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_WalkRunLean"));
    struct Params_Set_WalkRunLean {
        float InWalkRunLean; // 0x0
    }; // Size: 0x4
    Params_Set_WalkRunLean params{};
    params.InWalkRunLean = (float)InWalkRunLean;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_StopTurnDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_StopTurnDirection"));
    struct Params_Set_StopTurnDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_StopTurnDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_Speed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_Speed"));
    struct Params_Set_Speed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_Speed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_StartTurnDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_StartTurnDirection"));
    struct Params_Set_StartTurnDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_StartTurnDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_ShortStepTrackingSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_ShortStepTrackingSpeed"));
    struct Params_Set_ShortStepTrackingSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_ShortStepTrackingSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_AimLeanPitch(float InAimLeanPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_AimLeanPitch"));
    struct Params_Set_AimLeanPitch {
        float InAimLeanPitch; // 0x0
    }; // Size: 0x4
    Params_Set_AimLeanPitch params{};
    params.InAimLeanPitch = (float)InAimLeanPitch;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_LookAtDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_LookAtDirection"));
    struct Params_Get_LookAtDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_LookAtDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance_Interface::Set_PlayRate(float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_PlayRate"));
    struct Params_Set_PlayRate {
        float InPlayRate; // 0x0
    }; // Size: 0x4
    Params_Set_PlayRate params{};
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_MobilityModeState(EMobilityModeState::Type InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_MobilityModeState"));
    struct Params_Set_MobilityModeState {
        EMobilityModeState::Type InState; // 0x0
    }; // Size: 0x1
    Params_Set_MobilityModeState params{};
    params.InState = (EMobilityModeState::Type)InState;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_MobilityActionState(EMobilityActionState::Type InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_MobilityActionState"));
    struct Params_Set_MobilityActionState {
        EMobilityActionState::Type InState; // 0x0
    }; // Size: 0x1
    Params_Set_MobilityActionState params{};
    params.InState = (EMobilityActionState::Type)InState;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_LookAtDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_LookAtDirection"));
    struct Params_Set_LookAtDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_LookAtDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_LastDesiredWorldSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_LastDesiredWorldSpeed"));
    struct Params_Set_LastDesiredWorldSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_LastDesiredWorldSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Revert_MobilityModeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Revert_MobilityModeState"));
    struct Params_Revert_MobilityModeState {
    }; // Size: 0x0
    Params_Revert_MobilityModeState params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_IsTurningInPlace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsTurningInPlace"));
    struct Params_Set_IsTurningInPlace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsTurningInPlace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_PrevMobilityModeState(EMobilityModeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_PrevMobilityModeState"));
    struct Params_Get_PrevMobilityModeState {
        EMobilityModeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_PrevMobilityModeState params{};
    params.OutState = (EMobilityModeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
bool UAmbulatory_AnimInstance_Interface::GetIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetIKState"));
    struct Params_GetIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance_Interface::Set_IsOverridenForCinematic(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsOverridenForCinematic"));
    struct Params_Set_IsOverridenForCinematic {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsOverridenForCinematic params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_IsMoving(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsMoving"));
    struct Params_Set_IsMoving {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsMoving params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_StopTurnDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_StopTurnDirection"));
    struct Params_Get_StopTurnDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_StopTurnDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance_Interface::Set_DesiredBodyTurn(float InDesiredBodyTurn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredBodyTurn"));
    struct Params_Set_DesiredBodyTurn {
        float InDesiredBodyTurn; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredBodyTurn params{};
    params.InDesiredBodyTurn = (float)InDesiredBodyTurn;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_IsMovementInput(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_IsMovementInput"));
    struct Params_Set_IsMovementInput {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_IsMovementInput params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_Speed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_Speed"));
    struct Params_Get_Speed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_Speed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance_Interface::Set_ForceTurnAndFace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_ForceTurnAndFace"));
    struct Params_Set_ForceTurnAndFace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_ForceTurnAndFace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_DesiredForwardBodyLean(float InDesiredForwardBodyLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredForwardBodyLean"));
    struct Params_Set_DesiredForwardBodyLean {
        float InDesiredForwardBodyLean; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredForwardBodyLean params{};
    params.InDesiredForwardBodyLean = (float)InDesiredForwardBodyLean;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_FixedDesiredDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_FixedDesiredDirection"));
    struct Params_Set_FixedDesiredDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_FixedDesiredDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_DesiredHorizontalBodyLean(float InDesiredHorizontalBodyLean) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredHorizontalBodyLean"));
    struct Params_Set_DesiredHorizontalBodyLean {
        float InDesiredHorizontalBodyLean; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredHorizontalBodyLean params{};
    params.InDesiredHorizontalBodyLean = (float)InDesiredHorizontalBodyLean;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Set_DesiredDirection(float InDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Set_DesiredDirection"));
    struct Params_Set_DesiredDirection {
        float InDirection; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredDirection params{};
    params.InDirection = (float)InDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Revert_MobilityActionState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Revert_MobilityActionState"));
    struct Params_Revert_MobilityActionState {
    }; // Size: 0x0
    Params_Revert_MobilityActionState params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_AnimInstance_Interface::Get_PrevMobilityActionState(EMobilityActionState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_PrevMobilityActionState"));
    struct Params_Get_PrevMobilityActionState {
        EMobilityActionState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_PrevMobilityActionState params{};
    params.OutState = (EMobilityActionState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
bool UAmbulatory_AnimInstance_Interface::GetPlayerIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetPlayerIKState"));
    struct Params_GetPlayerIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAmbulatory_AnimInstance_Interface::Get_WandCastMelee() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_WandCastMelee"));
    struct Params_Get_WandCastMelee {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Get_WandCastMelee params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance_Interface::GetJumpingType(EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetJumpingType"));
    struct Params_GetJumpingType {
        EJumpingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetJumpingType params{};
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_AnimInstance_Interface::Get_Lean(float& OutAimLeanYaw, float& OutAimLeanPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_Lean"));
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
void UAmbulatory_AnimInstance_Interface::Get_PlayRate(float& OutPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_PlayRate"));
    struct Params_Get_PlayRate {
        float OutPlayRate; // 0x0
    }; // Size: 0x4
    Params_Get_PlayRate params{};
    params.OutPlayRate = (float)OutPlayRate;
    ProcessEvent(func, &params);
    OutPlayRate = params.OutPlayRate;
}
bool UAmbulatory_AnimInstance_Interface::GetGlobalIKState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetGlobalIKState"));
    struct Params_GetGlobalIKState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGlobalIKState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_AnimInstance_Interface::Get_MobilityActionState(EMobilityActionState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_MobilityActionState"));
    struct Params_Get_MobilityActionState {
        EMobilityActionState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_MobilityActionState params{};
    params.OutState = (EMobilityActionState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance_Interface::GetClimbingLedgeState(EClimbingLedgeState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.GetClimbingLedgeState"));
    struct Params_GetClimbingLedgeState {
        EClimbingLedgeState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLedgeState params{};
    params.OutType = (EClimbingLedgeState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
float UAmbulatory_AnimInstance_Interface::Get_WalkRunLean() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_WalkRunLean"));
    struct Params_Get_WalkRunLean {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Get_WalkRunLean params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAmbulatory_AnimInstance_Interface::Get_MobilityModeState(EMobilityModeState::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_MobilityModeState"));
    struct Params_Get_MobilityModeState {
        EMobilityModeState::Type OutState; // 0x0
    }; // Size: 0x1
    Params_Get_MobilityModeState params{};
    params.OutState = (EMobilityModeState::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_AnimInstance_Interface::Get_MaxSpeed(float& OutMaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_MaxSpeed"));
    struct Params_Get_MaxSpeed {
        float OutMaxSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_MaxSpeed params{};
    params.OutMaxSpeed = (float)OutMaxSpeed;
    ProcessEvent(func, &params);
    OutMaxSpeed = params.OutMaxSpeed;
}
void UAmbulatory_AnimInstance_Interface::Get_LastDesiredWorldSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_LastDesiredWorldSpeed"));
    struct Params_Get_LastDesiredWorldSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_LastDesiredWorldSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance_Interface::Get_IsTurningInPlace(bool& OutFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsTurningInPlace"));
    struct Params_Get_IsTurningInPlace {
        bool OutFlag; // 0x0
    }; // Size: 0x1
    Params_Get_IsTurningInPlace params{};
    params.OutFlag = (bool)OutFlag;
    ProcessEvent(func, &params);
    OutFlag = params.OutFlag;
}
void UAmbulatory_AnimInstance_Interface::Get_IsMovementInput(bool& OutFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_IsMovementInput"));
    struct Params_Get_IsMovementInput {
        bool OutFlag; // 0x0
    }; // Size: 0x1
    Params_Get_IsMovementInput params{};
    params.OutFlag = (bool)OutFlag;
    ProcessEvent(func, &params);
    OutFlag = params.OutFlag;
}
void UAmbulatory_AnimInstance_Interface::Get_FixedSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_FixedSpeed"));
    struct Params_Get_FixedSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_FixedSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAmbulatory_AnimInstance_Interface::Get_FixedDesiredDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_FixedDesiredDirection"));
    struct Params_Get_FixedDesiredDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_FixedDesiredDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
void UAmbulatory_AnimInstance_Interface::Get_DesiredDirection(float& OutDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_AnimInstance_Interface.Get_DesiredDirection"));
    struct Params_Get_DesiredDirection {
        float OutDirection; // 0x0
    }; // Size: 0x4
    Params_Get_DesiredDirection params{};
    params.OutDirection = (float)OutDirection;
    ProcessEvent(func, &params);
    OutDirection = params.OutDirection;
}
