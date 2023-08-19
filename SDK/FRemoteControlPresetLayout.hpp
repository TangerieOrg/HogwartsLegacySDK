#pragma once
#include <cstdint>
#include "FRemoteControlPresetGroup.hpp"
#pragma pack(push, 1)
struct FRemoteControlPresetLayout {
    TArray<FRemoteControlPresetGroup> Groups; // 0x0
    char pad_10[0xb0];
}; // Size: 0xc0
#pragma pack(pop)
