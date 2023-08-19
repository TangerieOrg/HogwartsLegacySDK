#pragma once
#include <cstdint>
#include "EMaterialShadingModel.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionShadingModel : public UMaterialExpression {
public:
    EMaterialShadingModel ShadingModel; // 0x40
    char pad_41[0x7];
    static UMaterialExpressionShadingModel* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
