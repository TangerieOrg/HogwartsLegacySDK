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
#include "UAmbulatory_Character_Interface.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "USceneComponent.hpp"
#include "UTargetTracker.hpp"
UAmbulatory_Character_Interface* UAmbulatory_Character_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_Character_Interface");
    return (UAmbulatory_Character_Interface*)res;
}
void UAmbulatory_Character_Interface::ApplyMobilityModeStateSpeeds(EMobilityModeState::Type InMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.ApplyMobilityModeStateSpeeds"));
    struct Params_ApplyMobilityModeStateSpeeds {
        EMobilityModeState::Type InMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_ApplyMobilityModeStateSpeeds params{};
    params.InMobilityModeState = (EMobilityModeState::Type)InMobilityModeState;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::JumpFinished(UAnimInstance* InAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.JumpFinished"));
    struct Params_JumpFinished {
        UAnimInstance* InAnimInstance; // 0x0
    }; // Size: 0x8
    Params_JumpFinished params{};
    params.InAnimInstance = (UAnimInstance*)InAnimInstance;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::StopWorldTurnInPlace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.StopWorldTurnInPlace"));
    struct Params_StopWorldTurnInPlace {
    }; // Size: 0x0
    Params_StopWorldTurnInPlace params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::StartWorldTurnInPlace(FVector WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.StartWorldTurnInPlace"));
    struct Params_StartWorldTurnInPlace {
        FVector WorldDirection; // 0x0
    }; // Size: 0xc
    Params_StartWorldTurnInPlace params{};
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::RevertSpeedMode(ETargetSpeedPriority::Type SpeedPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.RevertSpeedMode"));
    struct Params_RevertSpeedMode {
        ETargetSpeedPriority::Type SpeedPriority; // 0x0
    }; // Size: 0x1
    Params_RevertSpeedMode params{};
    params.SpeedPriority = (ETargetSpeedPriority::Type)SpeedPriority;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SprintStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SprintStop"));
    struct Params_SprintStop {
    }; // Size: 0x0
    Params_SprintStop params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetTurnAssist(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetTurnAssist"));
    struct Params_SetTurnAssist {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetTurnAssist params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SprintStart(ESpeedModifierType::Type SpeedModType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SprintStart"));
    struct Params_SprintStart {
        ESpeedModifierType::Type SpeedModType; // 0x0
    }; // Size: 0x1
    Params_SprintStart params{};
    params.SpeedModType = (ESpeedModifierType::Type)SpeedModType;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetUseSpeedModifier(bool bUseSpeedModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetUseSpeedModifier"));
    struct Params_SetUseSpeedModifier {
        bool bUseSpeedModifier; // 0x0
    }; // Size: 0x1
    Params_SetUseSpeedModifier params{};
    params.bUseSpeedModifier = (bool)bUseSpeedModifier;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier, ETargetSpeedPriority::Type SpeedPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetSpeedMode"));
    struct Params_SetSpeedMode {
        ETargetSpeedMode::Type SpeedMode; // 0x0
        ETargetSpeedMode::Type SpeedModifier; // 0x1
        ETargetSpeedPriority::Type SpeedPriority; // 0x2
    }; // Size: 0x3
    Params_SetSpeedMode params{};
    params.SpeedMode = (ETargetSpeedMode::Type)SpeedMode;
    params.SpeedModifier = (ETargetSpeedMode::Type)SpeedModifier;
    params.SpeedPriority = (ETargetSpeedPriority::Type)SpeedPriority;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetMovementSpeeds(float InMin, float InMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetMovementSpeeds"));
    struct Params_SetMovementSpeeds {
        float InMin; // 0x0
        float InMax; // 0x4
    }; // Size: 0x8
    Params_SetMovementSpeeds params{};
    params.InMin = (float)InMin;
    params.InMax = (float)InMax;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::GetLandingType(ELandingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetLandingType"));
    struct Params_GetLandingType {
        ELandingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetLandingType params{};
    params.OutType = (ELandingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_Character_Interface::SetMountTransform(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetMountTransform"));
    struct Params_SetMountTransform {
        FTransform Transform; // 0x0
    }; // Size: 0x30
    Params_SetMountTransform params{};
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
void UAmbulatory_Character_Interface::SetMountNormal(FVector& Normal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetMountNormal"));
    struct Params_SetMountNormal {
        FVector Normal; // 0x0
    }; // Size: 0xc
    Params_SetMountNormal params{};
    params.Normal = (FVector)Normal;
    ProcessEvent(func, &params);
    Normal = params.Normal;
}
void UAmbulatory_Character_Interface::GetMobilityActionState(EMobilityActionState::Type& OutMobilityActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetMobilityActionState"));
    struct Params_GetMobilityActionState {
        EMobilityActionState::Type OutMobilityActionState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityActionState params{};
    params.OutMobilityActionState = (EMobilityActionState::Type)OutMobilityActionState;
    ProcessEvent(func, &params);
    OutMobilityActionState = params.OutMobilityActionState;
}
void UAmbulatory_Character_Interface::GetTargetSpeedModifier(ETargetSpeedMode::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetTargetSpeedModifier"));
    struct Params_GetTargetSpeedModifier {
        ETargetSpeedMode::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetTargetSpeedModifier params{};
    params.OutState = (ETargetSpeedMode::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_Character_Interface::SetMobilityModeState(EMobilityModeState::Type InMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetMobilityModeState"));
    struct Params_SetMobilityModeState {
        EMobilityModeState::Type InMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityModeState params{};
    params.InMobilityModeState = (EMobilityModeState::Type)InMobilityModeState;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::GetLedgeTransform(FTransform& OutTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetLedgeTransform"));
    struct Params_GetLedgeTransform {
        FTransform OutTransform; // 0x0
    }; // Size: 0x30
    Params_GetLedgeTransform params{};
    params.OutTransform = (FTransform)OutTransform;
    ProcessEvent(func, &params);
    OutTransform = params.OutTransform;
}
void UAmbulatory_Character_Interface::SetMobilityActionState(EMobilityActionState::Type InMobilityActionState, bool bSetTargetSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetMobilityActionState"));
    struct Params_SetMobilityActionState {
        EMobilityActionState::Type InMobilityActionState; // 0x0
        bool bSetTargetSpeed; // 0x1
    }; // Size: 0x2
    Params_SetMobilityActionState params{};
    params.InMobilityActionState = (EMobilityActionState::Type)InMobilityActionState;
    params.bSetTargetSpeed = (bool)bSetTargetSpeed;
    ProcessEvent(func, &params);
}
USceneComponent* UAmbulatory_Character_Interface::AttachSceneComponent(FTransform InTransform, FName InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.AttachSceneComponent"));
    struct Params_AttachSceneComponent {
        FTransform InTransform; // 0x0
        FName InTag; // 0x30
        USceneComponent* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_AttachSceneComponent params{};
    params.InTransform = (FTransform)InTransform;
    params.InTag = (FName)InTag;
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
void UAmbulatory_Character_Interface::SetLandingType(ELandingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetLandingType"));
    struct Params_SetLandingType {
        ELandingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetLandingType params{};
    params.InType = (ELandingType::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetJumpingType(EJumpingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetJumpingType"));
    struct Params_SetJumpingType {
        EJumpingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetJumpingType params{};
    params.InType = (EJumpingType::Type)InType;
    ProcessEvent(func, &params);
}
ESpeedModifierType::Type UAmbulatory_Character_Interface::GetSpeedModifierType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetSpeedModifierType"));
    struct Params_GetSpeedModifierType {
        ESpeedModifierType::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSpeedModifierType params{};
    ProcessEvent(func, &params);
    return (ESpeedModifierType::Type)params.ReturnValue;
}
void UAmbulatory_Character_Interface::SetIsInIdle(bool IsInIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetIsInIdle"));
    struct Params_SetIsInIdle {
        bool IsInIdle; // 0x0
    }; // Size: 0x1
    Params_SetIsInIdle params{};
    params.IsInIdle = (bool)IsInIdle;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetInWaterVolume(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetInWaterVolume"));
    struct Params_SetInWaterVolume {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetInWaterVolume params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
bool UAmbulatory_Character_Interface::IsUsingSpeedModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.IsUsingSpeedModifier"));
    struct Params_IsUsingSpeedModifier {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingSpeedModifier params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_Character_Interface::SetDesiredDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetDesiredDirection"));
    struct Params_SetDesiredDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_SetDesiredDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetClimbingLedgeState(EClimbingLedgeState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetClimbingLedgeState"));
    struct Params_SetClimbingLedgeState {
        EClimbingLedgeState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLedgeState params{};
    params.InType = (EClimbingLedgeState::Type)InType;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::SetClimbingLadderState(EClimbingLadderState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetClimbingLadderState"));
    struct Params_SetClimbingLadderState {
        EClimbingLadderState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLadderState params{};
    params.InType = (EClimbingLadderState::Type)InType;
    ProcessEvent(func, &params);
}
UTargetTracker* UAmbulatory_Character_Interface::GetLookAtTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetLookAtTargetTracker"));
    struct Params_GetLookAtTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLookAtTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void UAmbulatory_Character_Interface::SetBaseSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.SetBaseSpeedMode"));
    struct Params_SetBaseSpeedMode {
        ETargetSpeedMode::Type SpeedMode; // 0x0
        ETargetSpeedMode::Type SpeedModifier; // 0x1
    }; // Size: 0x2
    Params_SetBaseSpeedMode params{};
    params.SpeedMode = (ETargetSpeedMode::Type)SpeedMode;
    params.SpeedModifier = (ETargetSpeedMode::Type)SpeedModifier;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::DestroyAttachedSceneComponent(USceneComponent* InSceneComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.DestroyAttachedSceneComponent"));
    struct Params_DestroyAttachedSceneComponent {
        USceneComponent* InSceneComponent; // 0x0
    }; // Size: 0x8
    Params_DestroyAttachedSceneComponent params{};
    params.InSceneComponent = (USceneComponent*)InSceneComponent;
    ProcessEvent(func, &params);
}
bool UAmbulatory_Character_Interface::GetIsInIdle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetIsInIdle"));
    struct Params_GetIsInIdle {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInIdle params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAmbulatory_Character_Interface::Set_ForceTurnAndFace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.Set_ForceTurnAndFace"));
    struct Params_Set_ForceTurnAndFace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_ForceTurnAndFace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::GetMountNormal(FVector& LedgeNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetMountNormal"));
    struct Params_GetMountNormal {
        FVector LedgeNormal; // 0x0
    }; // Size: 0xc
    Params_GetMountNormal params{};
    params.LedgeNormal = (FVector)LedgeNormal;
    ProcessEvent(func, &params);
    LedgeNormal = params.LedgeNormal;
}
void UAmbulatory_Character_Interface::RevertMobilityModeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.RevertMobilityModeState"));
    struct Params_RevertMobilityModeState {
    }; // Size: 0x0
    Params_RevertMobilityModeState params{};
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::GetBaseSpeedMode(ETargetSpeedMode::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetBaseSpeedMode"));
    struct Params_GetBaseSpeedMode {
        ETargetSpeedMode::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetBaseSpeedMode params{};
    params.OutState = (ETargetSpeedMode::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void UAmbulatory_Character_Interface::RevertMobilityActionState(bool bSetTargetSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.RevertMobilityActionState"));
    struct Params_RevertMobilityActionState {
        bool bSetTargetSpeed; // 0x0
    }; // Size: 0x1
    Params_RevertMobilityActionState params{};
    params.bSetTargetSpeed = (bool)bSetTargetSpeed;
    ProcessEvent(func, &params);
}
void UAmbulatory_Character_Interface::JumpStarted(UAnimInstance* InAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.JumpStarted"));
    struct Params_JumpStarted {
        UAnimInstance* InAnimInstance; // 0x0
    }; // Size: 0x8
    Params_JumpStarted params{};
    params.InAnimInstance = (UAnimInstance*)InAnimInstance;
    ProcessEvent(func, &params);
}
UTargetTracker* UAmbulatory_Character_Interface::GetAimAtTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetAimAtTargetTracker"));
    struct Params_GetAimAtTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAimAtTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void UAmbulatory_Character_Interface::GetPreviousMobilityActionState(EMobilityActionState::Type& OutMobilityActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetPreviousMobilityActionState"));
    struct Params_GetPreviousMobilityActionState {
        EMobilityActionState::Type OutMobilityActionState; // 0x0
    }; // Size: 0x1
    Params_GetPreviousMobilityActionState params{};
    params.OutMobilityActionState = (EMobilityActionState::Type)OutMobilityActionState;
    ProcessEvent(func, &params);
    OutMobilityActionState = params.OutMobilityActionState;
}
void UAmbulatory_Character_Interface::GetMountTransform(FTransform& LedgeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetMountTransform"));
    struct Params_GetMountTransform {
        FTransform LedgeTransform; // 0x0
    }; // Size: 0x30
    Params_GetMountTransform params{};
    params.LedgeTransform = (FTransform)LedgeTransform;
    ProcessEvent(func, &params);
    LedgeTransform = params.LedgeTransform;
}
void UAmbulatory_Character_Interface::GetMobilityModeState(EMobilityModeState::Type& OutMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetMobilityModeState"));
    struct Params_GetMobilityModeState {
        EMobilityModeState::Type OutMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityModeState params{};
    params.OutMobilityModeState = (EMobilityModeState::Type)OutMobilityModeState;
    ProcessEvent(func, &params);
    OutMobilityModeState = params.OutMobilityModeState;
}
void UAmbulatory_Character_Interface::GetLedgeNormal(FVector& OutVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetLedgeNormal"));
    struct Params_GetLedgeNormal {
        FVector OutVector; // 0x0
    }; // Size: 0xc
    Params_GetLedgeNormal params{};
    params.OutVector = (FVector)OutVector;
    ProcessEvent(func, &params);
    OutVector = params.OutVector;
}
void UAmbulatory_Character_Interface::GetJumpingType(EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetJumpingType"));
    struct Params_GetJumpingType {
        EJumpingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetJumpingType params{};
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
bool UAmbulatory_Character_Interface::GetIsMovementInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetIsMovementInput"));
    struct Params_GetIsMovementInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMovementInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTargetTracker* UAmbulatory_Character_Interface::GetFaceTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetFaceTargetTracker"));
    struct Params_GetFaceTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFaceTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void UAmbulatory_Character_Interface::GetClimbingLedgeState(EClimbingLedgeState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetClimbingLedgeState"));
    struct Params_GetClimbingLedgeState {
        EClimbingLedgeState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLedgeState params{};
    params.OutType = (EClimbingLedgeState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void UAmbulatory_Character_Interface::GetClimbingLadderState(EClimbingLadderState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character_Interface.GetClimbingLadderState"));
    struct Params_GetClimbingLadderState {
        EClimbingLadderState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLadderState params{};
    params.OutType = (EClimbingLadderState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
