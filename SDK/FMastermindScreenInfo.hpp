#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMastermindScreenInfo {
    FString ScreenName; // 0x0
    TArray<FString> ExtraScreenStrings; // 0x10
    bool bIsPlayingIntro; // 0x20
    bool bIsPlayingOutro; // 0x21
    char pad_22[0x6];
}; // Size: 0x28
#pragma pack(pop)
