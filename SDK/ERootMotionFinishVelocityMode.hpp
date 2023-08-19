#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionFinishVelocityMode : uint8_t {
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ERootMotionFinishVelocityMode_MAX = 3,
};
#pragma pack(pop)
