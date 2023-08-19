#pragma once
#include <cstdint>
#include "FLedgeAssistTaskEntry.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UablLedgeAssistTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<FLedgeAssistTaskEntry> InProgressTurn; // 0x28
    FVector StartingRootPos; // 0x38
    FVector DeltaRootPos; // 0x44
    FVector DeltaAdded; // 0x50
    FRotator DeltaRotation; // 0x5c
    FRotator RotationAdded; // 0x68
    float ElapsedTime; // 0x74
    float AblitityLength; // 0x78
    FRotator StartingRotation; // 0x7c
    static UablLedgeAssistTaskScratchPad* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
