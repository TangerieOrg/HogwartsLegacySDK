#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBlendParameter {
    FString DisplayName; // 0x0
    float Min; // 0x10
    float Max; // 0x14
    int32_t GridNum; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
