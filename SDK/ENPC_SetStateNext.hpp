#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_SetStateNext {
    None = 0,
    TargetLost = 1,
    PostSpawn = 2,
    TargetSuccess = 3,
    ReactionDone = 4,
    LosingTarget = 5,
    ConfundoDone = 6,
    ENPC_MAX = 7,
};
#pragma pack(pop)
