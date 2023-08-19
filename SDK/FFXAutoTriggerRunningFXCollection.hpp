#pragma once
#include <cstdint>
#include "FFXAutoTriggerRunningFXGroup.hpp"
#include "FFXAutoTriggerRunningFXList.hpp"
class UFXAutoTriggerGlobalDefinitionAsset;
#pragma pack(push, 1)
struct FFXAutoTriggerRunningFXCollection : public FFXAutoTriggerRunningFXList {
    UFXAutoTriggerGlobalDefinitionAsset* Globals; // 0x10
    TArray<FFXAutoTriggerRunningFXGroup> Groups; // 0x18
}; // Size: 0x28
#pragma pack(pop)
