#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#pragma pack(push, 1)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression {
public:
    FExpressionInput Density; // 0x40
    float ConstantDensity; // 0x54
    static UMaterialExpressionSphericalParticleOpacity* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
