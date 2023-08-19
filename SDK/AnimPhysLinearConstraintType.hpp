#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AnimPhysLinearConstraintType : uint8_t {
    Free = 0,
    Limited = 1,
    AnimPhysLinearConstraintType_MAX = 2,
};
#pragma pack(pop)
