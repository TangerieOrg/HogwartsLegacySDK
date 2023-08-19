#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FAnchors {
    FVector2D Minimum; // 0x0
    FVector2D Maximum; // 0x8
}; // Size: 0x10
#pragma pack(pop)
