#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TurnAssist : uint8_t {
    None = 0,
    Default = 1,
    Mobility = 2,
    MobilityStop = 3,
    TurnInPlace = 4,
    MobilityStart = 5,
    Attack = 6,
    Stomp = 7,
    RunAt = 8,
    Shuffle = 9,
    Taunt = 10,
    IdleBreak = 11,
    AttackReset = 12,
    TargetRelative = 13,
    AlertPointOfInterest = 14,
    AttackClose = 15,
    ENPC_MAX = 16,
};
#pragma pack(pop)
