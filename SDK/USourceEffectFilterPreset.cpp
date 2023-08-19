#include "FSourceEffectFilterSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectFilterPreset.hpp"
USourceEffectFilterPreset* USourceEffectFilterPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectFilterPreset");
    return (USourceEffectFilterPreset*)res;
}
void USourceEffectFilterPreset::SetSettings(FSourceEffectFilterSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectFilterSettings InSettings; // 0x0
    }; // Size: 0x20
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectFilterSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
