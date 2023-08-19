#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EColorVisionDeficiency : uint8_t {
    NormalVision = 0,
    Deuteranope = 1,
    Protanope = 2,
    Tritanope = 3,
    EColorVisionDeficiency_MAX = 4,
};
#pragma pack(pop)
