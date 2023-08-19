#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOdcSnapMode : uint8_t {
    SNAP_CLOSEST = 0,
    SNAP_VERTICAL = 1,
    SNAP_MAX = 2,
};
#pragma pack(pop)
