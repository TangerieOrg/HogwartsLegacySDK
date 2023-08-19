#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSpellUnlockMiniGamePathSegment {
    FVector2D StartPoint; // 0x0
    FVector2D EndPoint; // 0x8
}; // Size: 0x10
#pragma pack(pop)
