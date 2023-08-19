#pragma once
#include <cstdint>
#include "FSourceEffectWaveShaperSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x30];
    FSourceEffectWaveShaperSettings Settings; // 0x98
    static USourceEffectWaveShaperPreset* StaticClass();
    void SetSettings(FSourceEffectWaveShaperSettings& InSettings);
}; // Size: 0xa0
#pragma pack(pop)
