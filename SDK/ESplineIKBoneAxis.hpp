#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESplineIKBoneAxis : uint8_t {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    ESplineIKBoneAxis_MAX = 4,
};
#pragma pack(pop)
