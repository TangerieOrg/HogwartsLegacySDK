#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFlyingStairState {
    Unbuilt = 0,
    Building = 1,
    Built = 2,
    Demolishing = 3,
    FlagForDemolishing = 4,
    EFlyingStairState_MAX = 5,
};
#pragma pack(pop)
