#pragma once
#include <cstdint>
#include "CurveInterpolationType.hpp"
#include "ESynthLFOType.hpp"
#include "USynthComponent.hpp"
class UMonoWaveTableSynthPreset;
#pragma pack(push, 1)
class USynthComponentMonoWaveTable : public USynthComponent {
public:
    char pad_6e0[0x20];
    UMonoWaveTableSynthPreset* CurrentPreset; // 0x700
    char pad_708[0x718];
    static USynthComponentMonoWaveTable* StaticClass();
    void SetWaveTablePosition(float InPosition);
    void SetSustainPedalState(bool InSustainPedalState);
    void SetPosLfoType(ESynthLFOType InLfoType);
    void SetPosLfoFrequency(float InLfoFrequency);
    void SetPosLfoDepth(float InLfoDepth);
    void SetPositionEnvelopeSustainGain(float InSustainGain);
    void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetPositionEnvelopeInvert(bool bInInvert);
    void SetPositionEnvelopeDepth(float InDepth);
    void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
    void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
    void SetPositionEnvelopeBiasDepth(float InDepth);
    void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
    void SetLowPassFilterResonance(float InNewQ);
    void SetFrequencyWithMidiNote(float InMidiNote);
    void SetFrequencyPitchBend(float FrequencyOffsetCents);
    void SetFrequency(float FrequencyHz);
    void SetFilterEnvelopeSustainGain(float InSustainGain);
    void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
    void SetFilterEnvelopeInvert(bool bInInvert);
    void SetFilterEnvelopeDepth(float InDepth);
    void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
    void SetFilterEnvelopeBiasDepth(float InDepth);
    void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
    bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);
    bool SetCurveTangent(int32_t TableIndex, float InNewTangent);
    bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);
    void SetAmpEnvelopeSustainGain(float InSustainGain);
    void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
    void SetAmpEnvelopeInvert(bool bInInvert);
    void SetAmpEnvelopeDepth(float InDepth);
    void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
    void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
    void SetAmpEnvelopeBiasDepth(float InDepth);
    void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
    void RefreshWaveTable(int32_t Index);
    void RefreshAllWaveTables();
    void NoteOn(float InMidiNote, float InVelocity);
    void NoteOff(float InMidiNote);
    int32_t GetNumTableEntries();
    int32_t GetMaxTableIndex();
    TArray<float> GetKeyFrameValuesForTable(float TableIndex);
    float GetCurveTangent(int32_t TableIndex);
}; // Size: 0xe20
#pragma pack(pop)
