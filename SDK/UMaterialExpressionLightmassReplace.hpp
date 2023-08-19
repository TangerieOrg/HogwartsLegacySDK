#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionLightmassReplace : public UMaterialExpression {
public:
    FExpressionInput RealTime; // 0x40
    FExpressionInput Lightmass; // 0x54
    static UMaterialExpressionLightmassReplace* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
