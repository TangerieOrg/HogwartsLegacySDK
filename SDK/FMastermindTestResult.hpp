#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FMastermindTestResult {
    bool bIsSuccess; // 0x0
    char pad_1[0x7];
    FString TestName; // 0x8
    FDateTime Timestamp; // 0x18
}; // Size: 0x20
#pragma pack(pop)
