#pragma once
#include <cstdint>
#include "ESourceEffectFilterParam.hpp"
class UAudioBus;
#pragma pack(push, 1)
struct FSourceEffectFilterAudioBusModulationSettings {
    UAudioBus* AudioBus; // 0x0
    int32_t EnvelopeFollowerAttackTimeMsec; // 0x8
    int32_t EnvelopeFollowerReleaseTimeMsec; // 0xc
    float EnvelopeGainMultiplier; // 0x10
    ESourceEffectFilterParam FilterParam; // 0x14
    char pad_15[0x3];
    float MinFrequencyModulation; // 0x18
    float MaxFrequencyModulation; // 0x1c
    float MinResonanceModulation; // 0x20
    float MaxResonanceModulation; // 0x24
}; // Size: 0x28
#pragma pack(pop)
