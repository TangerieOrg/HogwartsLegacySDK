#include "FSubmixEffectDelaySettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectDelayPreset.hpp"
USubmixEffectDelayPreset* USubmixEffectDelayPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectDelayPreset");
    return (USubmixEffectDelayPreset*)res;
}
void USubmixEffectDelayPreset::SetSettings(FSubmixEffectDelaySettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectDelaySettings InSettings; // 0x0
    }; // Size: 0xc
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectDelaySettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void USubmixEffectDelayPreset::SetInterpolationTime(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime"));
    struct Params_SetInterpolationTime {
        float Time; // 0x0
    }; // Size: 0x4
    Params_SetInterpolationTime params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds"));
    struct Params_GetMaxDelayInMilliseconds {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxDelayInMilliseconds params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USubmixEffectDelayPreset::SetDelay(float Length) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay"));
    struct Params_SetDelay {
        float Length; // 0x0
    }; // Size: 0x4
    Params_SetDelay params{};
    params.Length = (float)Length;
    ProcessEvent(func, &params);
}
