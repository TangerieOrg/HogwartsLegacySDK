#pragma once
#include <cstdint>
#include "ESourceEffectFilterCircuit.hpp"
#include "ESourceEffectFilterType.hpp"
#include "FSourceEffectFilterAudioBusModulationSettings.hpp"
#pragma pack(push, 1)
struct FSourceEffectFilterSettings {
    ESourceEffectFilterCircuit FilterCircuit; // 0x0
    ESourceEffectFilterType FilterType; // 0x1
    char pad_2[0x2];
    float CutoffFrequency; // 0x4
    float FilterQ; // 0x8
    char pad_c[0x4];
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
}; // Size: 0x20
#pragma pack(pop)
