#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactMoveToSpeedType : uint8_t {
    Custom = 0,
    ReactionVelocityMagnitude = 1,
    TimeCurve = 2,
    DistancetoDestinationCurve = 3,
    PositionCurve = 4,
    EAblNpcReactMoveToSpeedType_MAX = 5,
};
#pragma pack(pop)
