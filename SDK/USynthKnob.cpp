#include "FSynthKnobStyle.hpp"
#include "UFunction.hpp"
#include "USynthKnob.hpp"
#include "UWidget.hpp"
void USynthKnob::SetLocked(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthKnob.SetLocked"));
    struct Params_SetLocked {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetLocked params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
USynthKnob* USynthKnob::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SynthKnob");
    return (USynthKnob*)res;
}
void USynthKnob::SetValue(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthKnob.SetValue"));
    struct Params_SetValue {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetValue params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USynthKnob::SetStepSize(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthKnob.SetStepSize"));
    struct Params_SetStepSize {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetStepSize params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
float USynthKnob::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthKnob.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
