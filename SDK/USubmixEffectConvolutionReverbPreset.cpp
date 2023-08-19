#include "ESubmixEffectConvolutionReverbBlockSize.hpp"
#include "FSubmixEffectConvolutionReverbSettings.hpp"
#include "UAudioImpulseResponse.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectConvolutionReverbPreset.hpp"
USubmixEffectConvolutionReverbPreset* USubmixEffectConvolutionReverbPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset");
    return (USubmixEffectConvolutionReverbPreset*)res;
}
void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse"));
    struct Params_SetImpulseResponse {
        UAudioImpulseResponse* InImpulseResponse; // 0x0
    }; // Size: 0x8
    Params_SetImpulseResponse params{};
    params.InImpulseResponse = (UAudioImpulseResponse*)InImpulseResponse;
    ProcessEvent(func, &params);
}
void USubmixEffectConvolutionReverbPreset::SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectConvolutionReverbSettings InSettings; // 0x0
    }; // Size: 0x28
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectConvolutionReverbSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
