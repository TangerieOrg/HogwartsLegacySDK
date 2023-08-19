#pragma once
#include <cstdint>
#include "FMultiFX2Handle.hpp"
#pragma pack(push, 1)
struct FFXAutoTriggerFXTrackerEntry {
    FMultiFX2Handle FXHandle; // 0x0
    TArray<FName> DisableParameterUpdates; // 0x8
    int32_t SleepFrames; // 0x18
    int32_t Age; // 0x1c
    uint32_t TouchedFrame; // 0x20
    bool bDisableActorUpdates; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
