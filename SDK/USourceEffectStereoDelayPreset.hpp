#pragma once
#include <cstdint>
#include "FSourceEffectStereoDelaySettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x4c];
    FSourceEffectStereoDelaySettings Settings; // 0xb4
    static USourceEffectStereoDelayPreset* StaticClass();
    void SetSettings(FSourceEffectStereoDelaySettings& InSettings);
}; // Size: 0xd8
#pragma pack(pop)
