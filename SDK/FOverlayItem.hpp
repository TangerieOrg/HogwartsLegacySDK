#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FOverlayItem {
    FTimespan StartTime; // 0x0
    FTimespan EndTime; // 0x8
    FString Text; // 0x10
    FVector2D Position; // 0x20
}; // Size: 0x28
#pragma pack(pop)
