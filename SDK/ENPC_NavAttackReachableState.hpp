#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_NavAttackReachableState {
    NotNeeded = 0,
    Unreachable = 1,
    Reachable = 2,
    StraightLineReachable = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
