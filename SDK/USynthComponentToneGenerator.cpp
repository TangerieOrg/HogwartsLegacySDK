#include "UFunction.hpp"
#include "USynthComponent.hpp"
#include "USynthComponentToneGenerator.hpp"
USynthComponentToneGenerator* USynthComponentToneGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SynthComponentToneGenerator");
    return (USynthComponentToneGenerator*)res;
}
void USynthComponentToneGenerator::SetVolume(float InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume"));
    struct Params_SetVolume {
        float InVolume; // 0x0
    }; // Size: 0x4
    Params_SetVolume params{};
    params.InVolume = (float)InVolume;
    ProcessEvent(func, &params);
}
void USynthComponentToneGenerator::SetFrequency(float InFrequency) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency"));
    struct Params_SetFrequency {
        float InFrequency; // 0x0
    }; // Size: 0x4
    Params_SetFrequency params{};
    params.InFrequency = (float)InFrequency;
    ProcessEvent(func, &params);
}
