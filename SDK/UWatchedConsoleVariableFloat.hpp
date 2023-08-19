#pragma once
#include <cstdint>
#include "UWatchedConsoleVariable.hpp"
#pragma pack(push, 1)
class UWatchedConsoleVariableFloat : public UWatchedConsoleVariable {
public:
    char pad_38[0x10];
    float Value; // 0x48
    char pad_4c[0x4];
    static UWatchedConsoleVariableFloat* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
