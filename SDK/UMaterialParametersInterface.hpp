#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UInterface.hpp"
class UTexture;
struct FMaterialSwapParametersSimple;
#pragma pack(push, 1)
class UMaterialParametersInterface : public UInterface {
public:
    static UMaterialParametersInterface* StaticClass();
    void SetVectorParameter(FName Name, FVector Value);
    void SetVector4Parameter(FName Name, FVector4 Value);
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetSimpleParameters(FMaterialSwapParametersSimple& Parameters);
    void SetScalarParameter(FName Name, float Value);
    void SetColorParameter(FName Name, FLinearColor Value);
}; // Size: 0x28
#pragma pack(pop)
