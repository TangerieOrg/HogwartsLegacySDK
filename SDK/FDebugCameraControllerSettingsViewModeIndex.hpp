#pragma once
#include <cstdint>
#include "EViewModeIndex.hpp"
#pragma pack(push, 1)
struct FDebugCameraControllerSettingsViewModeIndex {
    char pad_0[0x8];
    EViewModeIndex ViewModeIndex; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
