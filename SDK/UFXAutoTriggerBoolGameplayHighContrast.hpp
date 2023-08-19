#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
class UFXAutoTriggerHighContrastGameplayConditions;
#pragma pack(push, 1)
class UFXAutoTriggerBoolGameplayHighContrast : public UFXAutoTriggerBool {
public:
    UFXAutoTriggerHighContrastGameplayConditions* Conditions; // 0x28
    static UFXAutoTriggerBoolGameplayHighContrast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
