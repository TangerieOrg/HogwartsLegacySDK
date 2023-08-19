#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDisbandPriority {
    LowestPriority = 0,
    PathUpdatePriority = 1,
    JoinFailurePriority = 2,
    ForcedRemovePriority = 3,
    RemoveSplinePriority = 4,
    EDisbandPriority_MAX = 5,
};
#pragma pack(pop)
