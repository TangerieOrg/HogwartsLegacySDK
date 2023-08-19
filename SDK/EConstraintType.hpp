#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConstraintType : uint8_t {
    Transform = 0,
    Aim = 1,
    MAX = 2,
};
#pragma pack(pop)
