#include "EMaterialSwapPriority.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UMaterialSwap.hpp"
#include "UObject.hpp"
#include "UTexture.hpp"
void UMaterialSwap::SetColorParameter(FName Name, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwap.SetColorParameter"));
    struct Params_SetColorParameter {
        FName Name; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetColorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
UMaterialSwap* UMaterialSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwap");
    return (UMaterialSwap*)res;
}
void UMaterialSwap::SetVectorParameter(FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwap.SetVectorParameter"));
    struct Params_SetVectorParameter {
        FName Name; // 0x0
        FVector Value; // 0x8
    }; // Size: 0x14
    Params_SetVectorParameter params{};
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwap::SetVector4Parameter(FName Name, FVector4 Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwap.SetVector4Parameter"));
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
void UMaterialSwap::SetTextureParameter(FName Name, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwap.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName Name; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameter params{};
    params.Name = (FName)Name;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UMaterialSwap::SetScalarParameter(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialSwap.SetScalarParameter"));
    struct Params_SetScalarParameter {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameter params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
