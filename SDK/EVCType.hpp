#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVCType : uint8_t {
    ITEM = 0,
    LOCK = 1,
    UNKNOWN = 2,
    EVCType_MAX = 3,
};
#pragma pack(pop)
