#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBakedCurvatureColorMode : int32_t {
    Grayscale = 0,
    RedBlue = 1,
    RedGreenBlue = 2,
    EBakedCurvatureColorMode_MAX = 3,
};
#pragma pack(pop)
