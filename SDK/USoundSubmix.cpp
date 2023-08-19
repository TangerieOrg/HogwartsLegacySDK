#include "EAudioRecordingExportType.hpp"
#include "EAudioSpectrumType.hpp"
#include "EFFTPeakInterpolationMethod.hpp"
#include "EFFTSize.hpp"
#include "EFFTWindowType.hpp"
#include "EGainParamMode.hpp"
#include "FSoundModulationDestinationSettings.hpp"
#include "FSoundSubmixSpectralAnalysisBandSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USoundSubmix.hpp"
#include "USoundSubmixWithParentBase.hpp"
#include "USoundWave.hpp"
#include "USoundfieldEncodingSettingsBase.hpp"
void USoundSubmix::StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StartRecordingOutput"));
    struct Params_StartRecordingOutput {
        UObject* WorldContextObject; // 0x0
        float ExpectedDuration; // 0x8
    }; // Size: 0xc
    Params_StartRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ExpectedDuration = (float)ExpectedDuration;
    ProcessEvent(func, &params);
}
USoundSubmix* USoundSubmix::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundSubmix");
    return (USoundSubmix*)res;
}
void USoundSubmix::StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundWave* ExistingSoundWaveToOverwrite) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StopRecordingOutput"));
    struct Params_StopRecordingOutput {
        UObject* WorldContextObject; // 0x0
        EAudioRecordingExportType ExportType; // 0x8
        char pad_9[0x7];
        FString Name; // 0x10
        FString Path; // 0x20
        USoundWave* ExistingSoundWaveToOverwrite; // 0x30
    }; // Size: 0x38
    Params_StopRecordingOutput params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ExportType = (EAudioRecordingExportType)ExportType;
    params.Name = (FString)Name;
    params.Path = (FString)Path;
    params.ExistingSoundWaveToOverwrite = (USoundWave*)ExistingSoundWaveToOverwrite;
    ProcessEvent(func, &params);
}
void USoundSubmix::StartSpectralAnalysis(UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StartSpectralAnalysis"));
    struct Params_StartSpectralAnalysis {
        UObject* WorldContextObject; // 0x0
        EFFTSize FFTSize; // 0x8
        EFFTPeakInterpolationMethod InterpolationMethod; // 0x9
        EFFTWindowType WindowType; // 0xa
        char pad_b[0x1];
        float HopSize; // 0xc
        EAudioSpectrumType SpectrumType; // 0x10
    }; // Size: 0x11
    Params_StartSpectralAnalysis params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FFTSize = (EFFTSize)FFTSize;
    params.InterpolationMethod = (EFFTPeakInterpolationMethod)InterpolationMethod;
    params.WindowType = (EFFTWindowType)WindowType;
    params.HopSize = (float)HopSize;
    params.SpectrumType = (EAudioSpectrumType)SpectrumType;
    ProcessEvent(func, &params);
}
void USoundSubmix::StopSpectralAnalysis(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StopSpectralAnalysis"));
    struct Params_StopSpectralAnalysis {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StopSpectralAnalysis params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
}
void USoundSubmix::SetSubmixOutputVolume(UObject* WorldContextObject, float InOutputVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.SetSubmixOutputVolume"));
    struct Params_SetSubmixOutputVolume {
        UObject* WorldContextObject; // 0x0
        float InOutputVolume; // 0x8
    }; // Size: 0xc
    Params_SetSubmixOutputVolume params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InOutputVolume = (float)InOutputVolume;
    ProcessEvent(func, &params);
}
void USoundSubmix::StopEnvelopeFollowing(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StopEnvelopeFollowing"));
    struct Params_StopEnvelopeFollowing {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StopEnvelopeFollowing params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
}
void USoundSubmix::StartEnvelopeFollowing(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SoundSubmix.StartEnvelopeFollowing"));
    struct Params_StartEnvelopeFollowing {
        UObject* WorldContextObject; // 0x0
    }; // Size: 0x8
    Params_StartEnvelopeFollowing params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
}
void USoundSubmix::RemoveSpectralAnalysisDelegate(UObject* WorldContextObject) {}
void USoundSubmix::AddSpectralAnalysisDelegate(UObject* WorldContextObject, TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings) {}
void USoundSubmix::AddEnvelopeFollowerDelegate(UObject* WorldContextObject) {}
