#pragma once
#include <cstdint>
#include "ESectionEvaluationFlags.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FMovieSceneSubSectionData {
    char pad_0[0x8];
    FGuid ObjectBindingID; // 0x8
    ESectionEvaluationFlags flags; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
