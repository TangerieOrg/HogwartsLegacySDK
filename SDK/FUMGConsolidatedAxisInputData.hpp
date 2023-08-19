#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FUMGConsolidatedAxisInputData {
    bool bAnyAxisInputSinceLastTick; // 0x0
    char pad_1[0x3];
    FVector2D LeftThumbstickAxisValues; // 0x4
    FVector2D RightThumbstickAxisValues; // 0xc
    float LeftTriggerAxisValue; // 0x14
    float RightTriggerAxisValue; // 0x18
    float MouseWheelAxisValue; // 0x1c
    FVector2D MouseAxisValues; // 0x20
    FVector2D TouchpadAxisValues; // 0x28
}; // Size: 0x30
#pragma pack(pop)
