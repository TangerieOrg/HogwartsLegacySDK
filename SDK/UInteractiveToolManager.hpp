#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInteractiveTool;
#pragma pack(push, 1)
class UInteractiveToolManager : public UObject {
public:
    char pad_28[0x8];
    UInteractiveTool* ActiveLeftTool; // 0x30
    UInteractiveTool* ActiveRightTool; // 0x38
    char pad_40[0xf8];
    static UInteractiveToolManager* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
