#pragma once
#include <cstdint>
#include "EAdditiveAnimationType.hpp"
#pragma pack(push, 1)
struct FSlotEvaluationPose {
    EAdditiveAnimationType AdditiveType; // 0x0
    char pad_1[0x3];
    float weight; // 0x4
    char pad_8[0xd8];
}; // Size: 0xe0
#pragma pack(pop)
