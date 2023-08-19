#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStartVecMethod : uint8_t {
    None = 0,
    ReferenceVector = 1,
    RandomAngleOwnerForward = 2,
    RandomAngleToTarget = 3,
    EStartVecMethod_MAX = 4,
};
#pragma pack(pop)
