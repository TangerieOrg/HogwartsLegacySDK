#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionModTargetType : uint8_t {
    FaceTracker = 0,
    AimAtTracker = 1,
    LookAtTracker = 2,
    ERootMotionModTargetType_MAX = 3,
};
#pragma pack(pop)
