#include "FSourceEffectPhaserSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectPhaserPreset.hpp"
USourceEffectPhaserPreset* USourceEffectPhaserPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectPhaserPreset");
    return (USourceEffectPhaserPreset*)res;
}
void USourceEffectPhaserPreset::SetSettings(FSourceEffectPhaserSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectPhaserSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectPhaserSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
