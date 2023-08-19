#include "FSourceEffectChorusBaseSettings.hpp"
#include "FSourceEffectChorusSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USoundModulatorBase.hpp"
#include "USourceEffectChorusPreset.hpp"
USourceEffectChorusPreset* USourceEffectChorusPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectChorusPreset");
    return (USourceEffectChorusPreset*)res;
}
void USourceEffectChorusPreset::SetWetModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator"));
    struct Params_SetWetModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetWetModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetFrequencyModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator"));
    struct Params_SetFrequencyModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetFrequencyModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetDepth(float Depth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth"));
    struct Params_SetDepth {
        float Depth; // 0x0
    }; // Size: 0x4
    Params_SetDepth params{};
    params.Depth = (float)Depth;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetWet(float WetAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetWet"));
    struct Params_SetWet {
        float WetAmount; // 0x0
    }; // Size: 0x4
    Params_SetWet params{};
    params.WetAmount = (float)WetAmount;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetSpreadModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator"));
    struct Params_SetSpreadModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetSpreadModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetSpread(float Spread) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread"));
    struct Params_SetSpread {
        float Spread; // 0x0
    }; // Size: 0x4
    Params_SetSpread params{};
    params.Spread = (float)Spread;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetSettings(FSourceEffectChorusBaseSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectChorusBaseSettings Settings; // 0x0
    }; // Size: 0x18
    Params_SetSettings params{};
    params.Settings = (FSourceEffectChorusBaseSettings)Settings;
    ProcessEvent(func, &params);
    Settings = params.Settings;
}
void USourceEffectChorusPreset::SetDepthModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator"));
    struct Params_SetDepthModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetDepthModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings"));
    struct Params_SetModulationSettings {
        FSourceEffectChorusSettings ModulationSettings; // 0x0
    }; // Size: 0x78
    Params_SetModulationSettings params{};
    params.ModulationSettings = (FSourceEffectChorusSettings)ModulationSettings;
    ProcessEvent(func, &params);
    ModulationSettings = params.ModulationSettings;
}
void USourceEffectChorusPreset::SetFrequency(float Frequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency"));
    struct Params_SetFrequency {
        float Frequency; // 0x0
    }; // Size: 0x4
    Params_SetFrequency params{};
    params.Frequency = (float)Frequency;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetFeedbackModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator"));
    struct Params_SetFeedbackModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetFeedbackModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetFeedback(float Feedback) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback"));
    struct Params_SetFeedback {
        float Feedback; // 0x0
    }; // Size: 0x4
    Params_SetFeedback params{};
    params.Feedback = (float)Feedback;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetDryModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator"));
    struct Params_SetDryModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetDryModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectChorusPreset::SetDry(float DryAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectChorusPreset.SetDry"));
    struct Params_SetDry {
        float DryAmount; // 0x0
    }; // Size: 0x4
    Params_SetDry params{};
    params.DryAmount = (float)DryAmount;
    ProcessEvent(func, &params);
}
