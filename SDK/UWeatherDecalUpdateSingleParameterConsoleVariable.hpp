#pragma once
#include <cstdint>
#include "UWeatherDecalUpdateSingleParameterFlex.hpp"
#pragma pack(push, 1)
class UWeatherDecalUpdateSingleParameterConsoleVariable : public UWeatherDecalUpdateSingleParameterFlex {
public:
    FName ConsoleVariableName; // 0x48
    float MinValue; // 0x50
    float MaxValue; // 0x54
    float DefaultValue; // 0x58
    bool bCreateIfNotFound; // 0x5c
    bool bEditorOnly; // 0x5d
    bool bUseMin; // 0x5e
    bool bUseMax; // 0x5f
    char pad_60[0x8];
    static UWeatherDecalUpdateSingleParameterConsoleVariable* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
