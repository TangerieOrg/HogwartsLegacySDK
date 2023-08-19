#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FAstronomyMiniGameSolveState {
    float FOV; // 0x0
    FRotator Rotator; // 0x4
}; // Size: 0x10
#pragma pack(pop)
