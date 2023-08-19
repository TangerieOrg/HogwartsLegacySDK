#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStringCurveKey {
    float Time; // 0x0
    char pad_4[0x4];
    FString Value; // 0x8
}; // Size: 0x18
#pragma pack(pop)
