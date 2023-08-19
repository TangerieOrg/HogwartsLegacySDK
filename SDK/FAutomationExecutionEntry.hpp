#pragma once
#include <cstdint>
#include "FAutomationEvent.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FAutomationExecutionEntry {
    FAutomationEvent Event; // 0x0
    FString Filename; // 0x38
    int32_t LineNumber; // 0x48
    char pad_4c[0x4];
    FDateTime Timestamp; // 0x50
}; // Size: 0x58
#pragma pack(pop)
