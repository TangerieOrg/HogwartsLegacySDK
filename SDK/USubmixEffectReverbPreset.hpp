#pragma once
#include <cstdint>
#include "FSubmixEffectReverbSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
class UReverbEffect;
#pragma pack(push, 1)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x68];
    FSubmixEffectReverbSettings Settings; // 0xd0
    static USubmixEffectReverbPreset* StaticClass();
    void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
    void SetSettings(FSubmixEffectReverbSettings& InSettings);
}; // Size: 0x110
#pragma pack(pop)
