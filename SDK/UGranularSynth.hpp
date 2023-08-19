#pragma once
#include <cstdint>
#include "EGranularSynthEnvelopeType.hpp"
#include "EGranularSynthSeekType.hpp"
#include "FVector2D.hpp"
#include "USynthComponent.hpp"
class USoundWave;
#pragma pack(push, 1)
class UGranularSynth : public USynthComponent {
public:
    USoundWave* GranulatedSoundWave; // 0x6e0
    char pad_6e8[0x3b8];
    static UGranularSynth* StaticClass();
    void SetSustainGain(float SustainGain);
    void SetSoundWave(USoundWave* InSoundWave);
    void SetScrubMode(bool bScrubMode);
    void SetReleaseTimeMsec(float ReleaseTimeMsec);
    void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);
    void SetPlaybackSpeed(float InPlayheadRate);
    void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);
    void SetGrainsPerSecond(float InGrainsPerSecond);
    void SetGrainProbability(float InGrainProbability);
    void SetGrainPitch(float BasePitch, FVector2D PitchRange);
    void SetGrainPan(float BasePan, FVector2D PanRange);
    void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);
    void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);
    void SetDecayTime(float DecayTimeMsec);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(float Note, int32_t Velocity, float Duration);
    void NoteOff(float Note, bool bKill);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlayheadTime();
}; // Size: 0xaa0
#pragma pack(pop)
