#pragma once
#include <cstdint>
#include "EAutomationEventType.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FAutomationEvent {
    EAutomationEventType Type; // 0x0
    char pad_1[0x7];
    FString Message; // 0x8
    FString Context; // 0x18
    FGuid Artifact; // 0x28
}; // Size: 0x38
#pragma pack(pop)
