#include "FLinearColor.hpp"
#include "FMaterialDefaultParameters.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMaterialDefaultParametersBlueprintLibrary.hpp"
#include "UMaterialInterface.hpp"
#include "UTexture.hpp"
void UMaterialDefaultParametersBlueprintLibrary::GetMaterialDefaultScalarParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, float& DefaultValue, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MaterialDefaultParametersBlueprintLibrary.GetMaterialDefaultScalarParameter"));
    struct Params_GetMaterialDefaultScalarParameter {
        FMaterialDefaultParameters MaterialDefaultParameters; // 0x0
        FName ParameterName; // 0xf0
        float DefaultValue; // 0xf8
        bool bSuccess; // 0xfc
    }; // Size: 0xfd
    Params_GetMaterialDefaultScalarParameter params{};
    params.MaterialDefaultParameters = (FMaterialDefaultParameters)MaterialDefaultParameters;
    params.ParameterName = (FName)ParameterName;
    params.DefaultValue = (float)DefaultValue;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DefaultValue = params.DefaultValue;
    MaterialDefaultParameters = params.MaterialDefaultParameters;
    bSuccess = params.bSuccess;
}
UMaterialDefaultParametersBlueprintLibrary* UMaterialDefaultParametersBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialDefaultParametersBlueprintLibrary");
    return (UMaterialDefaultParametersBlueprintLibrary*)res;
}
void UMaterialDefaultParametersBlueprintLibrary::GetMaterialDefaultVectorParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, FLinearColor& DefaultValue, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MaterialDefaultParametersBlueprintLibrary.GetMaterialDefaultVectorParameter"));
    struct Params_GetMaterialDefaultVectorParameter {
        FMaterialDefaultParameters MaterialDefaultParameters; // 0x0
        FName ParameterName; // 0xf0
        FLinearColor DefaultValue; // 0xf8
        bool bSuccess; // 0x108
    }; // Size: 0x109
    Params_GetMaterialDefaultVectorParameter params{};
    params.MaterialDefaultParameters = (FMaterialDefaultParameters)MaterialDefaultParameters;
    params.ParameterName = (FName)ParameterName;
    params.DefaultValue = (FLinearColor)DefaultValue;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialDefaultParameters = params.MaterialDefaultParameters;
    DefaultValue = params.DefaultValue;
    bSuccess = params.bSuccess;
}
void UMaterialDefaultParametersBlueprintLibrary::GetMaterialDefaultTextureParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, UTexture*& DefaultValue, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MaterialDefaultParametersBlueprintLibrary.GetMaterialDefaultTextureParameter"));
    struct Params_GetMaterialDefaultTextureParameter {
        FMaterialDefaultParameters MaterialDefaultParameters; // 0x0
        FName ParameterName; // 0xf0
        UTexture* DefaultValue; // 0xf8
        bool bSuccess; // 0x100
    }; // Size: 0x101
    Params_GetMaterialDefaultTextureParameter params{};
    params.MaterialDefaultParameters = (FMaterialDefaultParameters)MaterialDefaultParameters;
    params.ParameterName = (FName)ParameterName;
    params.DefaultValue = (UTexture*)DefaultValue;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialDefaultParameters = params.MaterialDefaultParameters;
    DefaultValue = params.DefaultValue;
    bSuccess = params.bSuccess;
}
void UMaterialDefaultParametersBlueprintLibrary::GetMaterialDefaultParameters(UMaterialInterface* Material, FMaterialDefaultParameters& MaterialDefaultParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MaterialDefaultParametersBlueprintLibrary.GetMaterialDefaultParameters"));
    struct Params_GetMaterialDefaultParameters {
        UMaterialInterface* Material; // 0x0
        FMaterialDefaultParameters MaterialDefaultParameters; // 0x8
    }; // Size: 0xf8
    Params_GetMaterialDefaultParameters params{};
    params.Material = (UMaterialInterface*)Material;
    params.MaterialDefaultParameters = (FMaterialDefaultParameters)MaterialDefaultParameters;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialDefaultParameters = params.MaterialDefaultParameters;
}
