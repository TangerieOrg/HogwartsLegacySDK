#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlBehaviors : uint8_t {
    None = 0,
    Cinematic = 1,
    Station = 2,
    EControlBehaviors_MAX = 3,
};
#pragma pack(pop)
