#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FConsoleVariableFloatValue {
    float float; // 0x0
    bool bValid; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
