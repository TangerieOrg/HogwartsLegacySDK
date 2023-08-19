#pragma once
#include <cstdint>
#include "FSubmixEffectDynamicsProcessorSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
class USoundSubmix;
class UAudioBus;
#pragma pack(push, 1)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x88];
    FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0
    static USubmixEffectDynamicsProcessorPreset* StaticClass();
    void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(USoundSubmix* Submix);
    void SetAudioBus(UAudioBus* AudioBus);
    void ResetKey();
}; // Size: 0x150
#pragma pack(pop)
