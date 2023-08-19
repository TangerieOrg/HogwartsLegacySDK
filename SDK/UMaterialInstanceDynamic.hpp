#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialInstance.hpp"
struct FMaterialParameterInfo;
class UTexture;
class UMaterialInterface;
#pragma pack(push, 1)
class UMaterialInstanceDynamic : public UMaterialInstance {
public:
    char pad_430[0x50];
    static UMaterialInstanceDynamic* StaticClass();
    void SetVectorParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, FLinearColor Value);
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetVectorArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<FLinearColor>& Values);
    void SetVectorArrayParameterValue(FName ParameterName, TArray<FLinearColor>& Values);
    void SetTextureParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, UTexture* Value);
    void SetTextureParameterValue(FName ParameterName, UTexture* Value);
    void SetTextureArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<UTexture*>& Values);
    void SetTextureArrayParameterValue(FName ParameterName, TArray<UTexture*>& Values);
    void SetScalarParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, float Value);
    void SetScalarParameterValue(FName ParameterName, float Value);
    void SetScalarArrayParameterValueByInfo(FMaterialParameterInfo& ParameterInfo, TArray<float>& Values);
    void SetScalarArrayParameterValue(FName ParameterName, TArray<float>& Values);
    void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha);
    FLinearColor K2_GetVectorParameterValueByInfo(FMaterialParameterInfo& ParameterInfo);
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    UTexture* K2_GetTextureParameterValueByInfo(FMaterialParameterInfo& ParameterInfo);
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValueByInfo(FMaterialParameterInfo& ParameterInfo);
    float K2_GetScalarParameterValue(FName ParameterName);
    void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);
    void CopyParameterOverrides(UMaterialInstance* MaterialInstance);
    void CopyInterpParameters(UMaterialInstance* Source);
}; // Size: 0x480
#pragma pack(pop)
