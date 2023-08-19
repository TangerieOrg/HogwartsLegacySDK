#include "FSubmixEffectFlexiverbSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectFlexiverbPreset.hpp"
USubmixEffectFlexiverbPreset* USubmixEffectFlexiverbPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectFlexiverbPreset");
    return (USubmixEffectFlexiverbPreset*)res;
}
void USubmixEffectFlexiverbPreset::SetSettings(FSubmixEffectFlexiverbSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectFlexiverbSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectFlexiverbSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
