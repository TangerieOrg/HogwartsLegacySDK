#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    uint16_t MaximumNumberOfXMAVoices; // 0x30
    bool UseHardwareCodecLowLatencyMode; // 0x32
    char pad_33[0x1];
}; // Size: 0x34
#pragma pack(pop)
