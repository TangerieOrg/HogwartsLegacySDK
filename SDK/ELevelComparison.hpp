#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELevelComparison : uint8_t {
    None = 0,
    MinimumDifference = 1,
    MaximumDifference = 2,
    WithinRangedOf = 3,
    OutsideRangeOf = 4,
    ELevelComparison_MAX = 5,
};
#pragma pack(pop)
