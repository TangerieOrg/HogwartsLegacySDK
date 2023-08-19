#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLevelSequenceObject {
    char pad_0[0x20];
    FString ComponentName; // 0x20
    char pad_30[0x8];
}; // Size: 0x38
#pragma pack(pop)
