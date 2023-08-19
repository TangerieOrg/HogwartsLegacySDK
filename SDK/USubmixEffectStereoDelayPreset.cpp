#include "FSubmixEffectStereoDelaySettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectStereoDelayPreset.hpp"
USubmixEffectStereoDelayPreset* USubmixEffectStereoDelayPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectStereoDelayPreset");
    return (USubmixEffectStereoDelayPreset*)res;
}
void USubmixEffectStereoDelayPreset::SetSettings(FSubmixEffectStereoDelaySettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectStereoDelaySettings InSettings; // 0x0
    }; // Size: 0x24
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectStereoDelaySettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
