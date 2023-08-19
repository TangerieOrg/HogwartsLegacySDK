#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    bool UseHeadMountedDisplayAudioDevice; // 0x30
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
