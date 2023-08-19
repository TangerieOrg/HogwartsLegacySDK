#pragma once
#include <cstdint>
#include "FInputActionHoldInfo.hpp"
#pragma pack(push, 1)
struct FMastermindPopupInfo {
    bool bIsPlayingIntro; // 0x0
    bool bIsPlayingOutro; // 0x1
    char pad_2[0x6];
    TArray<FInputActionHoldInfo> CompletionActions; // 0x8
    bool bIsWaitPopup; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
