#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#pragma pack(push, 1)
struct FMovementPredictionSettings {
    bool bEnablePrediction; // 0x0
    char pad_1[0x3];
    float PredictionDuration; // 0x4
    float MinJumpOnHeight; // 0x8
    float MaxJumpOnHeight; // 0xc
    float MinJumpDownHeight; // 0x10
    float JumpOverDistance; // 0x14
    float MaxGrazingAngle; // 0x18
    float DistanceBetweenProbes; // 0x1c
    float TurnRate; // 0x20
    bool bTimeSlice; // 0x24
    bool bEnableLandingPrediction; // 0x25
    bool bOnlyLandOnNavmesh; // 0x26
    bool bWaterCollisionChannelIsSet; // 0x27
    ECollisionChannel WaterCollisionChannel; // 0x28
    bool bDebugDelayBetweenUpdates; // 0x29
    bool bDebugDrawTrajectory; // 0x2a
    bool bDebugDrawSensorInfo; // 0x2b
    float SensorDrawDuration; // 0x2c
    bool bDebugDrawSweeps; // 0x30
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
