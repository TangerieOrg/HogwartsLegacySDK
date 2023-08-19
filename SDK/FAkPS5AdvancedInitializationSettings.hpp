#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    bool UseHardwareCodecLowLatencyMode; // 0x30
    bool bVorbisHwAcceleration; // 0x31
    char pad_32[0x2];
}; // Size: 0x34
#pragma pack(pop)
