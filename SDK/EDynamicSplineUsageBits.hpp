#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDynamicSplineUsageBits {
    None = 0,
    Positions = 1,
    Normals = 2,
    Tangents = 4,
    WorldSpace = 8,
    EDynamicSplineUsageBits_MAX = 9,
};
#pragma pack(pop)
