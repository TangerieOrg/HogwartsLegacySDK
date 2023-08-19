#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#include "FFrameTime.hpp"
#pragma pack(push, 1)
struct FQualifiedFrameTime {
    FFrameTime Time; // 0x0
    FFrameRate Rate; // 0x8
}; // Size: 0x10
#pragma pack(pop)
