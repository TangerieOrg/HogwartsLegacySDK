#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector4.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UNiagaraDataInterfaceArrayFunctionLibrary* StaticClass();
    static void SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit);
    static void SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit);
    static void SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);
    static void SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit);
    static void SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);
    static void SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);
    static void SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit);
    static void SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);
    static void SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit);
    static void SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);
    static void SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit);
    static void SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);
    static void SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit);
    static void SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);
    static void SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit);
    static void SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);
    static FVector GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static FVector4 GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<FVector4> GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static FVector2D GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<FVector2D> GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static TArray<FVector> GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static FQuat GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<FQuat> GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static int32_t GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<int32_t> GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static float GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<float> GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static FLinearColor GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<FLinearColor> GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName);
    static bool GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);
    static TArray<bool> GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName);
}; // Size: 0x28
#pragma pack(pop)
