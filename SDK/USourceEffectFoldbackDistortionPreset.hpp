#pragma once
#include <cstdint>
#include "FSourceEffectFoldbackDistortionSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x34];
    FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
    static USourceEffectFoldbackDistortionPreset* StaticClass();
    void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);
}; // Size: 0xa8
#pragma pack(pop)
