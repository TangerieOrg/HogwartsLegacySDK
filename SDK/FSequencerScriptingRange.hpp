#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#pragma pack(push, 1)
struct FSequencerScriptingRange {
    uint8_t bHasStart : 1; // 0x0
    uint8_t bHasEnd : 1; // 0x0
    uint8_t pad_bitfield_0_2 : 6;
    char pad_1[0x3];
    int32_t InclusiveStart; // 0x4
    int32_t ExclusiveEnd; // 0x8
    FFrameRate InternalRate; // 0xc
}; // Size: 0x14
#pragma pack(pop)
