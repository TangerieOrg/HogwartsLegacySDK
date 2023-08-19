#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TurnAssistType : uint8_t {
    None = 0,
    Fixed = 1,
    Target = 2,
    Instigator = 3,
    Player = 4,
    TargetRelative = 5,
    ExternalMode = 6,
    TargetTracker = 7,
    MovementDirection = 8,
    ENPC_MAX = 9,
};
#pragma pack(pop)
