#pragma once
#include <cstdint>
#include "ESubmixFilterAlgorithm.hpp"
#include "ESubmixFilterType.hpp"
#include "FSubmixEffectFilterSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
#pragma pack(push, 1)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x34];
    FSubmixEffectFilterSettings Settings; // 0x9c
    static USubmixEffectFilterPreset* StaticClass();
    void SetSettings(FSubmixEffectFilterSettings& InSettings);
    void SetFilterType(ESubmixFilterType InType);
    void SetFilterQMod(float InQ);
    void SetFilterQ(float InQ);
    void SetFilterCutoffFrequencyMod(float InFrequency);
    void SetFilterCutoffFrequency(float InFrequency);
    void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
}; // Size: 0xa8
#pragma pack(pop)
