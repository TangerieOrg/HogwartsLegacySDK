#pragma once
#include <cstdint>
#include "EObjectFadeDirection.hpp"
#include "EObjectFadeSpeed.hpp"
#pragma pack(push, 1)
struct FObjectFadeParamsSpeedDuration {
    EObjectFadeDirection Direction; // 0x0
    EObjectFadeSpeed Speed; // 0x1
    char pad_2[0x2];
    float Duration; // 0x4
    bool bUseDuration; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
