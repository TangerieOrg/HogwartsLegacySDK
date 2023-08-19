#pragma once
#include <cstdint>
#include "FSourceEffectSimpleDelaySettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x40];
    FSourceEffectSimpleDelaySettings Settings; // 0xa8
    static USourceEffectSimpleDelayPreset* StaticClass();
    void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);
}; // Size: 0xc0
#pragma pack(pop)
