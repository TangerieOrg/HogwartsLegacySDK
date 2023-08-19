#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingExitType : uint8_t {
    Burrow = 0,
    Poof = 1,
    EGroundSwarmingExitType_MAX = 2,
};
#pragma pack(pop)
