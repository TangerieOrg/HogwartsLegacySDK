#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBatchedLine {
    FVector Start; // 0x0
    FVector End; // 0xc
    FLinearColor Color; // 0x18
    float Thickness; // 0x28
    float RemainingLifeTime; // 0x2c
    uint8_t DepthPriority; // 0x30
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
