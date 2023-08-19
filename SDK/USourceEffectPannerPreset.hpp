#pragma once
#include <cstdint>
#include "FSourceEffectPannerSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectPannerPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x30];
    FSourceEffectPannerSettings Settings; // 0x98
    static USourceEffectPannerPreset* StaticClass();
    void SetSettings(FSourceEffectPannerSettings& InSettings);
}; // Size: 0xa0
#pragma pack(pop)
