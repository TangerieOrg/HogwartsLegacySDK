#pragma once
#include <cstdint>
#include "FSourceEffectEQSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectEQPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x38];
    FSourceEffectEQSettings Settings; // 0xa0
    static USourceEffectEQPreset* StaticClass();
    void SetSettings(FSourceEffectEQSettings& InSettings);
}; // Size: 0xb0
#pragma pack(pop)
