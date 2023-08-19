#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FHoudiniEvent {
    FVector Position; // 0x0
    FVector Normal; // 0xc
    float Impulse; // 0x18
    FVector Velocity; // 0x1c
    int32_t POINTID; // 0x28
    float Time; // 0x2c
    float LIFE; // 0x30
    FLinearColor Color; // 0x34
    int32_t Type; // 0x44
}; // Size: 0x48
#pragma pack(pop)
