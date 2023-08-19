#pragma once
#include <cstdint>
#include "EMediaPlayerOptionBooleanOverride.hpp"
#include "FMediaPlayerTrackOptions.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FMediaPlayerOptions {
    FMediaPlayerTrackOptions Tracks; // 0x0
    char pad_1c[0x4];
    FTimespan SeekTime; // 0x20
    EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
    EMediaPlayerOptionBooleanOverride Loop; // 0x29
    char pad_2a[0x6];
}; // Size: 0x30
#pragma pack(pop)
