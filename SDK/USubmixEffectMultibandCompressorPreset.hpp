#pragma once
#include <cstdint>
#include "FSubmixEffectMultibandCompressorSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x48];
    FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
    static USubmixEffectMultibandCompressorPreset* StaticClass();
    void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);
}; // Size: 0xd0
#pragma pack(pop)
