#pragma once
#include <cstdint>
#include "FQuartzTimeSignature.hpp"
#pragma pack(push, 1)
struct FQuartzClockSettings {
    FQuartzTimeSignature TimeSignature; // 0x0
    bool bIgnoreLevelChange; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
