#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "FPostProcessSettingsObjects.hpp"
#pragma pack(push, 1)
struct FPostProcessSettingsWeak {
    FPostProcessSettings PostProcessSettings; // 0x0
    FPostProcessSettingsObjects PostProcessSettingsObjects; // 0x5f0
    char pad_628[0x8];
}; // Size: 0x630
#pragma pack(pop)
