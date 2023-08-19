#include "EDisplaceMeshToolDisplaceType.hpp"
#include "UDisplaceMeshCommonProperties.hpp"
#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDisplaceMeshCommonProperties* UDisplaceMeshCommonProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DisplaceMeshCommonProperties");
    return (UDisplaceMeshCommonProperties*)res;
}
TArray<FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc"));
    struct Params_GetWeightMapsFunc {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetWeightMapsFunc params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
