#include "EBakeMapType.hpp"
#include "EBakeTextureResolution.hpp"
#include "UBakeMeshAttributeMapsToolProperties.hpp"
#include "UFunction.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UTexture2D.hpp"
UBakeMeshAttributeMapsToolProperties* UBakeMeshAttributeMapsToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties");
    return (UBakeMeshAttributeMapsToolProperties*)res;
}
TArray<FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc"));
    struct Params_GetUVLayerNamesFunc {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUVLayerNamesFunc params{};
    ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
