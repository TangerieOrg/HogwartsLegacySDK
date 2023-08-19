#pragma once
#include <cstdint>
#include "FUserConsoleVariable.hpp"
#pragma pack(push, 1)
struct FUserConsoleVariableInt : public FUserConsoleVariable {
    int32_t DefaultValue; // 0x30
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
