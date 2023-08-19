#pragma once
#include <cstdint>
#include "FMastermindMessage.hpp"
#include "FMastermindTestResult.hpp"
#pragma pack(push, 1)
struct FMastermindTestResultMessage : public FMastermindMessage {
    TArray<FMastermindTestResult> TestResults; // 0x8
}; // Size: 0x18
#pragma pack(pop)
