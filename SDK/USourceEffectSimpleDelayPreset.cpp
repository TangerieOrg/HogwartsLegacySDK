#include "FSourceEffectSimpleDelaySettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectSimpleDelayPreset.hpp"
USourceEffectSimpleDelayPreset* USourceEffectSimpleDelayPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectSimpleDelayPreset");
    return (USourceEffectSimpleDelayPreset*)res;
}
void USourceEffectSimpleDelayPreset::SetSettings(FSourceEffectSimpleDelaySettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectSimpleDelaySettings InSettings; // 0x0
    }; // Size: 0x18
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectSimpleDelaySettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
