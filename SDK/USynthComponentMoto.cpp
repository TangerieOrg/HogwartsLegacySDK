#include "FMotoSynthRuntimeSettings.hpp"
#include "UFunction.hpp"
#include "UMotoSynthPreset.hpp"
#include "USynthComponent.hpp"
#include "USynthComponentMoto.hpp"
void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MotoSynth.SynthComponentMoto.SetRPM"));
    struct Params_SetRPM {
        float InRPM; // 0x0
        float InTimeSec; // 0x4
    }; // Size: 0x8
    Params_SetRPM params{};
    params.InRPM = (float)InRPM;
    params.InTimeSec = (float)InTimeSec;
    ProcessEvent(func, &params);
}
USynthComponentMoto* USynthComponentMoto::StaticClass() {
    static auto res = find_uobject("Class /Script/MotoSynth.SynthComponentMoto");
    return (USynthComponentMoto*)res;
}
void USynthComponentMoto::SetSettings(FMotoSynthRuntimeSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MotoSynth.SynthComponentMoto.SetSettings"));
    struct Params_SetSettings {
        FMotoSynthRuntimeSettings InSettings; // 0x0
    }; // Size: 0x68
    Params_SetSettings params{};
    params.InSettings = (FMotoSynthRuntimeSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
bool USynthComponentMoto::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MotoSynth.SynthComponentMoto.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USynthComponentMoto::GetRPMRange(float& OutMinRPM, float& OutMaxRPM) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MotoSynth.SynthComponentMoto.GetRPMRange"));
    struct Params_GetRPMRange {
        float OutMinRPM; // 0x0
        float OutMaxRPM; // 0x4
    }; // Size: 0x8
    Params_GetRPMRange params{};
    params.OutMinRPM = (float)OutMinRPM;
    params.OutMaxRPM = (float)OutMaxRPM;
    ProcessEvent(func, &params);
    OutMinRPM = params.OutMinRPM;
    OutMaxRPM = params.OutMaxRPM;
}
