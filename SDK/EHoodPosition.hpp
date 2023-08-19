#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoodPosition : uint8_t {
    Unset = 0,
    UP = 1,
    DOWN = 2,
    EHoodPosition_MAX = 3,
};
#pragma pack(pop)
