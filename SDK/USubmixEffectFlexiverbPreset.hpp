#pragma once
#include <cstdint>
#include "FSubmixEffectFlexiverbSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x38];
    FSubmixEffectFlexiverbSettings Settings; // 0xa0
    static USubmixEffectFlexiverbPreset* StaticClass();
    void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);
}; // Size: 0xb0
#pragma pack(pop)
