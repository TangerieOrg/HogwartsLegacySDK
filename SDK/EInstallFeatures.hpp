#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInstallFeatures : uint8_t {
    FullGame = 0,
    SonyContent = 1,
    HighDefTextures = 2,
    LanguagePack_EN = 3,
    LanguagePack_DE = 4,
    LanguagePack_ES = 5,
    LanguagePack_ESMX = 6,
    LanguagePack_FR = 7,
    LanguagePack_IT = 8,
    LanguagePack_JA = 9,
    LanguagePack_PT = 10,
    Count = 11,
    EInstallFeatures_MAX = 12,
};
#pragma pack(pop)
