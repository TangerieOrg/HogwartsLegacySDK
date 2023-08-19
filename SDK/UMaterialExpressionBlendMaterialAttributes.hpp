#pragma once
#include <cstdint>
#include "EMaterialAttributeBlend\Type.hpp"
#include "FExpressionInput.hpp"
#include "FMaterialAttributesInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression {
public:
    FMaterialAttributesInput A; // 0x40
    FMaterialAttributesInput B; // 0x60
    FExpressionInput Alpha; // 0x80
    EMaterialAttributeBlend::Type PixelAttributeBlendType; // 0x94
    EMaterialAttributeBlend::Type VertexAttributeBlendType; // 0x95
    char pad_96[0x2];
    static UMaterialExpressionBlendMaterialAttributes* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
