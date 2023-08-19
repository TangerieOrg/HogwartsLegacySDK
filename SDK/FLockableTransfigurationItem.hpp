#pragma once
#include <cstdint>
#include "FTransfigurationUnlockSource.hpp"
#pragma pack(push, 1)
struct FLockableTransfigurationItem {
    FName ItemName; // 0x0
    bool bIsUnlocked; // 0x8
    char pad_9[0x7];
    FTransfigurationUnlockSource UnlockSource; // 0x10
    bool bHasTransformationOptions; // 0x60
    bool bHasColorOptions; // 0x61
    char pad_62[0x2];
    int32_t SortingIndex; // 0x64
    bool bIsPrefab; // 0x68
    char pad_69[0x7];
}; // Size: 0x70
#pragma pack(pop)
