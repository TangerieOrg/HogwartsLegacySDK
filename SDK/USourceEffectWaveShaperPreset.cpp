#include "FSourceEffectWaveShaperSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectWaveShaperPreset.hpp"
USourceEffectWaveShaperPreset* USourceEffectWaveShaperPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectWaveShaperPreset");
    return (USourceEffectWaveShaperPreset*)res;
}
void USourceEffectWaveShaperPreset::SetSettings(FSourceEffectWaveShaperSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectWaveShaperSettings InSettings; // 0x0
    }; // Size: 0x8
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectWaveShaperSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
