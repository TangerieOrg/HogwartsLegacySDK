#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FNiagaraParameterStore.hpp"
#include "FNiagaraVariable.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UObject.hpp"
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UNiagaraParameterCollectionInstance : public UObject {
public:
    UNiagaraParameterCollection* Collection; // 0x28
    TArray<FNiagaraVariable> OverridenParameters; // 0x30
    FNiagaraParameterStore ParameterStorage; // 0x40
    char pad_b8[0x28];
    static UNiagaraParameterCollectionInstance* StaticClass();
    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32_t InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32_t GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
}; // Size: 0xe0
#pragma pack(pop)
