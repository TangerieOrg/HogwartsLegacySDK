#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FScreenMessageString {
    uint64_t Key; // 0x0
    FString ScreenMessage; // 0x8
    FColor DisplayColor; // 0x18
    float TimeToDisplay; // 0x1c
    float CurrentTimeDisplayed; // 0x20
    FVector2D TextScale; // 0x24
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
