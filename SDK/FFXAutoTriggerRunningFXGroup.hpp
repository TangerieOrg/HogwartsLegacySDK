#pragma once
#include <cstdint>
#include "FFXAutoTriggerRunningFXList.hpp"
class UFXAutoTriggerGroupDefinitionAsset;
#pragma pack(push, 1)
struct FFXAutoTriggerRunningFXGroup : public FFXAutoTriggerRunningFXList {
    UFXAutoTriggerGroupDefinitionAsset* Group; // 0x10
}; // Size: 0x18
#pragma pack(pop)
