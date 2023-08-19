#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    bool UseHeadMountedDisplayAudioDevice; // 0x30
    char pad_31[0x3];
    uint32_t MaxSystemAudioObjects; // 0x34
}; // Size: 0x38
#pragma pack(pop)
