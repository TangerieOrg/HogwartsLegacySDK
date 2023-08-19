#pragma once
#include <cstdint>
#include "FSourceEffectPhaserSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x38];
    FSourceEffectPhaserSettings Settings; // 0xa0
    static USourceEffectPhaserPreset* StaticClass();
    void SetSettings(FSourceEffectPhaserSettings& InSettings);
}; // Size: 0xb0
#pragma pack(pop)
