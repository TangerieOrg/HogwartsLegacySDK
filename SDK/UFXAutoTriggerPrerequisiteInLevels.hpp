#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteInLevels : public UFXAutoTriggerPrerequisiteBase {
public:
    TArray<FLerpVolumesLevelName> Levels; // 0x28
    static UFXAutoTriggerPrerequisiteInLevels* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
