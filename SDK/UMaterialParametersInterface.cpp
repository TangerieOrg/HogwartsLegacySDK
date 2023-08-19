#include "FLinearColor.hpp"
#include "FMaterialSwapParametersSimple.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMaterialParametersInterface.hpp"
#include "UTexture.hpp"
UMaterialParametersInterface* UMaterialParametersInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialParametersInterface");
    return (UMaterialParametersInterface*)res;
}
void UMaterialParametersInterface::SetVectorParameter(FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName Name; // 0x0
        FVector Value; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UMaterialParametersInterface::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UMaterialParametersInterface::SetVector4Parameter(FName Name, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetVector4Parameter"));
    struct Params_SetVector4Parameter {
        FName Name; // 0x0
        char pad_8[0x8];
        FVector4 Value; // 0x10
    }; // Size: 0x20
    Params_SetVector4Parameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector4)Value;
    ProcessEvent(func, &params);
}
void UMaterialParametersInterface::SetSimpleParameters(FMaterialSwapParametersSimple& Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetSimpleParameters"));
    struct Params_SetSimpleParameters {
        FMaterialSwapParametersSimple Parameters; // 0x0
    }; // Size: 0x30
    Params_SetSimpleParameters params{};
    params.Parameters = (FMaterialSwapParametersSimple)Parameters;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
void UMaterialParametersInterface::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UMaterialParametersInterface::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialParametersInterface.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
