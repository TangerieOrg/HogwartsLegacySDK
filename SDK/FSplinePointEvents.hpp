#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSplinePointEvents {
    int32_t SplinePointIndex; // 0x0
    char pad_4[0x4];
    TArray<FString> Events; // 0x8
}; // Size: 0x18
#pragma pack(pop)
