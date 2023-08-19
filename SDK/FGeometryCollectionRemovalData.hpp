#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FGeometryCollectionRemovalData {
    bool bRemoveOnMaxSleep; // 0x0
    bool bShrinkOnMaxSleep; // 0x1
    char pad_2[0x2];
    FVector2D MaximumSleepTime; // 0x4
    FVector2D RemovalDuration; // 0xc
}; // Size: 0x14
#pragma pack(pop)
