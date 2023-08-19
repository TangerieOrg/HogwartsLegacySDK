#pragma once
#include <cstdint>
#include "EAttachmentRule.hpp"
#include "EAudioComponentPlayState.hpp"
#include "EAudioFaderCurve.hpp"
#include "FAudioComponentParam.hpp"
#include "FSoundAttenuationSettings.hpp"
#include "FSoundModulationDefaultRoutingSettings.hpp"
#include "FSoundWaveEnvelopeDataPerSound.hpp"
#include "FSoundWaveSpectralData.hpp"
#include "FSoundWaveSpectralDataPerSound.hpp"
#include "USceneComponent.hpp"
class USoundSubmixBase;
class UAudioBus;
class USoundAttenuation;
class USoundBase;
class USoundClass;
class USoundEffectSourcePresetChain;
class USoundWave;
class UObject;
class USoundConcurrency;
struct FQuartzQuantizationBoundary;
class USoundSourceBus;
class UQuartzClockHandle;
#pragma pack(push, 1)
class UAudioComponent : public USceneComponent {
public:
    TArray<FAudioComponentParam> InstanceParameters; // 0x220
    USoundClass* SoundClassOverride; // 0x230
    uint8_t bAutoDestroy : 1; // 0x238
    uint8_t bStopWhenOwnerDestroyed : 1; // 0x238
    uint8_t bShouldRemainActiveIfDropped : 1; // 0x238
    uint8_t bAllowSpatialization : 1; // 0x238
    uint8_t bOverrideAttenuation : 1; // 0x238
    uint8_t bOverrideSubtitlePriority : 1; // 0x238
    uint8_t bIsUISound : 1; // 0x238
    uint8_t bEnableLowPassFilter : 1; // 0x238
    uint8_t bOverridePriority : 1; // 0x239
    uint8_t bSuppressSubtitles : 1; // 0x239
    uint8_t pad_bitfield_239_2 : 6;
    uint8_t pad_bitfield_23a_0 : 4;
    uint8_t bAutoManageAttachment : 1; // 0x23a
    uint8_t pad_bitfield_23a_5 : 3;
    char pad_23b[0x5];
    FName AudioComponentUserID; // 0x240
    float PitchModulationMin; // 0x248
    float PitchModulationMax; // 0x24c
    float VolumeModulationMin; // 0x250
    float VolumeModulationMax; // 0x254
    float VolumeMultiplier; // 0x258
    int32_t EnvelopeFollowerAttackTime; // 0x25c
    int32_t EnvelopeFollowerReleaseTime; // 0x260
    float Priority; // 0x264
    float SubtitlePriority; // 0x268
    char pad_26c[0x4];
    USoundEffectSourcePresetChain* SourceEffectChain; // 0x270
    float PitchMultiplier; // 0x278
    float LowPassFilterFrequency; // 0x27c
    char pad_280[0x8];
    USoundAttenuation* AttenuationSettings; // 0x288
    FSoundAttenuationSettings AttenuationOverrides; // 0x290
    USoundConcurrency* ConcurrencySettings; // 0x630
    char pad_638[0x5c];
    EAttachmentRule AutoAttachLocationRule; // 0x694
    EAttachmentRule AutoAttachRotationRule; // 0x695
    EAttachmentRule AutoAttachScaleRule; // 0x696
    char pad_697[0x1];
    FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x698
    char pad_6e0[0x108];
    FName AutoAttachSocketName; // 0x7e8
    char pad_7f0[0x90];
    static UAudioComponent* StaticClass();
    void StopDelayed(float DelayTime);
    void Stop();
    void SetWaveParameter(FName InName, USoundWave* InWave);
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    void SetUISound(bool bInUISound);
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSound(USoundBase* NewSound);
    void SetPitchMultiplier(float NewPitchMultiplier);
    void SetPaused(bool bPause);
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    void SetIntParameter(FName InName, int32_t inInt);
    void SetFloatParameter(FName InName, float InFloat);
    void SetBoolParameter(FName InName, bool InBool);
    void SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel);
    void SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel);
    void PlayQuantized(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle, FQuartzQuantizationBoundary& InQuantizationBoundary);
    void Play(float StartTime);
    bool IsVirtualized();
    bool IsPlaying();
    bool HasCookedFFTData();
    bool HasCookedAmplitudeEnvelopeData();
    EAudioComponentPlayState GetPlayState();
    bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData);
    bool GetCookedFFTData(TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData);
    bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData);
    bool GetCookedEnvelopeData(float& OutEnvelopeData);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve);
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve);
    void AdjustAttenuation(FSoundAttenuationSettings& InAttenuationSettings);
}; // Size: 0x880
#pragma pack(pop)
