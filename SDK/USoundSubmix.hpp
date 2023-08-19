#pragma once
#include <cstdint>
#include "EAudioRecordingExportType.hpp"
#include "EAudioSpectrumType.hpp"
#include "EFFTPeakInterpolationMethod.hpp"
#include "EFFTSize.hpp"
#include "EFFTWindowType.hpp"
#include "EGainParamMode.hpp"
#include "FSoundModulationDestinationSettings.hpp"
#include "FSoundSubmixSpectralAnalysisBandSettings.hpp"
#include "USoundSubmixWithParentBase.hpp"
class USoundEffectSubmixPreset;
class USoundfieldEncodingSettingsBase;
class UObject;
class USoundWave;
#pragma pack(push, 1)
class USoundSubmix : public USoundSubmixWithParentBase {
public:
    uint8_t bMuteWhenBackgrounded : 1; // 0x40
    uint8_t pad_bitfield_40_1 : 7;
    char pad_41[0x7];
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48
    USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58
    int32_t EnvelopeFollowerAttackTime; // 0x60
    int32_t EnvelopeFollowerReleaseTime; // 0x64
    EGainParamMode GainMode; // 0x68
    char pad_69[0x3];
    float OutputVolume; // 0x6c
    float WetLevel; // 0x70
    float DryLevel; // 0x74
    FSoundModulationDestinationSettings OutputVolumeModulation; // 0x78
    FSoundModulationDestinationSettings WetLevelModulation; // 0x88
    FSoundModulationDestinationSettings DryLevelModulation; // 0x98
    char pad_a8[0x18];
    static USoundSubmix* StaticClass();
    void StopSpectralAnalysis(UObject* WorldContextObject);
    void StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundWave* ExistingSoundWaveToOverwrite);
    void StopEnvelopeFollowing(UObject* WorldContextObject);
    void StartSpectralAnalysis(UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration);
    void StartEnvelopeFollowing(UObject* WorldContextObject);
    void SetSubmixOutputVolume(UObject* WorldContextObject, float InOutputVolume);
    void RemoveSpectralAnalysisDelegate(UObject* WorldContextObject);
    void AddSpectralAnalysisDelegate(UObject* WorldContextObject, TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings);
    void AddEnvelopeFollowerDelegate(UObject* WorldContextObject);
}; // Size: 0xc0
#pragma pack(pop)
