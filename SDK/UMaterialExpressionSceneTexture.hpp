#pragma once
#include <cstdint>
#include "ESceneTextureId.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSceneTexture : public UMaterialExpression {
public:
    FExpressionInput Coordinates; // 0x40
    ESceneTextureId SceneTextureId; // 0x54
    bool bFiltered; // 0x55
    char pad_56[0x2];
    static UMaterialExpressionSceneTexture* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
