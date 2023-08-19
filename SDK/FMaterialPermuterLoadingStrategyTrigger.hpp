#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterLoadingStrategyTrigger {
    FName Trigger; // 0x0
    EMaterialPermuterLoadingPriority TriggerPriority; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
