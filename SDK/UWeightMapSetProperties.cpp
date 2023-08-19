#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UWeightMapSetProperties.hpp"
UWeightMapSetProperties* UWeightMapSetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.WeightMapSetProperties");
    return (UWeightMapSetProperties*)res;
}
TArray<FString> UWeightMapSetProperties::GetWeightMapsFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc"));
    struct Params_GetWeightMapsFunc {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWeightMapsFunc params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
