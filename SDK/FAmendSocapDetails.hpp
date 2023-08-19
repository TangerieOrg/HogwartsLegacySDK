#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAmendSocapDetails {
    FName socialActionName; // 0x0
    int32_t currentSocap; // 0x8
    FName currentSocapStatus; // 0xc
    float currentSocapStatusPercent; // 0x14
    int32_t deltaSocap; // 0x18
    FName socapReason; // 0x1c
    int32_t Magnitude; // 0x24
}; // Size: 0x28
#pragma pack(pop)
