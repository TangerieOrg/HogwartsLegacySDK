#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECharacterShutdownPriority : uint8_t {
    Lowest = 0,
    PreventStrike = 1,
    InStation = 2,
    NPCOptimization = 3,
    NPCTeleport = 4,
    InCinematic = 5,
    InFinisher = 6,
    SpecialClearAndPrevent = 7,
    SpecialSpawning = 8,
    NonRender = 9,
    FleshCache = 10,
    ECharacterShutdownPriority_MAX = 11,
};
#pragma pack(pop)
