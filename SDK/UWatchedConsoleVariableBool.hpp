#pragma once
#include <cstdint>
#include "UWatchedConsoleVariable.hpp"
#pragma pack(push, 1)
class UWatchedConsoleVariableBool : public UWatchedConsoleVariable {
public:
    char pad_38[0x10];
    bool bValue; // 0x48
    char pad_49[0x7];
    static UWatchedConsoleVariableBool* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
