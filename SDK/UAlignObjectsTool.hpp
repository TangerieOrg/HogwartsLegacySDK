#pragma once
#include <cstdint>
#include "UMultiSelectionTool.hpp"
class UAlignObjectsToolProperties;
#pragma pack(push, 1)
class UAlignObjectsTool : public UMultiSelectionTool {
public:
    char pad_90[0x8];
    UAlignObjectsToolProperties* AlignProps; // 0x98
    char pad_a0[0xa0];
    static UAlignObjectsTool* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
