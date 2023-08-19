#pragma once
#include <cstdint>
#include "EMIDCreationFlags.hpp"
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UMaterialInstanceDynamic;
class UMaterialParameterCollection;
class UMaterialInterface;
#pragma pack(push, 1)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetMaterialLibrary* StaticClass();
    static void SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor& ParameterValue);
    static void SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);
    static FLinearColor GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    static float GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    static UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags);
}; // Size: 0x28
#pragma pack(pop)
