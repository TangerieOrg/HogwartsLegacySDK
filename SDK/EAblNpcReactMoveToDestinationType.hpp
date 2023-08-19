#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactMoveToDestinationType : uint8_t {
    CustomGlobal = 0,
    CustomLocal = 1,
    ReactionTargetLocation = 2,
    ReactionInstigator = 3,
    EAblNpcReactMoveToDestinationType_MAX = 4,
};
#pragma pack(pop)
