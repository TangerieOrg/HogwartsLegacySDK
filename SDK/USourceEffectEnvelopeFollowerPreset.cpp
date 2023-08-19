#include "FSourceEffectEnvelopeFollowerSettings.hpp"
#include "UEnvelopeFollowerListener.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USourceEffectEnvelopeFollowerPreset.hpp"
USourceEffectEnvelopeFollowerPreset* USourceEffectEnvelopeFollowerPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset");
    return (USourceEffectEnvelopeFollowerPreset*)res;
}
void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener"));
    struct Params_UnregisterEnvelopeFollowerListener {
        UEnvelopeFollowerListener* EnvelopeFollowerListener; // 0x0
    }; // Size: 0x8
    Params_UnregisterEnvelopeFollowerListener params{};
    params.EnvelopeFollowerListener = (UEnvelopeFollowerListener*)EnvelopeFollowerListener;
    ProcessEvent(func, &params);
}
void USourceEffectEnvelopeFollowerPreset::SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectEnvelopeFollowerSettings InSettings; // 0x0
    }; // Size: 0xc
    Params_SetSettings params{};
    params.InSettings = (FSourceEffectEnvelopeFollowerSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener"));
    struct Params_RegisterEnvelopeFollowerListener {
        UEnvelopeFollowerListener* EnvelopeFollowerListener; // 0x0
    }; // Size: 0x8
    Params_RegisterEnvelopeFollowerListener params{};
    params.EnvelopeFollowerListener = (UEnvelopeFollowerListener*)EnvelopeFollowerListener;
    ProcessEvent(func, &params);
}
