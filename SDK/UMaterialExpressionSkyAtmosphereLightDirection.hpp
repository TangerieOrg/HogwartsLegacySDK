#pragma once
#include <cstdint>
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression {
public:
    int32_t LightIndex; // 0x40
    char pad_44[0x4];
    static UMaterialExpressionSkyAtmosphereLightDirection* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
