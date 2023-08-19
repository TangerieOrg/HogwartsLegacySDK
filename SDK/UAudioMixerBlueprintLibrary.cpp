#include "EAudioRecordingExportType.hpp"
#include "EAudioSpectrumBandPresetType.hpp"
#include "EAudioSpectrumType.hpp"
#include "EFFTPeakInterpolationMethod.hpp"
#include "EFFTSize.hpp"
#include "EFFTWindowType.hpp"
#include "EMusicalNoteName.hpp"
#include "FSoundSubmixSpectralAnalysisBandSettings.hpp"
#include "FSourceEffectChainEntry.hpp"
#include "UAudioBus.hpp"
#include "UAudioMixerBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USoundCue.hpp"
#include "USoundEffectSourcePresetChain.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USoundSubmix.hpp"
#include "USoundWave.hpp"
void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));
    struct Params_ClearMasterSubmixEffects {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_ClearMasterSubmixEffects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache"));
    struct Params_TrimAudioCache {
        float InMegabytesToFree; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_TrimAudioCache params{};
    params.InMegabytesToFree = (float)InMegabytesToFree;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAudioMixerBlueprintLibrary::ClearSubmixEffects(UObject* WorldContextObject, USoundSubmix* SoundSubmix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects"));
    struct Params_ClearSubmixEffects {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
    }; // Size: 0x10
    Params_ClearSubmixEffects params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex"));
    struct Params_RemoveSubmixEffectPresetAtIndex {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        int32_t SubmixChainIndex; // 0x10
    }; // Size: 0x14
    Params_RemoveSubmixEffectPresetAtIndex params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixChainIndex = (int32_t)SubmixChainIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAudioMixerBlueprintLibrary* UAudioMixerBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.AudioMixerBlueprintLibrary");
    return (UAudioMixerBlueprintLibrary*)res;
}
void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput"));
    struct Params_StartAnalyzingOutput {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SubmixToAnalyze; // 0x8
        EFFTSize FFTSize; // 0x10
        EFFTPeakInterpolationMethod InterpolationMethod; // 0x11
        EFFTWindowType WindowType; // 0x12
        char pad_13[0x1];
        float HopSize; // 0x14
        EAudioSpectrumType SpectrumType; // 0x18
    }; // Size: 0x19
    Params_StartAnalyzingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixToAnalyze = (USoundSubmix*)SubmixToAnalyze;
    params.FFTSize = (EFFTSize)FFTSize;
    params.InterpolationMethod = (EFFTPeakInterpolationMethod)InterpolationMethod;
    params.WindowType = (EFFTWindowType)WindowType;
    params.HopSize = (float)HopSize;
    params.SpectrumType = (EAudioSpectrumType)SpectrumType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings"));
    struct Params_MakeFullSpectrumSpectralAnalysisBandSettings {
        int32_t InNumBands; // 0x0
        float InMinimumFrequency; // 0x4
        float InMaximumFrequency; // 0x8
        int32_t InAttackTimeMsec; // 0xc
        int32_t InReleaseTimeMsec; // 0x10
        char pad_14[0x4];
        TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_MakeFullSpectrumSpectralAnalysisBandSettings params{};
    params.InNumBands = (int32_t)InNumBands;
    params.InMinimumFrequency = (float)InMinimumFrequency;
    params.InMaximumFrequency = (float)InMaximumFrequency;
    params.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    params.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSoundSubmixSpectralAnalysisBandSettings>)params.ReturnValue;
}
USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput"));
    struct Params_StopRecordingOutput {
        UObject* WorldContextObject; // 0x0
        EAudioRecordingExportType ExportType; // 0x8
        char pad_9[0x7];
        FString Name; // 0x10
        FString Path; // 0x20
        USoundSubmix* SubmixToRecord; // 0x30
        USoundWave* ExistingSoundWaveToOverwrite; // 0x38
        USoundWave* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_StopRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ExportType = (EAudioRecordingExportType)ExportType;
    params.Name = (FString)Name;
    params.Path = (FString)Path;
    params.SubmixToRecord = (USoundSubmix*)SubmixToRecord;
    params.ExistingSoundWaveToOverwrite = (USoundWave*)ExistingSoundWaveToOverwrite;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USoundWave*)params.ReturnValue;
}
int32_t UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));
    struct Params_GetNumberOfEntriesInSourceEffectChain {
        UObject* WorldContextObject; // 0x0
        USoundEffectSourcePresetChain* PresetChain; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetNumberOfEntriesInSourceEffectChain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetChain = (USoundEffectSourcePresetChain*)PresetChain;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UAudioMixerBlueprintLibrary::StartAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus"));
    struct Params_StartAudioBus {
        UObject* WorldContextObject; // 0x0
        UAudioBus* AudioBus; // 0x8
    }; // Size: 0x10
    Params_StartAudioBus params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AudioBus = (UAudioBus*)AudioBus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::StopAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus"));
    struct Params_StopAudioBus {
        UObject* WorldContextObject; // 0x0
        UAudioBus* AudioBus; // 0x8
    }; // Size: 0x10
    Params_StopAudioBus params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AudioBus = (UAudioBus*)AudioBus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput"));
    struct Params_StopAnalyzingOutput {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SubmixToStopAnalyzing; // 0x8
    }; // Size: 0x10
    Params_StopAnalyzingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixToStopAnalyzing = (USoundSubmix*)SubmixToStopAnalyzing;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput"));
    struct Params_StartRecordingOutput {
        UObject* WorldContextObject; // 0x0
        float ExpectedDuration; // 0x8
        char pad_c[0x4];
        USoundSubmix* SubmixToRecord; // 0x10
    }; // Size: 0x18
    Params_StartRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ExpectedDuration = (float)ExpectedDuration;
    params.SubmixToRecord = (USoundSubmix*)SubmixToRecord;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride"));
    struct Params_SetSubmixEffectChainOverride {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain; // 0x10
        float FadeTimeSec; // 0x20
    }; // Size: 0x24
    Params_SetSubmixEffectChainOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixEffectPresetChain = (TArray<USoundEffectSubmixPreset*>)SubmixEffectPresetChain;
    params.FadeTimeSec = (float)FadeTimeSec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));
    struct Params_SetBypassSourceEffectChainEntry {
        UObject* WorldContextObject; // 0x0
        USoundEffectSourcePresetChain* PresetChain; // 0x8
        int32_t EntryIndex; // 0x10
        bool bBypassed; // 0x14
    }; // Size: 0x15
    Params_SetBypassSourceEffectChainEntry params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetChain = (USoundEffectSourcePresetChain*)PresetChain;
    params.EntryIndex = (int32_t)EntryIndex;
    params.bBypassed = (bool)bBypassed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, float FadeTimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride"));
    struct Params_ClearSubmixEffectChainOverride {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        float FadeTimeSec; // 0x10
    }; // Size: 0x14
    Params_ClearSubmixEffectChainOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.FadeTimeSec = (float)FadeTimeSec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput"));
    struct Params_ResumeRecordingOutput {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SubmixToPause; // 0x8
    }; // Size: 0x10
    Params_ResumeRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixToPause = (USoundSubmix*)SubmixToPause;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));
    struct Params_AddMasterSubmixEffect {
        UObject* WorldContextObject; // 0x0
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x8
    }; // Size: 0x10
    Params_AddMasterSubmixEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect"));
    struct Params_ReplaceSubmixEffect {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* InSoundSubmix; // 0x8
        int32_t SubmixChainIndex; // 0x10
        char pad_14[0x4];
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x18
    }; // Size: 0x20
    Params_ReplaceSubmixEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundSubmix = (USoundSubmix*)InSoundSubmix;
    params.SubmixChainIndex = (int32_t)SubmixChainIndex;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix"));
    struct Params_ReplaceSoundEffectSubmix {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* InSoundSubmix; // 0x8
        int32_t SubmixChainIndex; // 0x10
        char pad_14[0x4];
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x18
    }; // Size: 0x20
    Params_ReplaceSoundEffectSubmix params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InSoundSubmix = (USoundSubmix*)InSoundSubmix;
    params.SubmixChainIndex = (int32_t)SubmixChainIndex;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset"));
    struct Params_RemoveSubmixEffectPreset {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x10
    }; // Size: 0x18
    Params_RemoveSubmixEffectPreset params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex"));
    struct Params_RemoveSubmixEffectAtIndex {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        int32_t SubmixChainIndex; // 0x10
    }; // Size: 0x14
    Params_RemoveSubmixEffectAtIndex params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixChainIndex = (int32_t)SubmixChainIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies"));
    struct Params_GetPhaseForFrequencies {
        UObject* WorldContextObject; // 0x0
        TArray<float> Frequencies; // 0x8
        TArray<float> Phases; // 0x18
        USoundSubmix* SubmixToAnalyze; // 0x28
    }; // Size: 0x30
    Params_GetPhaseForFrequencies params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Frequencies = (TArray<float>)Frequencies;
    params.Phases = (TArray<float>)Phases;
    params.SubmixToAnalyze = (USoundSubmix*)SubmixToAnalyze;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Frequencies = params.Frequencies;
    Phases = params.Phases;
}
void UAudioMixerBlueprintLibrary::RemoveSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect"));
    struct Params_RemoveSubmixEffect {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x10
    }; // Size: 0x18
    Params_RemoveSubmixEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));
    struct Params_RemoveSourceEffectFromPresetChain {
        UObject* WorldContextObject; // 0x0
        USoundEffectSourcePresetChain* PresetChain; // 0x8
        int32_t EntryIndex; // 0x10
    }; // Size: 0x14
    Params_RemoveSourceEffectFromPresetChain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetChain = (USoundEffectSourcePresetChain*)PresetChain;
    params.EntryIndex = (int32_t)EntryIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies"));
    struct Params_GetMagnitudeForFrequencies {
        UObject* WorldContextObject; // 0x0
        TArray<float> Frequencies; // 0x8
        TArray<float> Magnitudes; // 0x18
        USoundSubmix* SubmixToAnalyze; // 0x28
    }; // Size: 0x30
    Params_GetMagnitudeForFrequencies params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Frequencies = (TArray<float>)Frequencies;
    params.Magnitudes = (TArray<float>)Magnitudes;
    params.SubmixToAnalyze = (USoundSubmix*)SubmixToAnalyze;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Frequencies = params.Frequencies;
    Magnitudes = params.Magnitudes;
}
void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));
    struct Params_RemoveMasterSubmixEffect {
        UObject* WorldContextObject; // 0x0
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x8
    }; // Size: 0x10
    Params_RemoveMasterSubmixEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(USoundWave* SoundWave) {}
void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));
    struct Params_AddSourceEffectToPresetChain {
        UObject* WorldContextObject; // 0x0
        USoundEffectSourcePresetChain* PresetChain; // 0x8
        FSourceEffectChainEntry Entry; // 0x10
    }; // Size: 0x20
    Params_AddSourceEffectToPresetChain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PresetChain = (USoundEffectSourcePresetChain*)PresetChain;
    params.Entry = (FSourceEffectChainEntry)Entry;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(USoundCue* SoundCue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback"));
    struct Params_PrimeSoundCueForPlayback {
        USoundCue* SoundCue; // 0x0
    }; // Size: 0x8
    Params_PrimeSoundCueForPlayback params{};
    params.SoundCue = (USoundCue*)SoundCue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAudioMixerBlueprintLibrary::PauseRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput"));
    struct Params_PauseRecordingOutput {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SubmixToPause; // 0x8
    }; // Size: 0x10
    Params_PauseRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SubmixToPause = (USoundSubmix*)SubmixToPause;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings"));
    struct Params_MakePresetSpectralAnalysisBandSettings {
        EAudioSpectrumBandPresetType InBandPresetType; // 0x0
        char pad_1[0x3];
        int32_t InNumBands; // 0x4
        int32_t InAttackTimeMsec; // 0x8
        int32_t InReleaseTimeMsec; // 0xc
        TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakePresetSpectralAnalysisBandSettings params{};
    params.InBandPresetType = (EAudioSpectrumBandPresetType)InBandPresetType;
    params.InNumBands = (int32_t)InNumBands;
    params.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    params.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSoundSubmixSpectralAnalysisBandSettings>)params.ReturnValue;
}
TArray<FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings"));
    struct Params_MakeMusicalSpectralAnalysisBandSettings {
        int32_t InNumSemitones; // 0x0
        EMusicalNoteName InStartingMusicalNote; // 0x4
        char pad_5[0x3];
        int32_t InStartingOctave; // 0x8
        int32_t InAttackTimeMsec; // 0xc
        int32_t InReleaseTimeMsec; // 0x10
        char pad_14[0x4];
        TArray<FSoundSubmixSpectralAnalysisBandSettings> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_MakeMusicalSpectralAnalysisBandSettings params{};
    params.InNumSemitones = (int32_t)InNumSemitones;
    params.InStartingMusicalNote = (EMusicalNoteName)InStartingMusicalNote;
    params.InStartingOctave = (int32_t)InStartingOctave;
    params.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    params.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FSoundSubmixSpectralAnalysisBandSettings>)params.ReturnValue;
}
bool UAudioMixerBlueprintLibrary::IsAudioBusActive(UObject* WorldContextObject, UAudioBus* AudioBus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive"));
    struct Params_IsAudioBusActive {
        UObject* WorldContextObject; // 0x0
        UAudioBus* AudioBus; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsAudioBusActive params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AudioBus = (UAudioBus*)AudioBus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UAudioMixerBlueprintLibrary::AddSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect"));
    struct Params_AddSubmixEffect {
        UObject* WorldContextObject; // 0x0
        USoundSubmix* SoundSubmix; // 0x8
        USoundEffectSubmixPreset* SubmixEffectPreset; // 0x10
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_AddSubmixEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SoundSubmix = (USoundSubmix*)SoundSubmix;
    params.SubmixEffectPreset = (USoundEffectSubmixPreset*)SubmixEffectPreset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
