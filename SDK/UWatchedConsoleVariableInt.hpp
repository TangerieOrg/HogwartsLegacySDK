#pragma once
#include <cstdint>
#include "UWatchedConsoleVariable.hpp"
#pragma pack(push, 1)
class UWatchedConsoleVariableInt : public UWatchedConsoleVariable {
public:
    char pad_38[0x10];
    int32_t Value; // 0x48
    char pad_4c[0x4];
    static UWatchedConsoleVariableInt* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
