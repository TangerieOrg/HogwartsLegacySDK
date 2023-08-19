#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMissionTabType : uint8_t {
    TABTYPE_ALL = 0,
    TABTYPE_MAIN = 1,
    TABTYPE_SIDE = 2,
    TABTYPE_ASSIGNMENT = 3,
    TABTYPE_RELATIONSHIP = 4,
    TABTYPE_COMPLETE = 5,
    TABTYPE_MAX = 6,
};
#pragma pack(pop)
