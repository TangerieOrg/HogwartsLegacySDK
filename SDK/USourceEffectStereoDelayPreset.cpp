#include "FSourceEffectStereoDelaySettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectStereoDelayPreset.hpp"
USourceEffectStereoDelayPreset* USourceEffectStereoDelayPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectStereoDelayPreset");
    return (USourceEffectStereoDelayPreset*)res;
}
void USourceEffectStereoDelayPreset::SetSettings(FSourceEffectStereoDelaySettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectStereoDelaySettings InSettings; // 0x0
    }; // Size: 0x24
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectStereoDelaySettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
