#pragma once
#include <cstdint>
namespace EChromaSDKMouseLed {
#pragma pack(push, 1)
enum Type : uint8_t {
    ML_SCROLLWHEEL = 0,
    ML_LOGO = 1,
    ML_BACKLIGHT = 2,
    ML_LEFT_SIDE1 = 3,
    ML_LEFT_SIDE2 = 4,
    ML_LEFT_SIDE3 = 5,
    ML_LEFT_SIDE4 = 6,
    ML_LEFT_SIDE5 = 7,
    ML_LEFT_SIDE6 = 8,
    ML_LEFT_SIDE7 = 9,
    ML_BOTTOM1 = 10,
    ML_BOTTOM2 = 11,
    ML_BOTTOM3 = 12,
    ML_BOTTOM4 = 13,
    ML_BOTTOM5 = 14,
    ML_RIGHT_SIDE1 = 15,
    ML_RIGHT_SIDE2 = 16,
    ML_RIGHT_SIDE3 = 17,
    ML_RIGHT_SIDE4 = 18,
    ML_RIGHT_SIDE5 = 19,
    ML_RIGHT_SIDE6 = 20,
    ML_RIGHT_SIDE7 = 21,
    ML_MAX = 22,
};
#pragma pack(pop)
}
