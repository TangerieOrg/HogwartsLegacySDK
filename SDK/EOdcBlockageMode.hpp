#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOdcBlockageMode : uint8_t {
    BLOCKED_IF_ANY_MATCH = 0,
    BLOCKED_IF_ALL_MATCH = 1,
    BLOCKED_IF_MAX = 2,
};
#pragma pack(pop)
