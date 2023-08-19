#pragma once
#include <cstdint>
class UEphemerisBasis;
#pragma pack(push, 1)
struct FEphemerisBasisPerLevel {
    FName Level; // 0x0
    FString LevelPartialMatch; // 0x8
    UEphemerisBasis* Basis; // 0x18
    bool bUseSubString; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
