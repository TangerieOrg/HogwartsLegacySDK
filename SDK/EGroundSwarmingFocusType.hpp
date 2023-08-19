#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingFocusType : uint8_t {
    Undefined = 0,
    Actor = 1,
    SceneComponent = 2,
    Fixed = 3,
    EGroundSwarmingFocusType_MAX = 4,
};
#pragma pack(pop)
