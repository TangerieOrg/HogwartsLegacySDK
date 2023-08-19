#include "FSourceEffectFoldbackDistortionSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectFoldbackDistortionPreset.hpp"
USourceEffectFoldbackDistortionPreset* USourceEffectFoldbackDistortionPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset");
    return (USourceEffectFoldbackDistortionPreset*)res;
}
void USourceEffectFoldbackDistortionPreset::SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectFoldbackDistortionSettings InSettings; // 0x0
    }; // Size: 0xc
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectFoldbackDistortionSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
