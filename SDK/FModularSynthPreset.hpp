#pragma once
#include <cstdint>
#include "ESynth1OscType.hpp"
#include "ESynthFilterAlgorithm.hpp"
#include "ESynthFilterType.hpp"
#include "ESynthLFOMode.hpp"
#include "ESynthLFOPatchType.hpp"
#include "ESynthLFOType.hpp"
#include "ESynthModEnvBiasPatch.hpp"
#include "ESynthModEnvPatch.hpp"
#include "ESynthStereoDelayMode.hpp"
#include "FEpicSynth1Patch.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FModularSynthPreset : public FTableRowBase {
    uint8_t bEnablePolyphony : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
    ESynth1OscType Osc1Type; // 0xc
    char pad_d[0x3];
    float Osc1Gain; // 0x10
    float Osc1Octave; // 0x14
    float Osc1Semitones; // 0x18
    float Osc1Cents; // 0x1c
    float Osc1PulseWidth; // 0x20
    ESynth1OscType Osc2Type; // 0x24
    char pad_25[0x3];
    float Osc2Gain; // 0x28
    float Osc2Octave; // 0x2c
    float Osc2Semitones; // 0x30
    float Osc2Cents; // 0x34
    float Osc2PulseWidth; // 0x38
    float Portamento; // 0x3c
    uint8_t bEnableUnison : 1; // 0x40
    uint8_t bEnableOscillatorSync : 1; // 0x40
    uint8_t pad_bitfield_40_2 : 6;
    char pad_41[0x3];
    float Spread; // 0x44
    float Pan; // 0x48
    float LFO1Frequency; // 0x4c
    float LFO1Gain; // 0x50
    ESynthLFOType LFO1Type; // 0x54
    ESynthLFOMode LFO1Mode; // 0x55
    ESynthLFOPatchType LFO1PatchType; // 0x56
    char pad_57[0x1];
    float LFO2Frequency; // 0x58
    float LFO2Gain; // 0x5c
    ESynthLFOType LFO2Type; // 0x60
    ESynthLFOMode LFO2Mode; // 0x61
    ESynthLFOPatchType LFO2PatchType; // 0x62
    char pad_63[0x1];
    float GainDb; // 0x64
    float AttackTime; // 0x68
    float DecayTime; // 0x6c
    float SustainGain; // 0x70
    float ReleaseTime; // 0x74
    ESynthModEnvPatch ModEnvPatchType; // 0x78
    ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79
    char pad_7a[0x2];
    uint8_t bInvertModulationEnvelope : 1; // 0x7c
    uint8_t bInvertModulationEnvelopeBias : 1; // 0x7c
    uint8_t pad_bitfield_7c_2 : 6;
    char pad_7d[0x3];
    float ModulationEnvelopeDepth; // 0x80
    float ModulationEnvelopeAttackTime; // 0x84
    float ModulationEnvelopeDecayTime; // 0x88
    float ModulationEnvelopeSustainGain; // 0x8c
    float ModulationEnvelopeReleaseTime; // 0x90
    uint8_t bLegato : 1; // 0x94
    uint8_t bRetrigger : 1; // 0x94
    uint8_t pad_bitfield_94_2 : 6;
    char pad_95[0x3];
    float FilterFrequency; // 0x98
    float FilterQ; // 0x9c
    ESynthFilterType FilterType; // 0xa0
    ESynthFilterAlgorithm FilterAlgorithm; // 0xa1
    char pad_a2[0x2];
    uint8_t bStereoDelayEnabled : 1; // 0xa4
    uint8_t pad_bitfield_a4_1 : 7;
    char pad_a5[0x3];
    ESynthStereoDelayMode StereoDelayMode; // 0xa8
    char pad_a9[0x3];
    float StereoDelayTime; // 0xac
    float StereoDelayFeedback; // 0xb0
    float StereoDelayWetlevel; // 0xb4
    float StereoDelayRatio; // 0xb8
    uint8_t bChorusEnabled : 1; // 0xbc
    uint8_t pad_bitfield_bc_1 : 7;
    char pad_bd[0x3];
    float ChorusDepth; // 0xc0
    float ChorusFeedback; // 0xc4
    float ChorusFrequency; // 0xc8
    char pad_cc[0x4];
    TArray<FEpicSynth1Patch> Patches; // 0xd0
}; // Size: 0xe0
#pragma pack(pop)
