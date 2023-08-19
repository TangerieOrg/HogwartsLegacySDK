#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_BlendspaceAngle {
    Forward = 0,
    Left45 = 1,
    Left90 = 2,
    Left135 = 3,
    Left180 = 4,
    Right180 = 5,
    Right135 = 6,
    Right90 = 7,
    Right45 = 8,
    ENPC_MAX = 9,
};
#pragma pack(pop)
