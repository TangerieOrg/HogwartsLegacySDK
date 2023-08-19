#pragma once
#include <cstdint>
#include "FForceFeedbackAttenuationSettings.hpp"
#include "USceneComponent.hpp"
class UForceFeedbackEffect;
class UForceFeedbackAttenuation;
#pragma pack(push, 1)
class UForceFeedbackComponent : public USceneComponent {
public:
    uint8_t bAutoDestroy : 1; // 0x220
    uint8_t bStopWhenOwnerDestroyed : 1; // 0x220
    uint8_t bLooping : 1; // 0x220
    uint8_t bIgnoreTimeDilation : 1; // 0x220
    uint8_t bOverrideAttenuation : 1; // 0x220
    uint8_t pad_bitfield_220_5 : 3;
    char pad_221[0x3];
    float IntensityMultiplier; // 0x224
    UForceFeedbackAttenuation* AttenuationSettings; // 0x228
    FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x230
    char pad_2e0[0x20];
    static UForceFeedbackComponent* StaticClass();
    void Stop();
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    void SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect);
    void Play(float StartTime);
    bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings);
    void AdjustAttenuation(FForceFeedbackAttenuationSettings& InAttenuationSettings);
}; // Size: 0x300
#pragma pack(pop)
