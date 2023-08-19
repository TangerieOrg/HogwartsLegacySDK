#pragma once
#include <cstdint>
#include "FFrameNumber.hpp"
#pragma pack(push, 1)
struct FFrameTime {
    FFrameNumber FrameNumber; // 0x0
    float SubFrame; // 0x4
}; // Size: 0x8
#pragma pack(pop)
