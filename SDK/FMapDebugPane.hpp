#pragma once
#include <cstdint>
#include "FMapDebugPaneItem.hpp"
class UCanvasPanel;
#pragma pack(push, 1)
struct FMapDebugPane {
    char pad_0[0x58];
    UCanvasPanel* CanvasPanel; // 0x58
    TArray<FMapDebugPaneItem> TextBlocks; // 0x60
}; // Size: 0x70
#pragma pack(pop)
