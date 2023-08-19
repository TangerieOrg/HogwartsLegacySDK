#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAccessibilityColorRemapMode {
    Invalid = 0,
    Initialize = 1,
    None = 2,
    Deuteranope = 3,
    Protanope = 4,
    Tritanope = 5,
    EAccessibilityColorRemapMode_MAX = 6,
};
#pragma pack(pop)
