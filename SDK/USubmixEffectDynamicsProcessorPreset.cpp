#include "FSubmixEffectDynamicsProcessorSettings.hpp"
#include "UAudioBus.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USoundSubmix.hpp"
#include "USubmixEffectDynamicsProcessorPreset.hpp"
USubmixEffectDynamicsProcessorPreset* USubmixEffectDynamicsProcessorPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset");
    return (USubmixEffectDynamicsProcessorPreset*)res;
}
void USubmixEffectDynamicsProcessorPreset::SetAudioBus(UAudioBus* AudioBus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus"));
    struct Params_SetAudioBus {
        UAudioBus* AudioBus; // 0x0
    }; // Size: 0x8
    Params_SetAudioBus params{};
    params.AudioBus = (UAudioBus*)AudioBus;
    ProcessEvent(func, &params);
}
void USubmixEffectDynamicsProcessorPreset::SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectDynamicsProcessorSettings Settings; // 0x0
    }; // Size: 0x60
    Params_SetSettings params{};
    params.Settings = (FSubmixEffectDynamicsProcessorSettings)Settings;
    ProcessEvent(func, &params);
    Settings = params.Settings;
}
void USubmixEffectDynamicsProcessorPreset::ResetKey() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey"));
    struct Params_ResetKey {
    }; // Size: 0x0
    Params_ResetKey params{};
    ProcessEvent(func, &params);
}
void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(USoundSubmix* Submix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix"));
    struct Params_SetExternalSubmix {
        USoundSubmix* Submix; // 0x0
    }; // Size: 0x8
    Params_SetExternalSubmix params{};
    params.Submix = (USoundSubmix*)Submix;
    ProcessEvent(func, &params);
}
