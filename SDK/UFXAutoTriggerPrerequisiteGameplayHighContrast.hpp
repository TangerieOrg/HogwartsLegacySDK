#pragma once
#include <cstdint>
#include "UFXAutoTriggerPrerequisiteBase.hpp"
class UFXAutoTriggerHighContrastGameplayConditions;
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteGameplayHighContrast : public UFXAutoTriggerPrerequisiteBase {
public:
    UFXAutoTriggerHighContrastGameplayConditions* Conditions; // 0x28
    static UFXAutoTriggerPrerequisiteGameplayHighContrast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
