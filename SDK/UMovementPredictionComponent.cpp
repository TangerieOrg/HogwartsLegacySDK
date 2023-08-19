#include "EMovementSensorType.hpp"
#include "FMovementPredictionSettings.hpp"
#include "FMovementSensorInfo.hpp"
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMotionTable.hpp"
#include "UMovementPredictionComponent.hpp"
void UMovementPredictionComponent::SetMovementState(FName InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.SetMovementState"));
    struct Params_SetMovementState {
        FName InState; // 0x0
    }; // Size: 0x8
    Params_SetMovementState params{};
    params.InState = (FName)InState;
    ProcessEvent(func, &params);
}
UMovementPredictionComponent* UMovementPredictionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.MovementPredictionComponent");
    return (UMovementPredictionComponent*)res;
}
void UMovementPredictionComponent::TriggerMovementEvent(EMovementSensorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.TriggerMovementEvent"));
    struct Params_TriggerMovementEvent {
        EMovementSensorType InType; // 0x0
    }; // Size: 0x1
    Params_TriggerMovementEvent params{};
    params.InType = (EMovementSensorType)InType;
    ProcessEvent(func, &params);
}
FTransform UMovementPredictionComponent::GetPredictedTransform(float InTimeFromNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetPredictedTransform"));
    struct Params_GetPredictedTransform {
        float InTimeFromNow; // 0x0
        char pad_4[0xc];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetPredictedTransform params{};
    params.InTimeFromNow = (float)InTimeFromNow;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
bool UMovementPredictionComponent::GetTimeToEventTransition(FName InEventName, float& OutTimeUntilTransition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetTimeToEventTransition"));
    struct Params_GetTimeToEventTransition {
        FName InEventName; // 0x0
        float OutTimeUntilTransition; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetTimeToEventTransition params{};
    params.InEventName = (FName)InEventName;
    params.OutTimeUntilTransition = (float)OutTimeUntilTransition;
    ProcessEvent(func, &params);
    OutTimeUntilTransition = params.OutTimeUntilTransition;
    return (bool)params.ReturnValue;
}
bool UMovementPredictionComponent::IsLastEventFollowThroughComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.IsLastEventFollowThroughComplete"));
    struct Params_IsLastEventFollowThroughComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLastEventFollowThroughComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform UMovementPredictionComponent::GetPredictedUncorrectedTransform(float InTimeFromNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetPredictedUncorrectedTransform"));
    struct Params_GetPredictedUncorrectedTransform {
        float InTimeFromNow; // 0x0
        char pad_4[0xc];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetPredictedUncorrectedTransform params{};
    params.InTimeFromNow = (float)InTimeFromNow;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
float UMovementPredictionComponent::GetSteeringCorrectionAngle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetSteeringCorrectionAngle"));
    struct Params_GetSteeringCorrectionAngle {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSteeringCorrectionAngle params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMovementPredictionComponent::GetEventAnimTime(FName InEventName, FName InCurrentState, float& OutAnimTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetEventAnimTime"));
    struct Params_GetEventAnimTime {
        FName InEventName; // 0x0
        FName InCurrentState; // 0x8
        float OutAnimTime; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetEventAnimTime params{};
    params.InEventName = (FName)InEventName;
    params.InCurrentState = (FName)InCurrentState;
    params.OutAnimTime = (float)OutAnimTime;
    ProcessEvent(func, &params);
    OutAnimTime = params.OutAnimTime;
    return (bool)params.ReturnValue;
}
bool UMovementPredictionComponent::GetNextSensorInfoOfTypes(TArray<EMovementSensorType>& SensorTypes, float InTimeFromNow, FMovementSensorInfo& OutSensorInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetNextSensorInfoOfTypes"));
    struct Params_GetNextSensorInfoOfTypes {
        TArray<EMovementSensorType> SensorTypes; // 0x0
        float InTimeFromNow; // 0x10
        char pad_14[0xc];
        FMovementSensorInfo OutSensorInfo; // 0x20
        bool ReturnValue; // 0xa0
    }; // Size: 0xa1
    Params_GetNextSensorInfoOfTypes params{};
    params.SensorTypes = (TArray<EMovementSensorType>)SensorTypes;
    params.InTimeFromNow = (float)InTimeFromNow;
    params.OutSensorInfo = (FMovementSensorInfo)OutSensorInfo;
    ProcessEvent(func, &params);
    SensorTypes = params.SensorTypes;
    OutSensorInfo = params.OutSensorInfo;
    return (bool)params.ReturnValue;
}
bool UMovementPredictionComponent::GetNextSensorInfo(EMovementSensorType SensorType, float InTimeFromNow, FMovementSensorInfo& OutSensorInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetNextSensorInfo"));
    struct Params_GetNextSensorInfo {
        EMovementSensorType SensorType; // 0x0
        char pad_1[0x3];
        float InTimeFromNow; // 0x4
        char pad_8[0x8];
        FMovementSensorInfo OutSensorInfo; // 0x10
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_GetNextSensorInfo params{};
    params.SensorType = (EMovementSensorType)SensorType;
    params.InTimeFromNow = (float)InTimeFromNow;
    params.OutSensorInfo = (FMovementSensorInfo)OutSensorInfo;
    ProcessEvent(func, &params);
    OutSensorInfo = params.OutSensorInfo;
    return (bool)params.ReturnValue;
}
bool UMovementPredictionComponent::GetNextBlockingCollision(float InGlancingAngleThresholdDegrees, FMovementSensorInfo& OutSensorInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetNextBlockingCollision"));
    struct Params_GetNextBlockingCollision {
        float InGlancingAngleThresholdDegrees; // 0x0
        char pad_4[0xc];
        FMovementSensorInfo OutSensorInfo; // 0x10
        bool ReturnValue; // 0x90
    }; // Size: 0x91
    Params_GetNextBlockingCollision params{};
    params.InGlancingAngleThresholdDegrees = (float)InGlancingAngleThresholdDegrees;
    params.OutSensorInfo = (FMovementSensorInfo)OutSensorInfo;
    ProcessEvent(func, &params);
    OutSensorInfo = params.OutSensorInfo;
    return (bool)params.ReturnValue;
}
FName UMovementPredictionComponent::GetMovementState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetMovementState"));
    struct Params_GetMovementState {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMovementState params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UMovementPredictionComponent::GetMovementEventTarget(EMovementSensorType& OutType, float& OutTimeToEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetMovementEventTarget"));
    struct Params_GetMovementEventTarget {
        EMovementSensorType OutType; // 0x0
        char pad_1[0x3];
        float OutTimeToEvent; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMovementEventTarget params{};
    params.OutType = (EMovementSensorType)OutType;
    params.OutTimeToEvent = (float)OutTimeToEvent;
    ProcessEvent(func, &params);
    OutType = params.OutType;
    OutTimeToEvent = params.OutTimeToEvent;
    return (bool)params.ReturnValue;
}
float UMovementPredictionComponent::GetMovementAnimTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetMovementAnimTime"));
    struct Params_GetMovementAnimTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMovementAnimTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FRotator UMovementPredictionComponent::GetFlightSteeringCorrectionAngles(FRotator& InInputRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetFlightSteeringCorrectionAngles"));
    struct Params_GetFlightSteeringCorrectionAngles {
        FRotator InInputRotation; // 0x0
        FRotator ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetFlightSteeringCorrectionAngles params{};
    params.InInputRotation = (FRotator)InInputRotation;
    ProcessEvent(func, &params);
    InInputRotation = params.InInputRotation;
    return (FRotator)params.ReturnValue;
}
bool UMovementPredictionComponent::GetEventFollowThroughAnimTime(FName InEventName, FName InCurrentState, float& OutAnimTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.MovementPredictionComponent.GetEventFollowThroughAnimTime"));
    struct Params_GetEventFollowThroughAnimTime {
        FName InEventName; // 0x0
        FName InCurrentState; // 0x8
        float OutAnimTime; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_GetEventFollowThroughAnimTime params{};
    params.InEventName = (FName)InEventName;
    params.InCurrentState = (FName)InCurrentState;
    params.OutAnimTime = (float)OutAnimTime;
    ProcessEvent(func, &params);
    OutAnimTime = params.OutAnimTime;
    return (bool)params.ReturnValue;
}
