#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpawnAOE {
    SuccessfulHit = 0,
    FailedHit = 1,
    Blocked = 2,
    Deflected = 3,
    FizzledOut = 4,
    ESpawnAOE_MAX = 5,
};
#pragma pack(pop)
