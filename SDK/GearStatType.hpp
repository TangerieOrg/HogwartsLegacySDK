#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum GearStatType : uint8_t {
    Offense = 0,
    Defense = 1,
    Cooldown = 2,
    GearStatType_MAX = 3,
};
#pragma pack(pop)
