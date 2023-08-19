#include "AAble_Character.hpp"
#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
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
#include "UAkAudioEvent.hpp"
#include "UAmbulatory_Data.hpp"
#include "UAnimInstance.hpp"
#include "UFootPlantEffects.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USpeedModeTracker.hpp"
#include "UTargetTracker.hpp"
void AAmbulatory_Character::SetJumpingType(EJumpingType::Type& InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetJumpingType"));
    struct Params_SetJumpingType {
        EJumpingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetJumpingType params{};
    params.InType = (EJumpingType::Type)InType;
    ProcessEvent(func, &params);
    InType = params.InType;
}
void AAmbulatory_Character::SetWorldSpeed(float WorldSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetWorldSpeed"));
    struct Params_SetWorldSpeed {
        float WorldSpeed; // 0x0
    }; // Size: 0x4
    Params_SetWorldSpeed params{};
    params.WorldSpeed = (float)WorldSpeed;
    ProcessEvent(func, &params);
}
AAmbulatory_Character* AAmbulatory_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.Ambulatory_Character");
    return (AAmbulatory_Character*)res;
}
void AAmbulatory_Character::GetLedgeTransform(FTransform& LedgeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetLedgeTransform"));
    struct Params_GetLedgeTransform {
        FTransform LedgeTransform; // 0x0
    }; // Size: 0x30
    Params_GetLedgeTransform params{};
    params.LedgeTransform = (FTransform)LedgeTransform;
    ProcessEvent(func, &params);
    LedgeTransform = params.LedgeTransform;
}
void AAmbulatory_Character::SetBaseSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetBaseSpeedMode"));
    struct Params_SetBaseSpeedMode {
        ETargetSpeedMode::Type SpeedMode; // 0x0
        ETargetSpeedMode::Type SpeedModifier; // 0x1
    }; // Size: 0x2
    Params_SetBaseSpeedMode params{};
    params.SpeedMode = (ETargetSpeedMode::Type)SpeedMode;
    params.SpeedModifier = (ETargetSpeedMode::Type)SpeedModifier;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::StopWorldTurnInPlace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.StopWorldTurnInPlace"));
    struct Params_StopWorldTurnInPlace {
    }; // Size: 0x0
    Params_StopWorldTurnInPlace params{};
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::ShowTimingMessage(FString MyMessage, UObject* WorldContextObject, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ShowTimingMessage"));
    struct Params_ShowTimingMessage {
        FString MyMessage; // 0x0
        UObject* WorldContextObject; // 0x10
        float Duration; // 0x18
    }; // Size: 0x1c
    Params_ShowTimingMessage params{};
    params.MyMessage = (FString)MyMessage;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FOdcPathSpec AAmbulatory_Character::GetPathSpec() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetPathSpec"));
    struct Params_GetPathSpec {
        FOdcPathSpec ReturnValue; // 0x0
    }; // Size: 0x50
    Params_GetPathSpec params{};
    ProcessEvent(func, &params);
    return (FOdcPathSpec)params.ReturnValue;
}
void AAmbulatory_Character::SetMobilityModeState(EMobilityModeState::Type InMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetMobilityModeState"));
    struct Params_SetMobilityModeState {
        EMobilityModeState::Type InMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_SetMobilityModeState params{};
    params.InMobilityModeState = (EMobilityModeState::Type)InMobilityModeState;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::JumpStarted(UAnimInstance* InAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.JumpStarted"));
    struct Params_JumpStarted {
        UAnimInstance* InAnimInstance; // 0x0
    }; // Size: 0x8
    Params_JumpStarted params{};
    params.InAnimInstance = (UAnimInstance*)InAnimInstance;
    ProcessEvent(func, &params);
}
UTargetTracker* AAmbulatory_Character::GetAimAtTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetAimAtTargetTracker"));
    struct Params_GetAimAtTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAimAtTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void AAmbulatory_Character::StartWorldTurnInPlace(FVector WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.StartWorldTurnInPlace"));
    struct Params_StartWorldTurnInPlace {
        FVector WorldDirection; // 0x0
    }; // Size: 0xc
    Params_StartWorldTurnInPlace params{};
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SprintStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SprintStop"));
    struct Params_SprintStop {
    }; // Size: 0x0
    Params_SprintStop params{};
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SprintStart(ESpeedModifierType::Type SpeedModType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SprintStart"));
    struct Params_SprintStart {
        ESpeedModifierType::Type SpeedModType; // 0x0
    }; // Size: 0x1
    Params_SprintStart params{};
    params.SpeedModType = (ESpeedModifierType::Type)SpeedModType;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetWorldSpeedAndDirection(float WorldSpeed, FVector WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetWorldSpeedAndDirection"));
    struct Params_SetWorldSpeedAndDirection {
        float WorldSpeed; // 0x0
        FVector WorldDirection; // 0x4
    }; // Size: 0x10
    Params_SetWorldSpeedAndDirection params{};
    params.WorldSpeed = (float)WorldSpeed;
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::GetMountTransform(FTransform& LedgeTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetMountTransform"));
    struct Params_GetMountTransform {
        FTransform LedgeTransform; // 0x0
    }; // Size: 0x30
    Params_GetMountTransform params{};
    params.LedgeTransform = (FTransform)LedgeTransform;
    ProcessEvent(func, &params);
    LedgeTransform = params.LedgeTransform;
}
void AAmbulatory_Character::SetUseSpeedModifier(bool bUseSpeedModifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetUseSpeedModifier"));
    struct Params_SetUseSpeedModifier {
        bool bUseSpeedModifier; // 0x0
    }; // Size: 0x1
    Params_SetUseSpeedModifier params{};
    params.bUseSpeedModifier = (bool)bUseSpeedModifier;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::GetPreviousMobilityActionState(EMobilityActionState::Type& OutMobilityActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetPreviousMobilityActionState"));
    struct Params_GetPreviousMobilityActionState {
        EMobilityActionState::Type OutMobilityActionState; // 0x0
    }; // Size: 0x1
    Params_GetPreviousMobilityActionState params{};
    params.OutMobilityActionState = (EMobilityActionState::Type)OutMobilityActionState;
    ProcessEvent(func, &params);
    OutMobilityActionState = params.OutMobilityActionState;
}
void AAmbulatory_Character::SetTargetSpeedAndDirection(float InAbstractSpeed, FVector InDirection, bool InSetMobilityStateBasedOnSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetTargetSpeedAndDirection"));
    struct Params_SetTargetSpeedAndDirection {
        float InAbstractSpeed; // 0x0
        FVector InDirection; // 0x4
        bool InSetMobilityStateBasedOnSpeed; // 0x10
    }; // Size: 0x11
    Params_SetTargetSpeedAndDirection params{};
    params.InAbstractSpeed = (float)InAbstractSpeed;
    params.InDirection = (FVector)InDirection;
    params.InSetMobilityStateBasedOnSpeed = (bool)InSetMobilityStateBasedOnSpeed;
    ProcessEvent(func, &params);
}
float AAmbulatory_Character::ComputeAngle(FVector& InDirection, FVector& InSourceForward, bool bInComputeDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ComputeAngle"));
    struct Params_ComputeAngle {
        FVector InDirection; // 0x0
        FVector InSourceForward; // 0xc
        bool bInComputeDegrees; // 0x18
        char pad_19[0x3];
        float ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_ComputeAngle params{};
    params.InDirection = (FVector)InDirection;
    params.InSourceForward = (FVector)InSourceForward;
    params.bInComputeDegrees = (bool)bInComputeDegrees;
    ProcessEvent(func, &params);
    InDirection = params.InDirection;
    InSourceForward = params.InSourceForward;
    return (float)params.ReturnValue;
}
void AAmbulatory_Character::GetLedgeNormal(FVector& LedgeNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetLedgeNormal"));
    struct Params_GetLedgeNormal {
        FVector LedgeNormal; // 0x0
    }; // Size: 0xc
    Params_GetLedgeNormal params{};
    params.LedgeNormal = (FVector)LedgeNormal;
    ProcessEvent(func, &params);
    LedgeNormal = params.LedgeNormal;
}
void AAmbulatory_Character::SetTargetSpeed(float InAbstractSpeed, bool InSetMobilityStateBasedOnSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetTargetSpeed"));
    struct Params_SetTargetSpeed {
        float InAbstractSpeed; // 0x0
        bool InSetMobilityStateBasedOnSpeed; // 0x4
    }; // Size: 0x5
    Params_SetTargetSpeed params{};
    params.InAbstractSpeed = (float)InAbstractSpeed;
    params.InSetMobilityStateBasedOnSpeed = (bool)InSetMobilityStateBasedOnSpeed;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetInWaterVolume(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetInWaterVolume"));
    struct Params_SetInWaterVolume {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetInWaterVolume params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
int32_t AAmbulatory_Character::GetLinkUsageFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetLinkUsageFlags"));
    struct Params_GetLinkUsageFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLinkUsageFlags params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AAmbulatory_Character::SetSpeedMode(ETargetSpeedMode::Type SpeedMode, ETargetSpeedMode::Type SpeedModifier, ETargetSpeedPriority::Type SpeedPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetSpeedMode"));
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
void AAmbulatory_Character::SetMovementSpeeds(float InMin, float InMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetMovementSpeeds"));
    struct Params_SetMovementSpeeds {
        float InMin; // 0x0
        float InMax; // 0x4
    }; // Size: 0x8
    Params_SetMovementSpeeds params{};
    params.InMin = (float)InMin;
    params.InMax = (float)InMax;
    ProcessEvent(func, &params);
}
bool AAmbulatory_Character::IsUsingSpeedModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.IsUsingSpeedModifier"));
    struct Params_IsUsingSpeedModifier {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingSpeedModifier params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t AAmbulatory_Character::GetWadingComponentCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetWadingComponentCount"));
    struct Params_GetWadingComponentCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWadingComponentCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AAmbulatory_Character::SetMountTransform(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetMountTransform"));
    struct Params_SetMountTransform {
        FTransform Transform; // 0x0
    }; // Size: 0x30
    Params_SetMountTransform params{};
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
void AAmbulatory_Character::SetClimbingLadderState(EClimbingLadderState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetClimbingLadderState"));
    struct Params_SetClimbingLadderState {
        EClimbingLadderState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLadderState params{};
    params.InType = (EClimbingLadderState::Type)InType;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::Set_ForceTurnAndFace(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.Set_ForceTurnAndFace"));
    struct Params_Set_ForceTurnAndFace {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_Set_ForceTurnAndFace params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetMountNormal(FVector& Normal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetMountNormal"));
    struct Params_SetMountNormal {
        FVector Normal; // 0x0
    }; // Size: 0xc
    Params_SetMountNormal params{};
    params.Normal = (FVector)Normal;
    ProcessEvent(func, &params);
    Normal = params.Normal;
}
void AAmbulatory_Character::SetMobilityActionState(EMobilityActionState::Type InMobilityActionState, bool bSetTargetSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetMobilityActionState"));
    struct Params_SetMobilityActionState {
        EMobilityActionState::Type InMobilityActionState; // 0x0
        bool bSetTargetSpeed; // 0x1
    }; // Size: 0x2
    Params_SetMobilityActionState params{};
    params.InMobilityActionState = (EMobilityActionState::Type)InMobilityActionState;
    params.bSetTargetSpeed = (bool)bSetTargetSpeed;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetLandingType(ELandingType::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetLandingType"));
    struct Params_SetLandingType {
        ELandingType::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetLandingType params{};
    params.InType = (ELandingType::Type)InType;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetIsInIdle(bool isIdle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetIsInIdle"));
    struct Params_SetIsInIdle {
        bool isIdle; // 0x0
    }; // Size: 0x1
    Params_SetIsInIdle params{};
    params.isIdle = (bool)isIdle;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::CharacterRotatedBySupport(FRotator DeltaRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.CharacterRotatedBySupport"));
    struct Params_CharacterRotatedBySupport {
        FRotator DeltaRotation; // 0x0
    }; // Size: 0xc
    Params_CharacterRotatedBySupport params{};
    params.DeltaRotation = (FRotator)DeltaRotation;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::GetMountNormal(FVector& LedgeNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetMountNormal"));
    struct Params_GetMountNormal {
        FVector LedgeNormal; // 0x0
    }; // Size: 0xc
    Params_GetMountNormal params{};
    params.LedgeNormal = (FVector)LedgeNormal;
    ProcessEvent(func, &params);
    LedgeNormal = params.LedgeNormal;
}
void AAmbulatory_Character::SetDesiredDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetDesiredDirection"));
    struct Params_SetDesiredDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_SetDesiredDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::SetClimbingLedgeState(EClimbingLedgeState::Type InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.SetClimbingLedgeState"));
    struct Params_SetClimbingLedgeState {
        EClimbingLedgeState::Type InType; // 0x0
    }; // Size: 0x1
    Params_SetClimbingLedgeState params{};
    params.InType = (EClimbingLedgeState::Type)InType;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::GetMobilityModeState(EMobilityModeState::Type& OutMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetMobilityModeState"));
    struct Params_GetMobilityModeState {
        EMobilityModeState::Type OutMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityModeState params{};
    params.OutMobilityModeState = (EMobilityModeState::Type)OutMobilityModeState;
    ProcessEvent(func, &params);
    OutMobilityModeState = params.OutMobilityModeState;
}
void AAmbulatory_Character::GetMobilityActionStateName(UAnimInstance* InAnimInstance, FString& OutString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetMobilityActionStateName"));
    struct Params_GetMobilityActionStateName {
        UAnimInstance* InAnimInstance; // 0x0
        FString OutString; // 0x8
    }; // Size: 0x18
    Params_GetMobilityActionStateName params{};
    params.InAnimInstance = (UAnimInstance*)InAnimInstance;
    params.OutString = (FString)OutString;
    ProcessEvent(func, &params);
    OutString = params.OutString;
}
void AAmbulatory_Character::RevertSpeedMode(ETargetSpeedPriority::Type SpeedPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.RevertSpeedMode"));
    struct Params_RevertSpeedMode {
        ETargetSpeedPriority::Type SpeedPriority; // 0x0
    }; // Size: 0x1
    Params_RevertSpeedMode params{};
    params.SpeedPriority = (ETargetSpeedPriority::Type)SpeedPriority;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::RevertMobilityModeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.RevertMobilityModeState"));
    struct Params_RevertMobilityModeState {
    }; // Size: 0x0
    Params_RevertMobilityModeState params{};
    ProcessEvent(func, &params);
}
UTargetTracker* AAmbulatory_Character::GetFaceTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetFaceTargetTracker"));
    struct Params_GetFaceTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFaceTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void AAmbulatory_Character::RemoveWadingComponent(UPrimitiveComponent* InWaterComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.RemoveWadingComponent"));
    struct Params_RemoveWadingComponent {
        UPrimitiveComponent* InWaterComponent; // 0x0
    }; // Size: 0x8
    Params_RemoveWadingComponent params{};
    params.InWaterComponent = (UPrimitiveComponent*)InWaterComponent;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::RevertMobilityActionState(bool bSetTargetSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.RevertMobilityActionState"));
    struct Params_RevertMobilityActionState {
        bool bSetTargetSpeed; // 0x0
    }; // Size: 0x1
    Params_RevertMobilityActionState params{};
    params.bSetTargetSpeed = (bool)bSetTargetSpeed;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::JumpFinished(UAnimInstance* InAnimInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.JumpFinished"));
    struct Params_JumpFinished {
        UAnimInstance* InAnimInstance; // 0x0
    }; // Size: 0x8
    Params_JumpFinished params{};
    params.InAnimInstance = (UAnimInstance*)InAnimInstance;
    ProcessEvent(func, &params);
}
bool AAmbulatory_Character::IsWadingComponent(UPrimitiveComponent* InWaterComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.IsWadingComponent"));
    struct Params_IsWadingComponent {
        UPrimitiveComponent* InWaterComponent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsWadingComponent params{};
    params.InWaterComponent = (UPrimitiveComponent*)InWaterComponent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPrimitiveComponent* AAmbulatory_Character::GetWadingComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetWadingComponent"));
    struct Params_GetWadingComponent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWadingComponent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void AAmbulatory_Character::GetTargetSpeedModifier(ETargetSpeedMode::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetTargetSpeedModifier"));
    struct Params_GetTargetSpeedModifier {
        ETargetSpeedMode::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetTargetSpeedModifier params{};
    params.OutState = (ETargetSpeedMode::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
bool AAmbulatory_Character::GetIsInIdle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetIsInIdle"));
    struct Params_GetIsInIdle {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInIdle params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float AAmbulatory_Character::ComputeAngleBetweenTargetTrackers(UTargetTracker* SourceTracker, UTargetTracker* DestTracker, bool bInComputeDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ComputeAngleBetweenTargetTrackers"));
    struct Params_ComputeAngleBetweenTargetTrackers {
        UTargetTracker* SourceTracker; // 0x0
        UTargetTracker* DestTracker; // 0x8
        bool bInComputeDegrees; // 0x10
        char pad_11[0x3];
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_ComputeAngleBetweenTargetTrackers params{};
    params.SourceTracker = (UTargetTracker*)SourceTracker;
    params.DestTracker = (UTargetTracker*)DestTracker;
    params.bInComputeDegrees = (bool)bInComputeDegrees;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ESpeedModifierType::Type AAmbulatory_Character::GetSpeedModifierType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetSpeedModifierType"));
    struct Params_GetSpeedModifierType {
        ESpeedModifierType::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSpeedModifierType params{};
    ProcessEvent(func, &params);
    return (ESpeedModifierType::Type)params.ReturnValue;
}
void AAmbulatory_Character::GetMobilityActionState(EMobilityActionState::Type& OutMobilityActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetMobilityActionState"));
    struct Params_GetMobilityActionState {
        EMobilityActionState::Type OutMobilityActionState; // 0x0
    }; // Size: 0x1
    Params_GetMobilityActionState params{};
    params.OutMobilityActionState = (EMobilityActionState::Type)OutMobilityActionState;
    ProcessEvent(func, &params);
    OutMobilityActionState = params.OutMobilityActionState;
}
UTargetTracker* AAmbulatory_Character::GetLookAtTargetTracker() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetLookAtTargetTracker"));
    struct Params_GetLookAtTargetTracker {
        UTargetTracker* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLookAtTargetTracker params{};
    ProcessEvent(func, &params);
    return (UTargetTracker*)params.ReturnValue;
}
void AAmbulatory_Character::GetLandingType(ELandingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetLandingType"));
    struct Params_GetLandingType {
        ELandingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetLandingType params{};
    params.OutType = (ELandingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
int32_t AAmbulatory_Character::GetBlockageFlags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetBlockageFlags"));
    struct Params_GetBlockageFlags {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBlockageFlags params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AAmbulatory_Character::GetJumpingType(EJumpingType::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetJumpingType"));
    struct Params_GetJumpingType {
        EJumpingType::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetJumpingType params{};
    params.OutType = (EJumpingType::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
bool AAmbulatory_Character::GetIsMovementInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetIsMovementInput"));
    struct Params_GetIsMovementInput {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsMovementInput params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AAmbulatory_Character::GetClimbingLedgeState(EClimbingLedgeState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetClimbingLedgeState"));
    struct Params_GetClimbingLedgeState {
        EClimbingLedgeState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLedgeState params{};
    params.OutType = (EClimbingLedgeState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void AAmbulatory_Character::GetClimbingLadderState(EClimbingLadderState::Type& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetClimbingLadderState"));
    struct Params_GetClimbingLadderState {
        EClimbingLadderState::Type OutType; // 0x0
    }; // Size: 0x1
    Params_GetClimbingLadderState params{};
    params.OutType = (EClimbingLadderState::Type)OutType;
    ProcessEvent(func, &params);
    OutType = params.OutType;
}
void AAmbulatory_Character::GetBaseSpeedMode(ETargetSpeedMode::Type& OutState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.GetBaseSpeedMode"));
    struct Params_GetBaseSpeedMode {
        ETargetSpeedMode::Type OutState; // 0x0
    }; // Size: 0x1
    Params_GetBaseSpeedMode params{};
    params.OutState = (ETargetSpeedMode::Type)OutState;
    ProcessEvent(func, &params);
    OutState = params.OutState;
}
void AAmbulatory_Character::DestroyAttachedSceneComponent(USceneComponent* InSceneComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.DestroyAttachedSceneComponent"));
    struct Params_DestroyAttachedSceneComponent {
        USceneComponent* InSceneComponent; // 0x0
    }; // Size: 0x8
    Params_DestroyAttachedSceneComponent params{};
    params.InSceneComponent = (USceneComponent*)InSceneComponent;
    ProcessEvent(func, &params);
}
float AAmbulatory_Character::ComputeDesiredDirectionAngle(FVector& InDirection, bool bInComputeDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ComputeDesiredDirectionAngle"));
    struct Params_ComputeDesiredDirectionAngle {
        FVector InDirection; // 0x0
        bool bInComputeDegrees; // 0xc
        char pad_d[0x3];
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ComputeDesiredDirectionAngle params{};
    params.InDirection = (FVector)InDirection;
    params.bInComputeDegrees = (bool)bInComputeDegrees;
    ProcessEvent(func, &params);
    InDirection = params.InDirection;
    return (float)params.ReturnValue;
}
USceneComponent* AAmbulatory_Character::AttachSceneComponent(FTransform InTransform, FName InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AttachSceneComponent"));
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
void AAmbulatory_Character::ApplySlideHorizontalMovement(float WorldSpeed, FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ApplySlideHorizontalMovement"));
    struct Params_ApplySlideHorizontalMovement {
        float WorldSpeed; // 0x0
        FVector InWorldDirection; // 0x4
    }; // Size: 0x10
    Params_ApplySlideHorizontalMovement params{};
    params.WorldSpeed = (float)WorldSpeed;
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void AAmbulatory_Character::ApplyMobilityModeStateSpeeds(EMobilityModeState::Type InMobilityModeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.ApplyMobilityModeStateSpeeds"));
    struct Params_ApplyMobilityModeStateSpeeds {
        EMobilityModeState::Type InMobilityModeState; // 0x0
    }; // Size: 0x1
    Params_ApplyMobilityModeStateSpeeds params{};
    params.InMobilityModeState = (EMobilityModeState::Type)InMobilityModeState;
    ProcessEvent(func, &params);
}
bool AAmbulatory_Character::AmIMovingIntoStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AmIMovingIntoStairs"));
    struct Params_AmIMovingIntoStairs {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AmIMovingIntoStairs params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AAmbulatory_Character::AmIMovingIntoSlopes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AmIMovingIntoSlopes"));
    struct Params_AmIMovingIntoSlopes {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AmIMovingIntoSlopes params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AAmbulatory_Character::AmIGoingUpStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AmIGoingUpStairs"));
    struct Params_AmIGoingUpStairs {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AmIGoingUpStairs params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AAmbulatory_Character::AmIGoingDownStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AmIGoingDownStairs"));
    struct Params_AmIGoingDownStairs {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AmIGoingDownStairs params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AAmbulatory_Character::AddWadingComponent(UPrimitiveComponent* InWaterComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.Ambulatory_Character.AddWadingComponent"));
    struct Params_AddWadingComponent {
        UPrimitiveComponent* InWaterComponent; // 0x0
    }; // Size: 0x8
    Params_AddWadingComponent params{};
    params.InWaterComponent = (UPrimitiveComponent*)InWaterComponent;
    ProcessEvent(func, &params);
}
