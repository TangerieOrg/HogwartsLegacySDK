#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EViewInteractionState {
    None = 0,
    Hovered = 1,
    Focused = 2,
    EViewInteractionState_MAX = 3,
};
#pragma pack(pop)
