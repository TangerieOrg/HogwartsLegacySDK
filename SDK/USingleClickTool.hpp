#pragma once
#include <cstdint>
#include "UInteractiveTool.hpp"
#pragma pack(push, 1)
class USingleClickTool : public UInteractiveTool {
public:
    char pad_80[0x8];
    static USingleClickTool* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
