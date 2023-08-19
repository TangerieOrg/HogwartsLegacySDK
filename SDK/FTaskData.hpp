#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTaskData {
    FString DisplayName; // 0x0
    bool IsComplete; // 0x10
    char pad_11[0x3];
    int32_t RuntimeValue1; // 0x14
    int32_t RuntimeValue2; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
