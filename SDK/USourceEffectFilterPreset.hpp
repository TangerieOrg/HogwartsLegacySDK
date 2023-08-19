#pragma once
#include <cstdint>
#include "FSourceEffectFilterSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectFilterPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x48];
    FSourceEffectFilterSettings Settings; // 0xb0
    static USourceEffectFilterPreset* StaticClass();
    void SetSettings(FSourceEffectFilterSettings& InSettings);
}; // Size: 0xd0
#pragma pack(pop)
