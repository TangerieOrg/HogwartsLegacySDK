#pragma once
#include <cstdint>
#include "FSubmixEffectSubmixEQSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x38];
    FSubmixEffectSubmixEQSettings Settings; // 0xa0
    static USubmixEffectSubmixEQPreset* StaticClass();
    void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);
}; // Size: 0xb0
#pragma pack(pop)
