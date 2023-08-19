#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsCustomBlendDomainConsoleEntry {
    FName domain; // 0x0
    FString ConsoleVariable; // 0x8
    float ExplicitCompare; // 0x18
    bool bInvertValue; // 0x1c
    bool bUseExplicitCompare; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
