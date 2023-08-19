#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression {
public:
    FExpressionInput BaseColor; // 0x40
    FExpressionInput Metallic; // 0x54
    FExpressionInput Specular; // 0x68
    FExpressionInput Roughness; // 0x7c
    FExpressionInput Anisotropy; // 0x90
    FExpressionInput EmissiveColor; // 0xa4
    FExpressionInput Opacity; // 0xb8
    FExpressionInput OpacityMask; // 0xcc
    FExpressionInput Normal; // 0xe0
    FExpressionInput Tangent; // 0xf4
    FExpressionInput WorldPositionOffset; // 0x108
    FExpressionInput WorldDisplacement; // 0x11c
    FExpressionInput TessellationMultiplier; // 0x130
    FExpressionInput SubsurfaceColor; // 0x144
    FExpressionInput ClearCoat; // 0x158
    FExpressionInput ClearCoatRoughness; // 0x16c
    FExpressionInput AmbientOcclusion; // 0x180
    FExpressionInput Refraction; // 0x194
    FExpressionInput CustomizedUVs[8]; // 0x1a8
    FExpressionInput PixelDepthOffset; // 0x248
    FExpressionInput ShadingModel; // 0x25c
    FExpressionInput Opacity1; // 0x270
    FExpressionInput Opacity2; // 0x284
    FExpressionInput Opacity3; // 0x298
    FExpressionInput wMotionDither; // 0x2ac
    FExpressionInput wMotion; // 0x2c0
    char pad_2d4[0x4];
    static UMaterialExpressionMakeMaterialAttributes* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
