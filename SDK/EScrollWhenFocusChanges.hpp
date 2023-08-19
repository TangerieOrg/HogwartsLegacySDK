#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScrollWhenFocusChanges : uint8_t {
    NoScroll = 0,
    InstantScroll = 1,
    AnimatedScroll = 2,
    EScrollWhenFocusChanges_MAX = 3,
};
#pragma pack(pop)
