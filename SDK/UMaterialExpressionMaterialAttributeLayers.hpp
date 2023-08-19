#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialAttributesInput.hpp"
#include "FMaterialLayersFunctions.hpp"
#include "UMaterialExpression.hpp"
class UMaterialExpressionMaterialFunctionCall;
#pragma pack(push, 1)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression {
public:
    FName ParameterName; // 0x40
    FGuid ExpressionGUID; // 0x48
    FMaterialAttributesInput Input; // 0x58
    FMaterialLayersFunctions DefaultLayers; // 0x78
    TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb8
    int32_t NumActiveLayerCallers; // 0xc8
    char pad_cc[0x4];
    TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xd0
    int32_t NumActiveBlendCallers; // 0xe0
    bool bIsLayerGraphBuilt; // 0xe4
    char pad_e5[0xb];
    static UMaterialExpressionMaterialAttributeLayers* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
