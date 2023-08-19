#include "FSubmixEffectSubmixEQSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectSubmixEQPreset.hpp"
USubmixEffectSubmixEQPreset* USubmixEffectSubmixEQPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.SubmixEffectSubmixEQPreset");
    return (USubmixEffectSubmixEQPreset*)res;
}
void USubmixEffectSubmixEQPreset::SetSettings(FSubmixEffectSubmixEQSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectSubmixEQSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectSubmixEQSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
