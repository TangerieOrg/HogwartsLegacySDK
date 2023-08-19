#pragma once
#include <cstdint>
#include "FConsoleVariableFlexValue.hpp"
#pragma pack(push, 1)
struct FConsoleVariableLienEntry {
    FString Variable; // 0x0
    FConsoleVariableFlexValue Value; // 0x10
    float Priority; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
