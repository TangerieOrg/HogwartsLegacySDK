#include "FSubmixEffectMultibandCompressorSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectMultibandCompressorPreset.hpp"
USubmixEffectMultibandCompressorPreset* USubmixEffectMultibandCompressorPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset");
    return (USubmixEffectMultibandCompressorPreset*)res;
}
void USubmixEffectMultibandCompressorPreset::SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectMultibandCompressorSettings InSettings; // 0x0
    }; // Size: 0x20
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectMultibandCompressorSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
