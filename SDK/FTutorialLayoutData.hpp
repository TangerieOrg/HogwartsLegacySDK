#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FTutorialLayoutData {
    FVector2D Position; // 0x0
    FVector2D Alignment; // 0x8
}; // Size: 0x10
#pragma pack(pop)
