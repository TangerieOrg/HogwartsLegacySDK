#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStationPlayerInteractionPermissions : uint8_t {
    PIP_NEVER = 0,
    PIP_WHEN_OCCUPIED = 1,
    PIP_CONDITIONAL = 2,
    PIP_ALWAYS = 3,
    PIP_MAX = 4,
};
#pragma pack(pop)
