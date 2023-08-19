#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblReactionState {
    Queued = 0,
    Active = 1,
    Ending = 2,
    Inactive = 3,
    Finished = 4,
    EAblReactionState_MAX = 5,
};
#pragma pack(pop)
