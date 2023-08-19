#pragma once
#include <cstdint>
class UTextBlock;
#pragma pack(push, 1)
struct FMapDebugPaneItem {
    UTextBlock* TextBlock; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
