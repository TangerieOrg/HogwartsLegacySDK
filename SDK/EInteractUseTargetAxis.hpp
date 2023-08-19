#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractUseTargetAxis : uint8_t {
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
    NegXAxis = 3,
    NegYAxis = 4,
    NegZAxis = 5,
    EInteractUseTargetAxis_MAX = 6,
};
#pragma pack(pop)
