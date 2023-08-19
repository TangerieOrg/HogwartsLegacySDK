#pragma once
#include <cstdint>
#include "FDataDrivenCVarType.hpp"
#pragma pack(push, 1)
struct FDataDrivenConsoleVariable {
    FDataDrivenCVarType Type; // 0x0
    char pad_1[0x7];
    FString Name; // 0x8
    FString ToolTip; // 0x18
    float DefaultValueFloat; // 0x28
    int32_t DefaultValueInt; // 0x2c
    bool DefaultValueBool; // 0x30
    char pad_31[0x1f];
}; // Size: 0x50
#pragma pack(pop)
