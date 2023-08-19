#pragma once
#include <cstdint>
namespace EInterpolationBlend {
#pragma pack(push, 1)
enum Type : uint8_t {
    Linear = 0,
    Cubic = 1,
    Sinusoidal = 2,
    EaseInOutExponent2 = 3,
    EaseInOutExponent3 = 4,
    EaseInOutExponent4 = 5,
    EaseInOutExponent5 = 6,
    MAX = 7,
};
#pragma pack(pop)
}
