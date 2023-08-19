#pragma once
#include <cstdint>
#include "FGrassInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
public:
    TArray<FGrassInput> GrassTypes; // 0x40
    static UMaterialExpressionLandscapeGrassOutput* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
