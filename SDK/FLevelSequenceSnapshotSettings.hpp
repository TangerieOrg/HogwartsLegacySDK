#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#pragma pack(push, 1)
struct FLevelSequenceSnapshotSettings {
    uint8_t ZeroPadAmount; // 0x0
    char pad_1[0x3];
    FFrameRate FrameRate; // 0x4
}; // Size: 0xc
#pragma pack(pop)
