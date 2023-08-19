#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSocialCapitalMovement {
    bool IsValid; // 0x0
    char pad_1[0x3];
    int32_t Magnitude; // 0x4
    FString Reason; // 0x8
}; // Size: 0x18
#pragma pack(pop)
