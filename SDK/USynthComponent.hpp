#pragma once
#include <cstdint>
#include "FSoundAttenuationSettings.hpp"
#include "FSoundSourceBusSendInfo.hpp"
#include "FSoundSubmixSendInfo.hpp"
#include "USceneComponent.hpp"
class USoundAttenuation;
class USoundSubmixBase;
class USoundConcurrency;
class USoundClass;
class USoundEffectSourcePresetChain;
class USynthSound;
class UAudioComponent;
#pragma pack(push, 1)
class USynthComponent : public USceneComponent {
public:
    USoundAttenuation* AttenuationSettings; // 0x220
    FSoundAttenuationSettings AttenuationOverrides; // 0x228
    USoundConcurrency* ConcurrencySettings; // 0x5c8
    char pad_5d0[0x50];
    USoundClass* SoundClass; // 0x620
    USoundEffectSourcePresetChain* SourceEffectChain; // 0x628
    USoundSubmixBase* SoundSubmix; // 0x630
    TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x638
    TArray<FSoundSourceBusSendInfo> BusSends; // 0x648
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x658
    uint8_t bIsUISound : 1; // 0x668
    uint8_t bIsPreviewSound : 1; // 0x668
    uint8_t pad_bitfield_668_2 : 6;
    char pad_669[0x3];
    int32_t EnvelopeFollowerAttackTime; // 0x66c
    int32_t EnvelopeFollowerReleaseTime; // 0x670
    char pad_674[0x34];
    USynthSound* Synth; // 0x6a8
    UAudioComponent* AudioComponent; // 0x6b0
    char pad_6b8[0x28];
    static USynthComponent* StaticClass();
    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    bool IsPlaying();
}; // Size: 0x6e0
#pragma pack(pop)
