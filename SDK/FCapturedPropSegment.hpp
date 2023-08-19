#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCapturedPropSegment {
    FString PropertyName; // 0x0
    int32_t PropertyIndex; // 0x10
    char pad_14[0x4];
    FString ComponentName; // 0x18
}; // Size: 0x28
#pragma pack(pop)
