#include "FLinearColor.hpp"
#include "FMaterialParameterInfo.hpp"
#include "UFunction.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UTexture.hpp"
void UMaterialInstanceDynamic::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetVectorParameterValue"));
    struct Params_SetVectorParameterValue {
        FName ParameterName; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SetVectorParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
UMaterialInstanceDynamic* UMaterialInstanceDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialInstanceDynamic");
    return (UMaterialInstanceDynamic*)res;
}
void UMaterialInstanceDynamic::SetVectorParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetVectorParameterValueByInfo"));
    struct Params_SetVectorParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        FLinearColor Value; // 0x10
    }; // Size: 0x20
    Params_SetVectorParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
}
void UMaterialInstanceDynamic::SetVectorArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<FLinearColor>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetVectorArrayParameterValueByInfo"));
    struct Params_SetVectorArrayParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        TArray<FLinearColor> Values; // 0x10
    }; // Size: 0x20
    Params_SetVectorArrayParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Values = (TArray<FLinearColor>)Values;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    Values = params.Values;
}
FLinearColor UMaterialInstanceDynamic::K2_GetVectorParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue"));
    struct Params_K2_GetVectorParameterValue {
        FName ParameterName; // 0x0
        FLinearColor ReturnValue; // 0x8
    }; // Size: 0x18
    Params_K2_GetVectorParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UMaterialInstanceDynamic::SetVectorArrayParameterValue(FName ParameterName, TArray<FLinearColor>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetVectorArrayParameterValue"));
    struct Params_SetVectorArrayParameterValue {
        FName ParameterName; // 0x0
        TArray<FLinearColor> Values; // 0x8
    }; // Size: 0x18
    Params_SetVectorArrayParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Values = (TArray<FLinearColor>)Values;
    ProcessEvent(func, &params);
    Values = params.Values;
}
void UMaterialInstanceDynamic::CopyInterpParameters(UMaterialInstance* Source) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.CopyInterpParameters"));
    struct Params_CopyInterpParameters {
        UMaterialInstance* Source; // 0x0
    }; // Size: 0x8
    Params_CopyInterpParameters params{};
    params.Source = (UMaterialInstance*)Source;
    ProcessEvent(func, &params);
}
void UMaterialInstanceDynamic::SetTextureParameterValue(FName ParameterName, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetTextureParameterValue"));
    struct Params_SetTextureParameterValue {
        FName ParameterName; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SetTextureParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UMaterialInstanceDynamic::SetTextureParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetTextureParameterValueByInfo"));
    struct Params_SetTextureParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        UTexture* Value; // 0x10
    }; // Size: 0x18
    Params_SetTextureParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
}
void UMaterialInstanceDynamic::SetTextureArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<UTexture*>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetTextureArrayParameterValueByInfo"));
    struct Params_SetTextureArrayParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        TArray<UTexture*> Values; // 0x10
    }; // Size: 0x20
    Params_SetTextureArrayParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Values = (TArray<UTexture*>)Values;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    Values = params.Values;
}
void UMaterialInstanceDynamic::SetTextureArrayParameterValue(FName ParameterName, TArray<UTexture*>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetTextureArrayParameterValue"));
    struct Params_SetTextureArrayParameterValue {
        FName ParameterName; // 0x0
        TArray<UTexture*> Values; // 0x8
    }; // Size: 0x18
    Params_SetTextureArrayParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Values = (TArray<UTexture*>)Values;
    ProcessEvent(func, &params);
    Values = params.Values;
}
void UMaterialInstanceDynamic::SetScalarParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetScalarParameterValueByInfo"));
    struct Params_SetScalarParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        float Value; // 0x10
    }; // Size: 0x14
    Params_SetScalarParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
}
void UMaterialInstanceDynamic::SetScalarParameterValue(FName ParameterName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetScalarParameterValue"));
    struct Params_SetScalarParameterValue {
        FName ParameterName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetScalarParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UMaterialInstanceDynamic::SetScalarArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<float>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetScalarArrayParameterValueByInfo"));
    struct Params_SetScalarArrayParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        TArray<float> Values; // 0x10
    }; // Size: 0x20
    Params_SetScalarArrayParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    params.Values = (TArray<float>)Values;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    Values = params.Values;
}
void UMaterialInstanceDynamic::SetScalarArrayParameterValue(FName ParameterName, TArray<float>& Values) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.SetScalarArrayParameterValue"));
    struct Params_SetScalarArrayParameterValue {
        FName ParameterName; // 0x0
        TArray<float> Values; // 0x8
    }; // Size: 0x18
    Params_SetScalarArrayParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    params.Values = (TArray<float>)Values;
    ProcessEvent(func, &params);
    Values = params.Values;
}
void UMaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams"));
    struct Params_K2_InterpolateMaterialInstanceParams {
        UMaterialInstance* SourceA; // 0x0
        UMaterialInstance* SourceB; // 0x8
        float Alpha; // 0x10
    }; // Size: 0x14
    Params_K2_InterpolateMaterialInstanceParams params{};
    params.SourceA = (UMaterialInstance*)SourceA;
    params.SourceB = (UMaterialInstance*)SourceB;
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
FLinearColor UMaterialInstanceDynamic::K2_GetVectorParameterValueByInfo(FMaterialParameterInfo& ParameterInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetVectorParameterValueByInfo"));
    struct Params_K2_GetVectorParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_K2_GetVectorParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    return (FLinearColor)params.ReturnValue;
}
UTexture* UMaterialInstanceDynamic::K2_GetTextureParameterValueByInfo(FMaterialParameterInfo& ParameterInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetTextureParameterValueByInfo"));
    struct Params_K2_GetTextureParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        UTexture* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_K2_GetTextureParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    return (UTexture*)params.ReturnValue;
}
UTexture* UMaterialInstanceDynamic::K2_GetTextureParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue"));
    struct Params_K2_GetTextureParameterValue {
        FName ParameterName; // 0x0
        UTexture* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_K2_GetTextureParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
float UMaterialInstanceDynamic::K2_GetScalarParameterValueByInfo(FMaterialParameterInfo& ParameterInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetScalarParameterValueByInfo"));
    struct Params_K2_GetScalarParameterValueByInfo {
        FMaterialParameterInfo ParameterInfo; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_K2_GetScalarParameterValueByInfo params{};
    params.ParameterInfo = (FMaterialParameterInfo)ParameterInfo;
    ProcessEvent(func, &params);
    ParameterInfo = params.ParameterInfo;
    return (float)params.ReturnValue;
}
float UMaterialInstanceDynamic::K2_GetScalarParameterValue(FName ParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue"));
    struct Params_K2_GetScalarParameterValue {
        FName ParameterName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_K2_GetScalarParameterValue params{};
    params.ParameterName = (FName)ParameterName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters"));
    struct Params_K2_CopyMaterialInstanceParameters {
        UMaterialInterface* Source; // 0x0
        bool bQuickParametersOnly; // 0x8
    }; // Size: 0x9
    Params_K2_CopyMaterialInstanceParameters params{};
    params.Source = (UMaterialInterface*)Source;
    params.bQuickParametersOnly = (bool)bQuickParametersOnly;
    ProcessEvent(func, &params);
}
void UMaterialInstanceDynamic::CopyParameterOverrides(UMaterialInstance* MaterialInstance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInstanceDynamic.CopyParameterOverrides"));
    struct Params_CopyParameterOverrides {
        UMaterialInstance* MaterialInstance; // 0x0
    }; // Size: 0x8
    Params_CopyParameterOverrides params{};
    params.MaterialInstance = (UMaterialInstance*)MaterialInstance;
    ProcessEvent(func, &params);
}
