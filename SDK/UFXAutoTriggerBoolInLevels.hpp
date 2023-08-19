#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolInLevels : public UFXAutoTriggerBool {
public:
    TArray<FLerpVolumesLevelName> Levels; // 0x28
    static UFXAutoTriggerBoolInLevels* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
