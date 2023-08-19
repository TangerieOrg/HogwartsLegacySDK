#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteInLevel : public UFXAutoTriggerPrerequisiteBase {
public:
    FLerpVolumesLevelName Level; // 0x28
    static UFXAutoTriggerPrerequisiteInLevel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
