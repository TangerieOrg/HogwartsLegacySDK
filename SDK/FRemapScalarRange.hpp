#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRemapScalarRange {
    FVector2D InputRange; // 0x0
    FVector2D OutputRange; // 0x8
}; // Size: 0x10
#pragma pack(pop)
