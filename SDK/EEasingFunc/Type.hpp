#pragma once
#include <cstdint>
namespace EEasingFunc {
#pragma pack(push, 1)
enum Type : uint8_t {
    Linear = 0,
    Step = 1,
    SinusoidalIn = 2,
    SinusoidalOut = 3,
    SinusoidalInOut = 4,
    EaseIn = 5,
    EaseOut = 6,
    EaseInOut = 7,
    ExpoIn = 8,
    ExpoOut = 9,
    ExpoInOut = 10,
    CircularIn = 11,
    CircularOut = 12,
    CircularInOut = 13,
    EEasingFunc_MAX = 14,
};
#pragma pack(pop)
}
