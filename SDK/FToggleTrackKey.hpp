#pragma once
#include <cstdint>
#include "ETrackToggleAction.hpp"
#pragma pack(push, 1)
struct FToggleTrackKey {
    float Time; // 0x0
    ETrackToggleAction ToggleAction; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
