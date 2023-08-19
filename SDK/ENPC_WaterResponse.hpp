#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_WaterResponse : uint8_t {
    Die = 0,
    TeleportToShore = 1,
    SwimToShore = 2,
    SwimAndAttack = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
