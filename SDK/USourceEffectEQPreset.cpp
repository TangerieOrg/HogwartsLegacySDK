#include "FSourceEffectEQSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectEQPreset.hpp"
USourceEffectEQPreset* USourceEffectEQPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectEQPreset");
    return (USourceEffectEQPreset*)res;
}
void USourceEffectEQPreset::SetSettings(FSourceEffectEQSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectEQPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectEQSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectEQSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
