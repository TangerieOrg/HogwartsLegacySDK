#pragma once
#include <cstdint>
#include "FTypefaceEntry.hpp"
#pragma pack(push, 1)
struct FTypeface {
    TArray<FTypefaceEntry> Fonts; // 0x0
}; // Size: 0x10
#pragma pack(pop)
