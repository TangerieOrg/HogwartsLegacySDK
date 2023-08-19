#pragma once
#include <cstdint>
#include "ECreditEntryType.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FCreditEntry : public FTableRowBase {
    ECreditEntryType EntryType; // 0x8
    char pad_9[0x3];
    float DurationFactor; // 0xc
    FString Text; // 0x10
    bool Translated; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
