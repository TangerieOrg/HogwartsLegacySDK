#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ACLVisualFidelity : uint8_t {
    Highest = 0,
    Medium = 1,
    Lowest = 2,
    ACLVisualFidelity_MAX = 3,
};
#pragma pack(pop)
