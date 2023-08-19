#pragma once
#include <cstdint>
#include "EAudioRecordingExportType.hpp"
#include "EAudioSpectrumBandPresetType.hpp"
#include "EAudioSpectrumType.hpp"
#include "EFFTPeakInterpolationMethod.hpp"
#include "EFFTSize.hpp"
#include "EFFTWindowType.hpp"
#include "EMusicalNoteName.hpp"
#include "FSoundSubmixSpectralAnalysisBandSettings.hpp"
#include "FSourceEffectChainEntry.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class USoundWave;
class USoundSubmix;
class UAudioBus;
class USoundEffectSubmixPreset;
class USoundEffectSourcePresetChain;
class USoundCue;
#pragma pack(push, 1)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAudioMixerBlueprintLibrary* StaticClass();
    static float TrimAudioCache(float InMegabytesToFree);
    static USoundWave* StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite);
    static void StopAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus);
    static void StopAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing);
    static void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord);
    static void StartAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus);
    static void StartAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    static void SetSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
    static void SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
    static void ResumeRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    static void ReplaceSubmixEffect(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void ReplaceSoundEffectSubmix(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void RemoveSubmixEffectPresetAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
    static void RemoveSubmixEffectPreset(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void RemoveSubmixEffectAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
    static void RemoveSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
    static void RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void PrimeSoundForPlayback(USoundWave* SoundWave);
    static void PrimeSoundCueForPlayback(USoundCue* SoundCue);
    static void PauseRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause);
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    static TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    static bool IsAudioBusActive(UObject* WorldContextObject, UAudioBus* AudioBus);
    static void GetPhaseForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze);
    static int32_t GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);
    static void GetMagnitudeForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze);
    static void ClearSubmixEffects(UObject* WorldContextObject, USoundSubmix* SoundSubmix);
    static void ClearSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, float FadeTimeSec);
    static void ClearMasterSubmixEffects(UObject* WorldContextObject);
    static int32_t AddSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset);
    static void AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    static void AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28
#pragma pack(pop)
