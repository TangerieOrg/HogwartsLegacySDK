#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceConstant.hpp"
#include "UPhysicalMaterialMask.hpp"
#include "UTexture.hpp"
UMaterialInstanceConstant* UMaterialInstanceConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialInstanceConstant");
    return (UMaterialInstanceConstant*)res;
}
FLinearColor UMaterialInstanceConstant::K2_GetVectorParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceConstant.K2_GetVectorParameterValue"));
    struct Params_K2_GetVectorParameterValue {
        FName ParameterName; // 0x0
        FLinearColor ReturnValue; // 0x8
    }; // Size: 0x18
    Params_K2_GetVectorParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
UTexture* UMaterialInstanceConstant::K2_GetTextureParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceConstant.K2_GetTextureParameterValue"));
    struct Params_K2_GetTextureParameterValue {
        FName ParameterName; // 0x0
        UTexture* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_K2_GetTextureParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
float UMaterialInstanceConstant::K2_GetScalarParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceConstant.K2_GetScalarParameterValue"));
    struct Params_K2_GetScalarParameterValue {
        FName ParameterName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_K2_GetScalarParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
