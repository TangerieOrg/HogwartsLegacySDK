#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWandLinkState {
    None = 0,
    Start = 1,
    Defend = 2,
    ProtagonistSurge = 3,
    AntagonistSurge = 4,
    EWandLinkState_MAX = 5,
};
#pragma pack(pop)
