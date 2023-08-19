#include "FEmissiveAdaptationFinalState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UEmissiveAdaptationBlueprintLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UEmissiveAdaptationBlueprintLibrary* UEmissiveAdaptationBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary");
    return (UEmissiveAdaptationBlueprintLibrary*)res;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationState(UObject* WorldContextObject, FEmissiveAdaptationFinalState& State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationState"));
    struct Params_GetEmissiveAdaptationState {
        UObject* WorldContextObject; // 0x0
        FEmissiveAdaptationFinalState State; // 0x8
    }; // Size: 0x90
    Params_GetEmissiveAdaptationState params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.State = (FEmissiveAdaptationFinalState)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    State = params.State;
}
void UEmissiveAdaptationBlueprintLibrary::UnrealToEV100(float UnrealExposure, float& EV100Exposure) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.UnrealToEV100"));
    struct Params_UnrealToEV100 {
        float UnrealExposure; // 0x0
        float EV100Exposure; // 0x4
    }; // Size: 0x8
    Params_UnrealToEV100 params{};
    params.UnrealExposure = (float)UnrealExposure;
    params.EV100Exposure = (float)EV100Exposure;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EV100Exposure = params.EV100Exposure;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationFinalMultiplierClamped(UObject* WorldContextObject, float& FinalMultiplierClamped) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationFinalMultiplierClamped"));
    struct Params_GetEmissiveAdaptationFinalMultiplierClamped {
        UObject* WorldContextObject; // 0x0
        float FinalMultiplierClamped; // 0x8
    }; // Size: 0xc
    Params_GetEmissiveAdaptationFinalMultiplierClamped params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FinalMultiplierClamped = (float)FinalMultiplierClamped;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FinalMultiplierClamped = params.FinalMultiplierClamped;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationOutdoorsDayTime(UObject* WorldContextObject, float& OutdoorsDayTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationOutdoorsDayTime"));
    struct Params_GetEmissiveAdaptationOutdoorsDayTime {
        UObject* WorldContextObject; // 0x0
        float OutdoorsDayTime; // 0x8
    }; // Size: 0xc
    Params_GetEmissiveAdaptationOutdoorsDayTime params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OutdoorsDayTime = (float)OutdoorsDayTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutdoorsDayTime = params.OutdoorsDayTime;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationMinMaxExposureEV100(UObject* WorldContextObject, float& MinExposureEV100, float& MaxExposureEV100, float& BiasPow2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationMinMaxExposureEV100"));
    struct Params_GetEmissiveAdaptationMinMaxExposureEV100 {
        UObject* WorldContextObject; // 0x0
        float MinExposureEV100; // 0x8
        float MaxExposureEV100; // 0xc
        float BiasPow2; // 0x10
    }; // Size: 0x14
    Params_GetEmissiveAdaptationMinMaxExposureEV100 params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MinExposureEV100 = (float)MinExposureEV100;
    params.MaxExposureEV100 = (float)MaxExposureEV100;
    params.BiasPow2 = (float)BiasPow2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MinExposureEV100 = params.MinExposureEV100;
    MaxExposureEV100 = params.MaxExposureEV100;
    BiasPow2 = params.BiasPow2;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationMinMaxExposure(UObject* WorldContextObject, float& MinExposure, float& MaxExposure, float& Bias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationMinMaxExposure"));
    struct Params_GetEmissiveAdaptationMinMaxExposure {
        UObject* WorldContextObject; // 0x0
        float MinExposure; // 0x8
        float MaxExposure; // 0xc
        float Bias; // 0x10
    }; // Size: 0x14
    Params_GetEmissiveAdaptationMinMaxExposure params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.MinExposure = (float)MinExposure;
    params.MaxExposure = (float)MaxExposure;
    params.Bias = (float)Bias;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Bias = params.Bias;
    MinExposure = params.MinExposure;
    MaxExposure = params.MaxExposure;
}
void UEmissiveAdaptationBlueprintLibrary::GetEmissiveAdaptationFinalMultiplier(UObject* WorldContextObject, float& FinalMultiplier, float& FactorMin, float& FactorMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.GetEmissiveAdaptationFinalMultiplier"));
    struct Params_GetEmissiveAdaptationFinalMultiplier {
        UObject* WorldContextObject; // 0x0
        float FinalMultiplier; // 0x8
        float FactorMin; // 0xc
        float FactorMax; // 0x10
    }; // Size: 0x14
    Params_GetEmissiveAdaptationFinalMultiplier params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FinalMultiplier = (float)FinalMultiplier;
    params.FactorMin = (float)FactorMin;
    params.FactorMax = (float)FactorMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FinalMultiplier = params.FinalMultiplier;
    FactorMax = params.FactorMax;
    FactorMin = params.FactorMin;
}
void UEmissiveAdaptationBlueprintLibrary::EV100ToUnreal(float EV100Exposure, float& UnrealExposure) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.EV100ToUnreal"));
    struct Params_EV100ToUnreal {
        float EV100Exposure; // 0x0
        float UnrealExposure; // 0x4
    }; // Size: 0x8
    Params_EV100ToUnreal params{};
    params.EV100Exposure = (float)EV100Exposure;
    params.UnrealExposure = (float)UnrealExposure;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    UnrealExposure = params.UnrealExposure;
}
void UEmissiveAdaptationBlueprintLibrary::BiasFactorToEV100(float Factor, float& EV00Bias) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.BiasFactorToEV100"));
    struct Params_BiasFactorToEV100 {
        float Factor; // 0x0
        float EV00Bias; // 0x4
    }; // Size: 0x8
    Params_BiasFactorToEV100 params{};
    params.Factor = (float)Factor;
    params.EV00Bias = (float)EV00Bias;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EV00Bias = params.EV00Bias;
}
void UEmissiveAdaptationBlueprintLibrary::BiasFactor(float EV00Bias, float& Factor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.EmissiveAdaptationBlueprintLibrary.BiasFactor"));
    struct Params_BiasFactor {
        float EV00Bias; // 0x0
        float Factor; // 0x4
    }; // Size: 0x8
    Params_BiasFactor params{};
    params.EV00Bias = (float)EV00Bias;
    params.Factor = (float)Factor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Factor = params.Factor;
}
