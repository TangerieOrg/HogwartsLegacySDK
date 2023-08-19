#pragma once
#include <cstdint>
#include "ULightSettingsModThreshold.hpp"
#pragma pack(push, 1)
class ULightSettingsModThresholdConsoleVariableBase : public ULightSettingsModThreshold {
public:
    FName ConsoleVariableName; // 0x28
    float ConsoleVariableDefaultValue; // 0x30
    bool bCreateConsoleVariableIfMissing; // 0x34
    char pad_35[0x3];
    static ULightSettingsModThresholdConsoleVariableBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
