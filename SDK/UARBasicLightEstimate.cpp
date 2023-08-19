#include "FLinearColor.hpp"
#include "UARBasicLightEstimate.hpp"
#include "UARLightEstimate.hpp"
#include "UFunction.hpp"
UARBasicLightEstimate* UARBasicLightEstimate::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARBasicLightEstimate");
    return (UARBasicLightEstimate*)res;
}
float UARBasicLightEstimate::GetAmbientIntensityLumens() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens"));
    struct Params_GetAmbientIntensityLumens {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAmbientIntensityLumens params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FLinearColor UARBasicLightEstimate::GetAmbientColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor"));
    struct Params_GetAmbientColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAmbientColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin"));
    struct Params_GetAmbientColorTemperatureKelvin {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAmbientColorTemperatureKelvin params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
