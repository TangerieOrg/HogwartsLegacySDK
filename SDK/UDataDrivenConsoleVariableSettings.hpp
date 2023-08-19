#pragma once
#include <cstdint>
#include "FDataDrivenConsoleVariable.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UDataDrivenConsoleVariableSettings : public UDeveloperSettings {
public:
    char pad_38[0x18];
    TArray<FDataDrivenConsoleVariable> CVarsArray; // 0x50
    char pad_60[0x10];
    static UDataDrivenConsoleVariableSettings* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
