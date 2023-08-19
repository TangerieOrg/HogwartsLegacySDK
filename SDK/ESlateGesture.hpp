#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateGesture : uint8_t {
    None = 0,
    Scroll = 1,
    Magnify = 2,
    Swipe = 3,
    Rotate = 4,
    LongPress = 5,
    ESlateGesture_MAX = 6,
};
#pragma pack(pop)
