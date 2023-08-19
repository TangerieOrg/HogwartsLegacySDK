#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOrientationTargetKind : uint8_t {
    Direction = 0,
    Location = 1,
    EOrientationTargetKind_MAX = 2,
};
#pragma pack(pop)
