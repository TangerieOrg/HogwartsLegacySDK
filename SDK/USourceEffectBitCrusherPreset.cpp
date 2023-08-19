#include "FSourceEffectBitCrusherBaseSettings.hpp"
#include "FSourceEffectBitCrusherSettings.hpp"
#include "UFunction.hpp"
#include "USoundEffectSourcePreset.hpp"
#include "USoundModulatorBase.hpp"
#include "USourceEffectBitCrusherPreset.hpp"
USourceEffectBitCrusherPreset* USourceEffectBitCrusherPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SourceEffectBitCrusherPreset");
    return (USourceEffectBitCrusherPreset*)res;
}
void USourceEffectBitCrusherPreset::SetBits(float Bits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits"));
    struct Params_SetBits {
        float Bits; // 0x0
    }; // Size: 0x4
    Params_SetBits params{};
    params.Bits = (float)Bits;
    ProcessEvent(func, &params);
}
void USourceEffectBitCrusherPreset::SetSettings(FSourceEffectBitCrusherBaseSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings"));
    struct Params_SetSettings {
        FSourceEffectBitCrusherBaseSettings Settings; // 0x0
    }; // Size: 0x8
    Params_SetSettings params{};
    params.Settings = (FSourceEffectBitCrusherBaseSettings)Settings;
    ProcessEvent(func, &params);
    Settings = params.Settings;
}
void USourceEffectBitCrusherPreset::SetSampleRateModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator"));
    struct Params_SetSampleRateModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetSampleRateModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate"));
    struct Params_SetSampleRate {
        float SampleRate; // 0x0
    }; // Size: 0x4
    Params_SetSampleRate params{};
    params.SampleRate = (float)SampleRate;
    ProcessEvent(func, &params);
}
void USourceEffectBitCrusherPreset::SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings"));
    struct Params_SetModulationSettings {
        FSourceEffectBitCrusherSettings ModulationSettings; // 0x0
    }; // Size: 0x30
    Params_SetModulationSettings params{};
    params.ModulationSettings = (FSourceEffectBitCrusherSettings)ModulationSettings;
    ProcessEvent(func, &params);
    ModulationSettings = params.ModulationSettings;
}
void USourceEffectBitCrusherPreset::SetBitModulator(USoundModulatorBase* Modulator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator"));
    struct Params_SetBitModulator {
        USoundModulatorBase* Modulator; // 0x0
    }; // Size: 0x8
    Params_SetBitModulator params{};
    params.Modulator = (USoundModulatorBase*)Modulator;
    ProcessEvent(func, &params);
}
