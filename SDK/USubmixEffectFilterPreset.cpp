#include "ESubmixFilterAlgorithm.hpp"
#include "ESubmixFilterType.hpp"
#include "FSubmixEffectFilterSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSubmixPreset.hpp"
#include "USubmixEffectFilterPreset.hpp"
USubmixEffectFilterPreset* USubmixEffectFilterPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SubmixEffectFilterPreset");
    return (USubmixEffectFilterPreset*)res;
}
void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm"));
    struct Params_SetFilterAlgorithm {
        ESubmixFilterAlgorithm InAlgorithm; // 0x0
    }; // Size: 0x1
    Params_SetFilterAlgorithm params{};
    params.InAlgorithm = (ESubmixFilterAlgorithm)InAlgorithm;
    ProcessEvent(func, &params);
}
void USubmixEffectFilterPreset::SetSettings(FSubmixEffectFilterSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings"));
    struct Params_SetSettings {
        FSubmixEffectFilterSettings InSettings; // 0x0
    }; // Size: 0xc
    Params_SetSettings params{};
    params.InSettings = (FSubmixEffectFilterSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod"));
    struct Params_SetFilterCutoffFrequencyMod {
        float InFrequency; // 0x0
    }; // Size: 0x4
    Params_SetFilterCutoffFrequencyMod params{};
    params.InFrequency = (float)InFrequency;
    ProcessEvent(func, &params);
}
void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType"));
    struct Params_SetFilterType {
        ESubmixFilterType InType; // 0x0
    }; // Size: 0x1
    Params_SetFilterType params{};
    params.InType = (ESubmixFilterType)InType;
    ProcessEvent(func, &params);
}
void USubmixEffectFilterPreset::SetFilterQMod(float InQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod"));
    struct Params_SetFilterQMod {
        float InQ; // 0x0
    }; // Size: 0x4
    Params_SetFilterQMod params{};
    params.InQ = (float)InQ;
    ProcessEvent(func, &params);
}
void USubmixEffectFilterPreset::SetFilterQ(float InQ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ"));
    struct Params_SetFilterQ {
        float InQ; // 0x0
    }; // Size: 0x4
    Params_SetFilterQ params{};
    params.InQ = (float)InQ;
    ProcessEvent(func, &params);
}
void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency"));
    struct Params_SetFilterCutoffFrequency {
        float InFrequency; // 0x0
    }; // Size: 0x4
    Params_SetFilterCutoffFrequency params{};
    params.InFrequency = (float)InFrequency;
    ProcessEvent(func, &params);
}
