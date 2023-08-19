#pragma once
#include <cstdint>
#include "FAkCommonInitializationSettings.hpp"
#pragma pack(push, 1)
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings {
    uint32_t SampleRate; // 0x60
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
