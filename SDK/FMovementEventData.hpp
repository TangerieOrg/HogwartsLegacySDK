#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FMovementEventData {
    FName MovementEventName; // 0x0
    float MinApproachAngle; // 0x8
    float MaximumAngleForCommitment; // 0xc
    FRuntimeFloatCurve TimeToLocationCurve; // 0x10
    FRuntimeFloatCurve TimeToRotationCurve; // 0x98
}; // Size: 0x120
#pragma pack(pop)
