#pragma once
#include <cstdint>
#include "FSourceEffectMidSideSpreaderSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x30];
    FSourceEffectMidSideSpreaderSettings Settings; // 0x98
    static USourceEffectMidSideSpreaderPreset* StaticClass();
    void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);
}; // Size: 0xa0
#pragma pack(pop)
