#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureFeedState {
    Inactive = 0,
    Thrown = 1,
    MoveToCreature = 2,
    Eating = 3,
    Vanishing = 4,
    ECreatureFeedState_MAX = 5,
};
#pragma pack(pop)
