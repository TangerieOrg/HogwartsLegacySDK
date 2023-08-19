#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "FGuid.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {
public:
    FExpressionInput LayerUsed; // 0x40
    FExpressionInput LayerNotUsed; // 0x54
    FName ParameterName; // 0x68
    uint8_t PreviewUsed : 1; // 0x70
    uint8_t pad_bitfield_70_1 : 7;
    char pad_71[0x3];
    FGuid ExpressionGUID; // 0x74
    char pad_84[0x4];
    static UMaterialExpressionLandscapeLayerSwitch* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
