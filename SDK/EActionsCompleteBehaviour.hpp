#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EActionsCompleteBehaviour : uint8_t {
    None = 0,
    Dismount = 1,
    MoveToNewSpline = 2,
    EActionsCompleteBehaviour_MAX = 3,
};
#pragma pack(pop)
