#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETwoBranches : uint8_t {
    EQUAL = 0,
    NOTEQUAL = 1,
    ETwoBranches_MAX = 2,
};
#pragma pack(pop)
