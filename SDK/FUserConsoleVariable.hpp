#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUserConsoleVariable {
    FString Variable; // 0x0
    FString Help; // 0x10
    int32_t Builds; // 0x20
    int32_t SpecialUsage; // 0x24
    FName SpecialUsageName; // 0x28
}; // Size: 0x30
#pragma pack(pop)
