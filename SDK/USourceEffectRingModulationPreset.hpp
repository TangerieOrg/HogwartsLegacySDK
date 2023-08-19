#pragma once
#include <cstdint>
#include "FSourceEffectRingModulationSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x48];
    FSourceEffectRingModulationSettings Settings; // 0xb0
    static USourceEffectRingModulationPreset* StaticClass();
    void SetSettings(FSourceEffectRingModulationSettings& InSettings);
}; // Size: 0xd0
#pragma pack(pop)
