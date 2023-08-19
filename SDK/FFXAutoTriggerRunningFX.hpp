#pragma once
#include <cstdint>
#include "FFXAutoTriggerFXTracker.hpp"
class UFXAutoTriggerDefinitionAsset;
#pragma pack(push, 1)
struct FFXAutoTriggerRunningFX {
    UFXAutoTriggerDefinitionAsset* Asset; // 0x0
    char pad_8[0x8];
    FFXAutoTriggerFXTracker Tracker; // 0x10
    bool bMeetsPrerequisite; // 0x60
    char pad_61[0x7];
}; // Size: 0x68
#pragma pack(pop)
