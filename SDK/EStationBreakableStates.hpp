#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStationBreakableStates {
    Unbroken = 0,
    Broken = 1,
    Protected = 2,
    EStationBreakableStates_MAX = 3,
};
#pragma pack(pop)
