#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolInLevel : public UFXAutoTriggerBool {
public:
    FLerpVolumesLevelName Level; // 0x28
    static UFXAutoTriggerBoolInLevel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
