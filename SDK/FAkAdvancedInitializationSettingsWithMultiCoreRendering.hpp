#pragma once
#include <cstdint>
#include "FAkAdvancedInitializationSettings.hpp"
#pragma pack(push, 1)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings {
    bool EnableMultiCoreRendering; // 0x2c
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
