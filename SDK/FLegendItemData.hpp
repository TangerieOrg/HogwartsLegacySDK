#pragma once
#include <cstdint>
#include "EUMGInputAction.hpp"
#pragma pack(push, 1)
struct FLegendItemData {
    FString ButtonString; // 0x0
    EUMGInputAction CompletionButton; // 0x10
    char pad_11[0x7];
    FString TextString; // 0x18
    bool TextStringIsLocalized; // 0x28
    bool PressAndHold; // 0x29
    char pad_2a[0x2];
    float HoldDuration; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
