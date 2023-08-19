#include "CurveInterpolationType.hpp"
#include "ESynthLFOType.hpp"
#include "UFunction.hpp"
#include "UMonoWaveTableSynthPreset.hpp"
#include "USynthComponent.hpp"
#include "USynthComponentMonoWaveTable.hpp"
void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend"));
    struct Params_SetFrequencyPitchBend {
        float FrequencyOffsetCents; // 0x0
    }; // Size: 0x4
    Params_SetFrequencyPitchBend params{};
    params.FrequencyOffsetCents = (float)FrequencyOffsetCents;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain"));
    struct Params_SetPositionEnvelopeSustainGain {
        float InSustainGain; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeSustainGain params{};
    params.InSustainGain = (float)InSustainGain;
    ProcessEvent(func, &params);
}
TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable"));
    struct Params_GetKeyFrameValuesForTable {
        float TableIndex; // 0x0
        char pad_4[0x4];
        TArray<float> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetKeyFrameValuesForTable params{};
    params.TableIndex = (float)TableIndex;
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert"));
    struct Params_SetPositionEnvelopeInvert {
        bool bInInvert; // 0x0
    }; // Size: 0x1
    Params_SetPositionEnvelopeInvert params{};
    params.bInInvert = (bool)bInInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition"));
    struct Params_SetWaveTablePosition {
        float InPosition; // 0x0
    }; // Size: 0x4
    Params_SetWaveTablePosition params{};
    params.InPosition = (float)InPosition;
    ProcessEvent(func, &params);
}
USynthComponentMonoWaveTable* USynthComponentMonoWaveTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SynthComponentMonoWaveTable");
    return (USynthComponentMonoWaveTable*)res;
}
bool USynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue"));
    struct Params_SetCurveValue {
        int32_t TableIndex; // 0x0
        int32_t KeyframeIndex; // 0x4
        float NewValue; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetCurveValue params{};
    params.TableIndex = (int32_t)TableIndex;
    params.KeyframeIndex = (int32_t)KeyframeIndex;
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState"));
    struct Params_SetSustainPedalState {
        bool InSustainPedalState; // 0x0
    }; // Size: 0x1
    Params_SetSustainPedalState params{};
    params.InSustainPedalState = (bool)InSustainPedalState;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPosLfoType(ESynthLFOType InLfoType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType"));
    struct Params_SetPosLfoType {
        ESynthLFOType InLfoType; // 0x0
    }; // Size: 0x1
    Params_SetPosLfoType params{};
    params.InLfoType = (ESynthLFOType)InLfoType;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency"));
    struct Params_SetPosLfoFrequency {
        float InLfoFrequency; // 0x0
    }; // Size: 0x4
    Params_SetPosLfoFrequency params{};
    params.InLfoFrequency = (float)InLfoFrequency;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth"));
    struct Params_SetPosLfoDepth {
        float InLfoDepth; // 0x0
    }; // Size: 0x4
    Params_SetPosLfoDepth params{};
    params.InLfoDepth = (float)InLfoDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert"));
    struct Params_SetFilterEnvelopeBiasInvert {
        bool bInBiasInvert; // 0x0
    }; // Size: 0x1
    Params_SetFilterEnvelopeBiasInvert params{};
    params.bInBiasInvert = (bool)bInBiasInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime"));
    struct Params_SetPositionEnvelopeReleaseTime {
        float InReleaseTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeReleaseTime params{};
    params.InReleaseTimeMsec = (float)InReleaseTimeMsec;
    ProcessEvent(func, &params);
}
int32_t USynthComponentMonoWaveTable::GetMaxTableIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex"));
    struct Params_GetMaxTableIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxTableIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth"));
    struct Params_SetPositionEnvelopeDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime"));
    struct Params_SetPositionEnvelopeDecayTime {
        float InDecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeDecayTime params{};
    params.InDecayTimeMsec = (float)InDecayTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime"));
    struct Params_SetAmpEnvelopeAttackTime {
        float InAttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeAttackTime params{};
    params.InAttackTimeMsec = (float)InAttackTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency"));
    struct Params_SetFrequency {
        float FrequencyHz; // 0x0
    }; // Size: 0x4
    Params_SetFrequency params{};
    params.FrequencyHz = (float)FrequencyHz;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert"));
    struct Params_SetPositionEnvelopeBiasInvert {
        bool bInBiasInvert; // 0x0
    }; // Size: 0x1
    Params_SetPositionEnvelopeBiasInvert params{};
    params.bInBiasInvert = (bool)bInBiasInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth"));
    struct Params_SetPositionEnvelopeBiasDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeBiasDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime"));
    struct Params_SetAmpEnvelopeReleaseTime {
        float InReleaseTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeReleaseTime params{};
    params.InReleaseTimeMsec = (float)InReleaseTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime"));
    struct Params_SetPositionEnvelopeAttackTime {
        float InAttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetPositionEnvelopeAttackTime params{};
    params.InAttackTimeMsec = (float)InAttackTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance"));
    struct Params_SetLowPassFilterResonance {
        float InNewQ; // 0x0
    }; // Size: 0x4
    Params_SetLowPassFilterResonance params{};
    params.InNewQ = (float)InNewQ;
    ProcessEvent(func, &params);
}
int32_t USynthComponentMonoWaveTable::GetNumTableEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries"));
    struct Params_GetNumTableEntries {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumTableEntries params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime"));
    struct Params_SetAmpEnvelopeDecayTime {
        float InDecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeDecayTime params{};
    params.InDecayTimeMsec = (float)InDecayTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote"));
    struct Params_SetFrequencyWithMidiNote {
        float InMidiNote; // 0x0
    }; // Size: 0x4
    Params_SetFrequencyWithMidiNote params{};
    params.InMidiNote = (float)InMidiNote;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain"));
    struct Params_SetFilterEnvelopeSustainGain {
        float InSustainGain; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopeSustainGain params{};
    params.InSustainGain = (float)InSustainGain;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime"));
    struct Params_SetFilterEnvelopeReleaseTime {
        float InReleaseTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopeReleaseTime params{};
    params.InReleaseTimeMsec = (float)InReleaseTimeMsec;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime"));
    struct Params_SetFilterEnvelopenDecayTime {
        float InDecayTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopenDecayTime params{};
    params.InDecayTimeMsec = (float)InDecayTimeMsec;
    ProcessEvent(func, &params);
}
bool USynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent"));
    struct Params_SetCurveTangent {
        int32_t TableIndex; // 0x0
        float InNewTangent; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetCurveTangent params{};
    params.TableIndex = (int32_t)TableIndex;
    params.InNewTangent = (float)InNewTangent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert"));
    struct Params_SetFilterEnvelopeInvert {
        bool bInInvert; // 0x0
    }; // Size: 0x1
    Params_SetFilterEnvelopeInvert params{};
    params.bInInvert = (bool)bInInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth"));
    struct Params_SetFilterEnvelopeDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopeDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth"));
    struct Params_SetFilterEnvelopeBiasDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopeBiasDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn"));
    struct Params_NoteOn {
        float InMidiNote; // 0x0
        float InVelocity; // 0x4
    }; // Size: 0x8
    Params_NoteOn params{};
    params.InMidiNote = (float)InMidiNote;
    params.InVelocity = (float)InVelocity;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth"));
    struct Params_SetAmpEnvelopeBiasDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeBiasDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime"));
    struct Params_SetFilterEnvelopeAttackTime {
        float InAttackTimeMsec; // 0x0
    }; // Size: 0x4
    Params_SetFilterEnvelopeAttackTime params{};
    params.InAttackTimeMsec = (float)InAttackTimeMsec;
    ProcessEvent(func, &params);
}
bool USynthComponentMonoWaveTable::SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType"));
    struct Params_SetCurveInterpolationType {
        CurveInterpolationType InterpolationType; // 0x0
        char pad_1[0x3];
        int32_t TableIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetCurveInterpolationType params{};
    params.InterpolationType = (CurveInterpolationType)InterpolationType;
    params.TableIndex = (int32_t)TableIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain"));
    struct Params_SetAmpEnvelopeSustainGain {
        float InSustainGain; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeSustainGain params{};
    params.InSustainGain = (float)InSustainGain;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert"));
    struct Params_SetAmpEnvelopeInvert {
        bool bInInvert; // 0x0
    }; // Size: 0x1
    Params_SetAmpEnvelopeInvert params{};
    params.bInInvert = (bool)bInInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth"));
    struct Params_SetAmpEnvelopeDepth {
        float InDepth; // 0x0
    }; // Size: 0x4
    Params_SetAmpEnvelopeDepth params{};
    params.InDepth = (float)InDepth;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert"));
    struct Params_SetAmpEnvelopeBiasInvert {
        bool bInBiasInvert; // 0x0
    }; // Size: 0x1
    Params_SetAmpEnvelopeBiasInvert params{};
    params.bInBiasInvert = (bool)bInBiasInvert;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable"));
    struct Params_RefreshWaveTable {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_RefreshWaveTable params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::RefreshAllWaveTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables"));
    struct Params_RefreshAllWaveTables {
    }; // Size: 0x0
    Params_RefreshAllWaveTables params{};
    ProcessEvent(func, &params);
}
void USynthComponentMonoWaveTable::NoteOff(float InMidiNote) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff"));
    struct Params_NoteOff {
        float InMidiNote; // 0x0
    }; // Size: 0x4
    Params_NoteOff params{};
    params.InMidiNote = (float)InMidiNote;
    ProcessEvent(func, &params);
}
float USynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent"));
    struct Params_GetCurveTangent {
        int32_t TableIndex; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetCurveTangent params{};
    params.TableIndex = (int32_t)TableIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
