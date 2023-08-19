#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDoorCurveAdjustment : uint8_t {
    NoAdjustment = 0,
    Invert = 1,
    Reverse = 2,
    EDoorCurveAdjustment_MAX = 3,
};
#pragma pack(pop)
