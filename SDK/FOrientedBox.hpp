#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FOrientedBox {
    FVector Center; // 0x0
    FVector AxisX; // 0xc
    FVector AxisY; // 0x18
    FVector AxisZ; // 0x24
    float ExtentX; // 0x30
    float ExtentY; // 0x34
    float ExtentZ; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
