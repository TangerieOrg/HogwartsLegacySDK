#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UMaterialInstance.hpp"
class UPhysicalMaterialMask;
class UTexture;
#pragma pack(push, 1)
class UMaterialInstanceConstant : public UMaterialInstance {
public:
    UPhysicalMaterialMask* PhysMaterialMask; // 0x430
    static UMaterialInstanceConstant* StaticClass();
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValue(FName ParameterName);
}; // Size: 0x438
#pragma pack(pop)
