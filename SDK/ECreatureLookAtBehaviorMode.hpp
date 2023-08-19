#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureLookAtBehaviorMode : uint8_t {
    Disabled = 0,
    Perception = 1,
    LookAround = 2,
    ForcedTarget = 3,
    ECreatureLookAtBehaviorMode_MAX = 4,
};
#pragma pack(pop)
