#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FWindAffectedScale {
    FVector2D ScaleMinMax; // 0x0
    FVector2D WindSpeedMinMax; // 0x8
}; // Size: 0x10
#pragma pack(pop)
