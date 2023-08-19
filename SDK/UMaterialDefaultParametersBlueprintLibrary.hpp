#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FMaterialDefaultParameters;
class UMaterialInterface;
struct FLinearColor;
class UTexture;
#pragma pack(push, 1)
class UMaterialDefaultParametersBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMaterialDefaultParametersBlueprintLibrary* StaticClass();
    static void GetMaterialDefaultVectorParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, FLinearColor& DefaultValue, bool& bSuccess);
    static void GetMaterialDefaultTextureParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, UTexture*& DefaultValue, bool& bSuccess);
    static void GetMaterialDefaultScalarParameter(FMaterialDefaultParameters& MaterialDefaultParameters, FName ParameterName, float& DefaultValue, bool& bSuccess);
    static void GetMaterialDefaultParameters(UMaterialInterface* Material, FMaterialDefaultParameters& MaterialDefaultParameters);
}; // Size: 0x28
#pragma pack(pop)
