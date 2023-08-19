#pragma once
#include <cstdint>
#include "FUserConsoleVariable.hpp"
#pragma pack(push, 1)
struct FUserConsoleVariableBool : public FUserConsoleVariable {
    bool bDefaultValue; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
