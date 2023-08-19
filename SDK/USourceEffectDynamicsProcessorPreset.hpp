#pragma once
#include <cstdint>
#include "FSourceEffectDynamicsProcessorSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
#pragma pack(push, 1)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x50];
    FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
    static USourceEffectDynamicsProcessorPreset* StaticClass();
    void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);
}; // Size: 0xe0
#pragma pack(pop)
