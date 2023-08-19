#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USynthesisUtilitiesBlueprintFunctionLibrary.hpp"
USynthesisUtilitiesBlueprintFunctionLibrary* USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
    return (USynthesisUtilitiesBlueprintFunctionLibrary*)res;
}
float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency"));
    struct Params_GetLogFrequency {
        float InLinearValue; // 0x0
        float InDomainMin; // 0x4
        float InDomainMax; // 0x8
        float InRangeMin; // 0xc
        float InRangeMax; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetLogFrequency params{};
    params.InLinearValue = (float)InLinearValue;
    params.InDomainMin = (float)InDomainMin;
    params.InDomainMax = (float)InDomainMax;
    params.InRangeMin = (float)InRangeMin;
    params.InRangeMax = (float)InRangeMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency"));
    struct Params_GetLinearFrequency {
        float InLogFrequencyValue; // 0x0
        float InDomainMin; // 0x4
        float InDomainMax; // 0x8
        float InRangeMin; // 0xc
        float InRangeMax; // 0x10
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetLinearFrequency params{};
    params.InLogFrequencyValue = (float)InLogFrequencyValue;
    params.InDomainMin = (float)InDomainMin;
    params.InDomainMax = (float)InDomainMax;
    params.InRangeMin = (float)InRangeMin;
    params.InRangeMax = (float)InRangeMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
