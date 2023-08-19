#pragma once
#include <cstdint>
#include "EMovementSensorType.hpp"
#include "FMovementPredictionSettings.hpp"
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
class UMotionTable;
struct FMovementSensorInfo;
#pragma pack(push, 1)
class UMovementPredictionComponent : public UActorComponent {
public:
    FMovementPredictionSettings Settings; // 0xc8
    char pad_fc[0x4];
    UMotionTable* MotionTable; // 0x100
    bool bEnableEventMatching; // 0x108
    char pad_109[0x57];
    float MovementWarpingStrength; // 0x160
    float SteeringCorrectionStrength; // 0x164
    FRuntimeFloatCurve SteeringCorrectionWeightOverTime; // 0x168
    FRuntimeFloatCurve FlightSteeringYawCorrectionWeightOverTime; // 0x1f0
    FRuntimeFloatCurve FlightSteeringPitchCorrectionWeightOverTime; // 0x278
    bool bDebugDrawMotionEvents; // 0x300
    char pad_301[0x1af];
    static UMovementPredictionComponent* StaticClass();
    void TriggerMovementEvent(EMovementSensorType InType);
    void SetMovementState(FName InState);
    bool IsLastEventFollowThroughComplete();
    bool GetTimeToEventTransition(FName InEventName, float& OutTimeUntilTransition);
    float GetSteeringCorrectionAngle();
    FTransform GetPredictedUncorrectedTransform(float InTimeFromNow);
    FTransform GetPredictedTransform(float InTimeFromNow);
    bool GetNextSensorInfoOfTypes(TArray<EMovementSensorType>& SensorTypes, float InTimeFromNow, FMovementSensorInfo& OutSensorInfo);
    bool GetNextSensorInfo(EMovementSensorType SensorType, float InTimeFromNow, FMovementSensorInfo& OutSensorInfo);
    bool GetNextBlockingCollision(float InGlancingAngleThresholdDegrees, FMovementSensorInfo& OutSensorInfo);
    FName GetMovementState();
    bool GetMovementEventTarget(EMovementSensorType& OutType, float& OutTimeToEvent);
    float GetMovementAnimTime();
    FRotator GetFlightSteeringCorrectionAngles(FRotator& InInputRotation);
    bool GetEventFollowThroughAnimTime(FName InEventName, FName InCurrentState, float& OutAnimTime);
    bool GetEventAnimTime(FName InEventName, FName InCurrentState, float& OutAnimTime);
}; // Size: 0x4b0
#pragma pack(pop)
