#include "FSourceEffectPannerSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectPannerPreset.hpp"
USourceEffectPannerPreset* USourceEffectPannerPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectPannerPreset");
    return (USourceEffectPannerPreset*)res;
}
void USourceEffectPannerPreset::SetSettings(FSourceEffectPannerSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectPannerSettings InSettings; // 0x0
    }; // Size: 0x8
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectPannerSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
