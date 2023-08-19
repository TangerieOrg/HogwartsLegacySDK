#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettingsWithMultiCoreRendering.hpp"
#pragma pack(push, 1)
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    uint32_t ACPBatchBufferSize; // 0x30
    bool UseHardwareCodecLowLatencyMode; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
