#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStandardManagedPriority : uint8_t {
    Lowest = 0,
    AblAbility = 1,
    NPC = 2,
    Teleport = 3,
    PassiveCinematic = 4,
    ActiveCinematic = 5,
    Highest = 6,
    Debug = 7,
    EStandardManagedPriority_MAX = 8,
};
#pragma pack(pop)
