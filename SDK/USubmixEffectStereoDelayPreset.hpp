#pragma once
#include <cstdint>
#include "FSubmixEffectStereoDelaySettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x4c];
    FSubmixEffectStereoDelaySettings Settings; // 0xb4
    static USubmixEffectStereoDelayPreset* StaticClass();
    void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);
}; // Size: 0xd8
#pragma pack(pop)
