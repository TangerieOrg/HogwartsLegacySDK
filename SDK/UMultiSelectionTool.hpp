#pragma once
#include <cstdint>
#include "UInteractiveTool.hpp"
#pragma pack(push, 1)
class UMultiSelectionTool : public UInteractiveTool {
public:
    char pad_80[0x10];
    static UMultiSelectionTool* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
