#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraShakeDurationType : uint8_t {
    Fixed = 0,
    Infinite = 1,
    Custom = 2,
    ECameraShakeDurationType_MAX = 3,
};
#pragma pack(pop)
