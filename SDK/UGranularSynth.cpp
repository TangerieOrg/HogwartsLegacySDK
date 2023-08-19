#include "EGranularSynthEnvelopeType.hpp"
#include "EGranularSynthSeekType.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UGranularSynth.hpp"
#include "USoundWave.hpp"
#include "USynthComponent.hpp"
void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetPlayheadTime"));
    struct Params_SetPlayheadTime {
        float InPositionSec; // 0x0
        float LerpTimeSec; // 0x4
        EGranularSynthSeekType SeekType; // 0x8
    }; // Size: 0x9
    Params_SetPlayheadTime params{};
    params.InPositionSec = (float)InPositionSec;
    params.LerpTimeSec = (float)LerpTimeSec;
    params.SeekType = (EGranularSynthSeekType)SeekType;
    ProcessEvent(func, &params);
}
UGranularSynth* UGranularSynth::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.GranularSynth");
    return (UGranularSynth*)res;
}
void UGranularSynth::SetSustainGain(float SustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetSustainGain"));
    struct Params_SetSustainGain {
        float SustainGain; // 0x0
    }; // Size: 0x4
    Params_SetSustainGain params{};
    params.SustainGain = (float)SustainGain;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetSoundWave(USoundWave* InSoundWave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetSoundWave"));
    struct Params_SetSoundWave {
        USoundWave* InSoundWave; // 0x0
    }; // Size: 0x8
    Params_SetSoundWave params{};
    params.InSoundWave = (USoundWave*)InSoundWave;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed"));
    struct Params_SetPlaybackSpeed {
        float InPlayheadRate; // 0x0
    }; // Size: 0x4
    Params_SetPlaybackSpeed params{};
    params.InPlayheadRate = (float)InPlayheadRate;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetDecayTime(float DecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetDecayTime"));
    struct Params_SetDecayTime {
        float DecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetDecayTime params{};
    params.DecayTimeMsec = (float)DecayTimeMsec;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetScrubMode(bool bScrubMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetScrubMode"));
    struct Params_SetScrubMode {
        bool bScrubMode; // 0x0
    }; // Size: 0x1
    Params_SetScrubMode params{};
    params.bScrubMode = (bool)bScrubMode;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec"));
    struct Params_SetReleaseTimeMsec {
        float ReleaseTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetReleaseTimeMsec params{};
    params.ReleaseTimeMsec = (float)ReleaseTimeMsec;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainVolume(float BaseVolume, FVector2D VolumeRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainVolume"));
    struct Params_SetGrainVolume {
        float BaseVolume; // 0x0
        FVector2D VolumeRange; // 0x4
    }; // Size: 0xc
    Params_SetGrainVolume params{};
    params.BaseVolume = (float)BaseVolume;
    params.VolumeRange = (FVector2D)VolumeRange;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond"));
    struct Params_SetGrainsPerSecond {
        float InGrainsPerSecond; // 0x0
    }; // Size: 0x4
    Params_SetGrainsPerSecond params{};
    params.InGrainsPerSecond = (float)InGrainsPerSecond;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainProbability(float InGrainProbability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainProbability"));
    struct Params_SetGrainProbability {
        float InGrainProbability; // 0x0
    }; // Size: 0x4
    Params_SetGrainProbability params{};
    params.InGrainProbability = (float)InGrainProbability;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainPitch(float BasePitch, FVector2D PitchRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainPitch"));
    struct Params_SetGrainPitch {
        float BasePitch; // 0x0
        FVector2D PitchRange; // 0x4
    }; // Size: 0xc
    Params_SetGrainPitch params{};
    params.BasePitch = (float)BasePitch;
    params.PitchRange = (FVector2D)PitchRange;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainPan(float BasePan, FVector2D PanRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainPan"));
    struct Params_SetGrainPan {
        float BasePan; // 0x0
        FVector2D PanRange; // 0x4
    }; // Size: 0xc
    Params_SetGrainPan params{};
    params.BasePan = (float)BasePan;
    params.PanRange = (FVector2D)PanRange;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType"));
    struct Params_SetGrainEnvelopeType {
        EGranularSynthEnvelopeType EnvelopeType; // 0x0
    }; // Size: 0x1
    Params_SetGrainEnvelopeType params{};
    params.EnvelopeType = (EGranularSynthEnvelopeType)EnvelopeType;
    ProcessEvent(func, &params);
}
void UGranularSynth::SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetGrainDuration"));
    struct Params_SetGrainDuration {
        float BaseDurationMsec; // 0x0
        FVector2D DurationRange; // 0x4
    }; // Size: 0xc
    Params_SetGrainDuration params{};
    params.BaseDurationMsec = (float)BaseDurationMsec;
    params.DurationRange = (FVector2D)DurationRange;
    ProcessEvent(func, &params);
}
float UGranularSynth::GetCurrentPlayheadTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime"));
    struct Params_GetCurrentPlayheadTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentPlayheadTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGranularSynth::SetAttackTime(float AttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.SetAttackTime"));
    struct Params_SetAttackTime {
        float AttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetAttackTime params{};
    params.AttackTimeMsec = (float)AttackTimeMsec;
    ProcessEvent(func, &params);
}
float UGranularSynth::GetSampleDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.GetSampleDuration"));
    struct Params_GetSampleDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSampleDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGranularSynth::NoteOn(float Note, int32_t Velocity, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.NoteOn"));
    struct Params_NoteOn {
        float Note; // 0x0
        int32_t Velocity; // 0x4
        float Duration; // 0x8
    }; // Size: 0xc
    Params_NoteOn params{};
    params.Note = (float)Note;
    params.Velocity = (int32_t)Velocity;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UGranularSynth::NoteOff(float Note, bool bKill) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.NoteOff"));
    struct Params_NoteOff {
        float Note; // 0x0
        bool bKill; // 0x4
    }; // Size: 0x5
    Params_NoteOff params{};
    params.Note = (float)Note;
    params.bKill = (bool)bKill;
    ProcessEvent(func, &params);
}
bool UGranularSynth::IsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.GranularSynth.IsLoaded"));
    struct Params_IsLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
