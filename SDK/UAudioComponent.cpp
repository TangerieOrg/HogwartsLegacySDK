#include "EAttachmentRule.hpp"
#include "EAudioComponentPlayState.hpp"
#include "EAudioFaderCurve.hpp"
#include "FAudioComponentParam.hpp"
#include "FQuartzQuantizationBoundary.hpp"
#include "FSoundAttenuationSettings.hpp"
#include "FSoundModulationDefaultRoutingSettings.hpp"
#include "FSoundWaveEnvelopeDataPerSound.hpp"
#include "FSoundWaveSpectralData.hpp"
#include "FSoundWaveSpectralDataPerSound.hpp"
#include "UAudioBus.hpp"
#include "UAudioComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UQuartzClockHandle.hpp"
#include "USceneComponent.hpp"
#include "USoundAttenuation.hpp"
#include "USoundBase.hpp"
#include "USoundClass.hpp"
#include "USoundConcurrency.hpp"
#include "USoundEffectSourcePresetChain.hpp"
#include "USoundSourceBus.hpp"
#include "USoundSubmixBase.hpp"
#include "USoundWave.hpp"
UAudioComponent* UAudioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AudioComponent");
    return (UAudioComponent*)res;
}
void UAudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetVolumeMultiplier"));
    struct Params_SetVolumeMultiplier {
        float NewVolumeMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetVolumeMultiplier params{};
    params.NewVolumeMultiplier = (float)NewVolumeMultiplier;
    ProcessEvent(func, &params);
}
void UAudioComponent::StopDelayed(float DelayTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.StopDelayed"));
    struct Params_StopDelayed {
        float DelayTime; // 0x0
    }; // Size: 0x4
    Params_StopDelayed params{};
    params.DelayTime = (float)DelayTime;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetIntParameter(FName InName, int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetIntParameter"));
    struct Params_SetIntParameter {
        FName InName; // 0x0
        int32_t inInt; // 0x8
    }; // Size: 0xc
    Params_SetIntParameter params{};
    params.InName = (FName)InName;
    params.inInt = (int32_t)inInt;
    ProcessEvent(func, &params);
}
void UAudioComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UAudioComponent::SetWaveParameter(FName InName, USoundWave* InWave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetWaveParameter"));
    struct Params_SetWaveParameter {
        FName InName; // 0x0
        USoundWave* InWave; // 0x8
    }; // Size: 0x10
    Params_SetWaveParameter params{};
    params.InName = (FName)InName;
    params.InWave = (USoundWave*)InWave;
    ProcessEvent(func, &params);
}
void UAudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.FadeOut"));
    struct Params_FadeOut {
        float FadeOutDuration; // 0x0
        float FadeVolumeLevel; // 0x4
        EAudioFaderCurve FadeCurve; // 0x8
    }; // Size: 0x9
    Params_FadeOut params{};
    params.FadeOutDuration = (float)FadeOutDuration;
    params.FadeVolumeLevel = (float)FadeVolumeLevel;
    params.FadeCurve = (EAudioFaderCurve)FadeCurve;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetSourceBusSendPreEffect"));
    struct Params_SetSourceBusSendPreEffect {
        USoundSourceBus* SoundSourceBus; // 0x0
        float SourceBusSendLevel; // 0x8
    }; // Size: 0xc
    Params_SetSourceBusSendPreEffect params{};
    params.SoundSourceBus = (USoundSourceBus*)SoundSourceBus;
    params.SourceBusSendLevel = (float)SourceBusSendLevel;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetUISound(bool bInUISound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetUISound"));
    struct Params_SetUISound {
        bool bInUISound; // 0x0
    }; // Size: 0x1
    Params_SetUISound params{};
    params.bInUISound = (bool)bInUISound;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetSubmixSend"));
    struct Params_SetSubmixSend {
        USoundSubmixBase* Submix; // 0x0
        float SendLevel; // 0x8
    }; // Size: 0xc
    Params_SetSubmixSend params{};
    params.Submix = (USoundSubmixBase*)Submix;
    params.SendLevel = (float)SendLevel;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetSourceBusSendPostEffect"));
    struct Params_SetSourceBusSendPostEffect {
        USoundSourceBus* SoundSourceBus; // 0x0
        float SourceBusSendLevel; // 0x8
    }; // Size: 0xc
    Params_SetSourceBusSendPostEffect params{};
    params.SoundSourceBus = (USoundSourceBus*)SoundSourceBus;
    params.SourceBusSendLevel = (float)SourceBusSendLevel;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetSound(USoundBase* NewSound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetSound"));
    struct Params_SetSound {
        USoundBase* NewSound; // 0x0
    }; // Size: 0x8
    Params_SetSound params{};
    params.NewSound = (USoundBase*)NewSound;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetPitchMultiplier"));
    struct Params_SetPitchMultiplier {
        float NewPitchMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetPitchMultiplier params{};
    params.NewPitchMultiplier = (float)NewPitchMultiplier;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetPaused(bool bPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetPaused"));
    struct Params_SetPaused {
        bool bPause; // 0x0
    }; // Size: 0x1
    Params_SetPaused params{};
    params.bPause = (bool)bPause;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetOutputToBusOnly(bool bInOutputToBusOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetOutputToBusOnly"));
    struct Params_SetOutputToBusOnly {
        bool bInOutputToBusOnly; // 0x0
    }; // Size: 0x1
    Params_SetOutputToBusOnly params{};
    params.bInOutputToBusOnly = (bool)bInOutputToBusOnly;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetLowPassFilterFrequency"));
    struct Params_SetLowPassFilterFrequency {
        float InLowPassFilterFrequency; // 0x0
    }; // Size: 0x4
    Params_SetLowPassFilterFrequency params{};
    params.InLowPassFilterFrequency = (float)InLowPassFilterFrequency;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetLowPassFilterEnabled"));
    struct Params_SetLowPassFilterEnabled {
        bool InLowPassFilterEnabled; // 0x0
    }; // Size: 0x1
    Params_SetLowPassFilterEnabled params{};
    params.InLowPassFilterEnabled = (bool)InLowPassFilterEnabled;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetFloatParameter(FName InName, float InFloat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetFloatParameter"));
    struct Params_SetFloatParameter {
        FName InName; // 0x0
        float InFloat; // 0x8
    }; // Size: 0xc
    Params_SetFloatParameter params{};
    params.InName = (FName)InName;
    params.InFloat = (float)InFloat;
    ProcessEvent(func, &params);
}
bool UAudioComponent::GetCookedEnvelopeData(float& OutEnvelopeData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.GetCookedEnvelopeData"));
    struct Params_GetCookedEnvelopeData {
        float OutEnvelopeData; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetCookedEnvelopeData params{};
    params.OutEnvelopeData = (float)OutEnvelopeData;
    ProcessEvent(func, &params);
    OutEnvelopeData = params.OutEnvelopeData;
    return (bool)params.ReturnValue;
}
bool UAudioComponent::GetCookedFFTData(TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.GetCookedFFTData"));
    struct Params_GetCookedFFTData {
        TArray<float> FrequenciesToGet; // 0x0
        TArray<FSoundWaveSpectralData> OutSoundWaveSpectralData; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetCookedFFTData params{};
    params.FrequenciesToGet = (TArray<float>)FrequenciesToGet;
    params.OutSoundWaveSpectralData = (TArray<FSoundWaveSpectralData>)OutSoundWaveSpectralData;
    ProcessEvent(func, &params);
    FrequenciesToGet = params.FrequenciesToGet;
    OutSoundWaveSpectralData = params.OutSoundWaveSpectralData;
    return (bool)params.ReturnValue;
}
void UAudioComponent::SetBoolParameter(FName InName, bool InBool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetBoolParameter"));
    struct Params_SetBoolParameter {
        FName InName; // 0x0
        bool InBool; // 0x8
    }; // Size: 0x9
    Params_SetBoolParameter params{};
    params.InName = (FName)InName;
    params.InBool = (bool)InBool;
    ProcessEvent(func, &params);
}
void UAudioComponent::SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetAudioBusSendPreEffect"));
    struct Params_SetAudioBusSendPreEffect {
        UAudioBus* AudioBus; // 0x0
        float AudioBusSendLevel; // 0x8
    }; // Size: 0xc
    Params_SetAudioBusSendPreEffect params{};
    params.AudioBus = (UAudioBus*)AudioBus;
    params.AudioBusSendLevel = (float)AudioBusSendLevel;
    ProcessEvent(func, &params);
}
void UAudioComponent::AdjustAttenuation(FSoundAttenuationSettings& InAttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.AdjustAttenuation"));
    struct Params_AdjustAttenuation {
        FSoundAttenuationSettings InAttenuationSettings; // 0x0
    }; // Size: 0x3a0
    Params_AdjustAttenuation params{};
    params.InAttenuationSettings = (FSoundAttenuationSettings)InAttenuationSettings;
    ProcessEvent(func, &params);
    InAttenuationSettings = params.InAttenuationSettings;
}
void UAudioComponent::SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.SetAudioBusSendPostEffect"));
    struct Params_SetAudioBusSendPostEffect {
        UAudioBus* AudioBus; // 0x0
        float AudioBusSendLevel; // 0x8
    }; // Size: 0xc
    Params_SetAudioBusSendPostEffect params{};
    params.AudioBus = (UAudioBus*)AudioBus;
    params.AudioBusSendLevel = (float)AudioBusSendLevel;
    ProcessEvent(func, &params);
}
bool UAudioComponent::HasCookedAmplitudeEnvelopeData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.HasCookedAmplitudeEnvelopeData"));
    struct Params_HasCookedAmplitudeEnvelopeData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCookedAmplitudeEnvelopeData params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAudioComponent::PlayQuantized(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle, FQuartzQuantizationBoundary& InQuantizationBoundary) {}
void UAudioComponent::Play(float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.Play"));
    struct Params_Play {
        float StartTime; // 0x0
    }; // Size: 0x4
    Params_Play params{};
    params.StartTime = (float)StartTime;
    ProcessEvent(func, &params);
}
bool UAudioComponent::IsVirtualized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.IsVirtualized"));
    struct Params_IsVirtualized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVirtualized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAudioComponent::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAudioComponent::HasCookedFFTData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.HasCookedFFTData"));
    struct Params_HasCookedFFTData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCookedFFTData params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EAudioComponentPlayState UAudioComponent::GetPlayState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.GetPlayState"));
    struct Params_GetPlayState {
        EAudioComponentPlayState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayState params{};
    ProcessEvent(func, &params);
    return (EAudioComponentPlayState)params.ReturnValue;
}
bool UAudioComponent::GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.GetCookedFFTDataForAllPlayingSounds"));
    struct Params_GetCookedFFTDataForAllPlayingSounds {
        TArray<FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetCookedFFTDataForAllPlayingSounds params{};
    params.OutSoundWaveSpectralData = (TArray<FSoundWaveSpectralDataPerSound>)OutSoundWaveSpectralData;
    ProcessEvent(func, &params);
    OutSoundWaveSpectralData = params.OutSoundWaveSpectralData;
    return (bool)params.ReturnValue;
}
bool UAudioComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.BP_GetAttenuationSettingsToApply"));
    struct Params_BP_GetAttenuationSettingsToApply {
        FSoundAttenuationSettings OutAttenuationSettings; // 0x0
        bool ReturnValue; // 0x3a0
    }; // Size: 0x3a1
    Params_BP_GetAttenuationSettingsToApply params{};
    params.OutAttenuationSettings = (FSoundAttenuationSettings)OutAttenuationSettings;
    ProcessEvent(func, &params);
    OutAttenuationSettings = params.OutAttenuationSettings;
    return (bool)params.ReturnValue;
}
bool UAudioComponent::GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.GetCookedEnvelopeDataForAllPlayingSounds"));
    struct Params_GetCookedEnvelopeDataForAllPlayingSounds {
        TArray<FSoundWaveEnvelopeDataPerSound> OutEnvelopeData; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetCookedEnvelopeDataForAllPlayingSounds params{};
    params.OutEnvelopeData = (TArray<FSoundWaveEnvelopeDataPerSound>)OutEnvelopeData;
    ProcessEvent(func, &params);
    OutEnvelopeData = params.OutEnvelopeData;
    return (bool)params.ReturnValue;
}
void UAudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.FadeIn"));
    struct Params_FadeIn {
        float FadeInDuration; // 0x0
        float FadeVolumeLevel; // 0x4
        float StartTime; // 0x8
        EAudioFaderCurve FadeCurve; // 0xc
    }; // Size: 0xd
    Params_FadeIn params{};
    params.FadeInDuration = (float)FadeInDuration;
    params.FadeVolumeLevel = (float)FadeVolumeLevel;
    params.StartTime = (float)StartTime;
    params.FadeCurve = (EAudioFaderCurve)FadeCurve;
    ProcessEvent(func, &params);
}
void UAudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AudioComponent.AdjustVolume"));
    struct Params_AdjustVolume {
        float AdjustVolumeDuration; // 0x0
        float AdjustVolumeLevel; // 0x4
        EAudioFaderCurve FadeCurve; // 0x8
    }; // Size: 0x9
    Params_AdjustVolume params{};
    params.AdjustVolumeDuration = (float)AdjustVolumeDuration;
    params.AdjustVolumeLevel = (float)AdjustVolumeLevel;
    params.FadeCurve = (EAudioFaderCurve)FadeCurve;
    ProcessEvent(func, &params);
}
