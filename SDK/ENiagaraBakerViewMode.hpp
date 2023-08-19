#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraBakerViewMode : int32_t {
    Perspective = 0,
    OrthoFront = 1,
    OrthoBack = 2,
    OrthoLeft = 3,
    OrthoRight = 4,
    OrthoTop = 5,
    OrthoBottom = 6,
    Num = 7,
    ENiagaraBakerViewMode_MAX = 8,
};
#pragma pack(pop)
