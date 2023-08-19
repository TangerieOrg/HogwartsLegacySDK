#pragma once
#include <cstdint>
#include "FSubmixEffectDelaySettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x34];
    FSubmixEffectDelaySettings Settings; // 0x9c
    FSubmixEffectDelaySettings DynamicSettings; // 0xa8
    char pad_b4[0x4];
    static USubmixEffectDelayPreset* StaticClass();
    void SetSettings(FSubmixEffectDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void SetDelay(float Length);
    float GetMaxDelayInMilliseconds();
}; // Size: 0xb8
#pragma pack(pop)
