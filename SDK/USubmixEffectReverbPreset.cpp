#include "FSubmixEffectReverbSettings.hpp"
#include "UFunction.hpp"
#include "UReverbEffect.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectReverbPreset.hpp"
USubmixEffectReverbPreset* USubmixEffectReverbPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.SubmixEffectReverbPreset");
    return (USubmixEffectReverbPreset*)res;
}
void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));
    struct Params_SetSettingsWithReverbEffect {
        UReverbEffect* InReverbEffect; // 0x0
        float WetLevel; // 0x8
        float DryLevel; // 0xc
    }; // Size: 0x10
    Params_SetSettingsWithReverbEffect params{};
    params.InReverbEffect = (UReverbEffect*)InReverbEffect;
    params.WetLevel = (float)WetLevel;
    params.DryLevel = (float)DryLevel;
    ProcessEvent(func, &params);
}
void USubmixEffectReverbPreset::SetSettings(FSubmixEffectReverbSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectReverbSettings InSettings; // 0x0
    }; // Size: 0x40
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectReverbSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
