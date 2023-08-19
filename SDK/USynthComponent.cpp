#include "FSoundAttenuationSettings.hpp"
#include "FSoundSourceBusSendInfo.hpp"
#include "FSoundSubmixSendInfo.hpp"
#include "UAudioComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USoundAttenuation.hpp"
#include "USoundClass.hpp"
#include "USoundConcurrency.hpp"
#include "USoundEffectSourcePresetChain.hpp"
#include "USoundSubmixBase.hpp"
#include "USynthComponent.hpp"
#include "USynthSound.hpp"
USynthComponent* USynthComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.SynthComponent");
    return (USynthComponent*)res;
}
void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled"));
    struct Params_SetLowPassFilterEnabled {
        bool InLowPassFilterEnabled; // 0x0
    }; // Size: 0x1
    Params_SetLowPassFilterEnabled params{};
    params.InLowPassFilterEnabled = (bool)InLowPassFilterEnabled;
    ProcessEvent(func, &params);
}
void USynthComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void USynthComponent::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency"));
    struct Params_SetLowPassFilterFrequency {
        float InLowPassFilterFrequency; // 0x0
    }; // Size: 0x4
    Params_SetLowPassFilterFrequency params{};
    params.InLowPassFilterFrequency = (float)InLowPassFilterFrequency;
    ProcessEvent(func, &params);
}
void USynthComponent::SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.SetSubmixSend"));
    struct Params_SetSubmixSend {
        USoundSubmixBase* Submix; // 0x0
        float SendLevel; // 0x8
    }; // Size: 0xc
    Params_SetSubmixSend params{};
    params.Submix = (USoundSubmixBase*)Submix;
    params.SendLevel = (float)SendLevel;
    ProcessEvent(func, &params);
}
void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier"));
    struct Params_SetVolumeMultiplier {
        float VolumeMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetVolumeMultiplier params{};
    params.VolumeMultiplier = (float)VolumeMultiplier;
    ProcessEvent(func, &params);
}
void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly"));
    struct Params_SetOutputToBusOnly {
        bool bInOutputToBusOnly; // 0x0
    }; // Size: 0x1
    Params_SetOutputToBusOnly params{};
    params.bInOutputToBusOnly = (bool)bInOutputToBusOnly;
    ProcessEvent(func, &params);
}
bool USynthComponent::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SynthComponent.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
