#pragma once
#include <cstdint>
#include "FFontData.hpp"
#pragma pack(push, 1)
struct FTypefaceEntry {
    FName Name; // 0x0
    FFontData Font; // 0x8
}; // Size: 0x28
#pragma pack(pop)
