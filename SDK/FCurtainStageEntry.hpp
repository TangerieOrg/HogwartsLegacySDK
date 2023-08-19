#pragma once
#include <cstdint>
#include "FCurtainStageOptions.hpp"
#pragma pack(push, 1)
struct FCurtainStageEntry {
    double EnableAtTime; // 0x0
    FCurtainStageOptions StageOptions; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
