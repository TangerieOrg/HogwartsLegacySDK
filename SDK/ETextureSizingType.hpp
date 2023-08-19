#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureSizingType : uint8_t {
    TextureSizingType_UseSingleTextureSize = 0,
    TextureSizingType_UseAutomaticBiasedSizes = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing = 3,
    TextureSizingType_MAX = 4,
};
#pragma pack(pop)
