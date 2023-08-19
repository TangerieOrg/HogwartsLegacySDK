#pragma once
#include <cstdint>
#include "FPhysicalMaterialInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput {
public:
    TArray<FPhysicalMaterialInput> Inputs; // 0x40
    static UMaterialExpressionLandscapePhysicalMaterialOutput* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
