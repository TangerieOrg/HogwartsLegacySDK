#include "FSourceEffectMidSideSpreaderSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectMidSideSpreaderPreset.hpp"
void USourceEffectMidSideSpreaderPreset::SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectMidSideSpreaderSettings InSettings; // 0x0
    }; // Size: 0x8
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectMidSideSpreaderSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
USourceEffectMidSideSpreaderPreset* USourceEffectMidSideSpreaderPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset");
    return (USourceEffectMidSideSpreaderPreset*)res;
}
