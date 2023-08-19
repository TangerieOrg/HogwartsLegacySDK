#include "FSourceEffectRingModulationSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectRingModulationPreset.hpp"
void USourceEffectRingModulationPreset::SetSettings(FSourceEffectRingModulationSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectRingModulationSettings InSettings; // 0x0
    }; // Size: 0x20
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectRingModulationSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
USourceEffectRingModulationPreset* USourceEffectRingModulationPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectRingModulationPreset");
    return (USourceEffectRingModulationPreset*)res;
}
