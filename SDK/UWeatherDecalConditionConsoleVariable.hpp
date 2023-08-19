#pragma once
#include <cstdint>
#include "UWeatherDecalSimpleCondition.hpp"
#pragma pack(push, 1)
class UWeatherDecalConditionConsoleVariable : public UWeatherDecalSimpleCondition {
public:
    FName ConsoleVariableName; // 0x28
    bool bCreateIfNotFound; // 0x30
    bool bEditorOnly; // 0x31
    char pad_32[0xe];
    static UWeatherDecalConditionConsoleVariable* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
