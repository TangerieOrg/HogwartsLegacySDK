#include "FSourceEffectDynamicsProcessorSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectDynamicsProcessorPreset.hpp"
USourceEffectDynamicsProcessorPreset* USourceEffectDynamicsProcessorPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset");
    return (USourceEffectDynamicsProcessorPreset*)res;
}
void USourceEffectDynamicsProcessorPreset::SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectDynamicsProcessorSettings InSettings; // 0x0
    }; // Size: 0x28
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectDynamicsProcessorSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
