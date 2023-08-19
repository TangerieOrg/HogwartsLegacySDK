#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EComparisonEnum : uint8_t {
    COMP_EQUAL = 0,
    COMP_NOTEQUAL = 1,
    COMP_MAX = 2,
};
#pragma pack(pop)
