#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FWidgetTransform {
    FVector2D Translation; // 0x0
    FVector2D Scale; // 0x8
    FVector2D Shear; // 0x10
    float Angle; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
