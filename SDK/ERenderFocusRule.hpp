#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderFocusRule : uint8_t {
    Always = 0,
    NonPointer = 1,
    NavigationOnly = 2,
    Never = 3,
    ERenderFocusRule_MAX = 4,
};
#pragma pack(pop)
