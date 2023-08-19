#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FItemFilter {
    bool bMatchesWholeWord; // 0x0
    char pad_1[0x7];
    FString Filter; // 0x8
}; // Size: 0x18
#pragma pack(pop)
