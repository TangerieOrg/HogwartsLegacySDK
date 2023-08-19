#pragma once
#include <cstdint>
#include "FMastermindMessage.hpp"
#pragma pack(push, 1)
struct FMastermindProgressUpdate : public FMastermindMessage {
    FString Message; // 0x8
}; // Size: 0x18
#pragma pack(pop)
