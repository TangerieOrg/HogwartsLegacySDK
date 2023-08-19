#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCollectionItem {
    FName ItemId; // 0x0
    FName ItemState; // 0x8
    int64_t UpdateTime; // 0x10
    char pad_18[0x10];
}; // Size: 0x28
#pragma pack(pop)
