#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    uint16_t MaximumNumberOfXMAVoices; // 0x30
    bool UseHardwareCodecLowLatencyMode; // 0x32
    char pad_33[0x1];
    uint16_t MaximumNumberOfOpusVoices; // 0x34
    char pad_36[0x2];
}; // Size: 0x38
#pragma pack(pop)
