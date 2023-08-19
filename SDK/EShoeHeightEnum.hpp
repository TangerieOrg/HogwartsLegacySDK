#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EShoeHeightEnum : uint8_t {
    SHOE_HEIGHT_THIGH = 0,
    SHOE_HEIGHT_KNEE = 1,
    SHOE_HEIGHT_KNICKER = 2,
    SHOE_HEIGHT_CALF = 3,
    SHOE_HEIGHT_SHIN = 4,
    SHOE_HEIGHT_SHOE = 5,
    SHOE_HEIGHT_SLIPPER = 6,
    SHOE_HEIGHT_MAX = 7,
};
#pragma pack(pop)
