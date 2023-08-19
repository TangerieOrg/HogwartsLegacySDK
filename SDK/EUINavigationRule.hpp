#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUINavigationRule : uint8_t {
    Escape = 0,
    Explicit = 1,
    Wrap = 2,
    Stop = 3,
    Custom = 4,
    CustomBoundary = 5,
    Invalid = 6,
    EUINavigationRule_MAX = 7,
};
#pragma pack(pop)
