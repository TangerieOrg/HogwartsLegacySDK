#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleColor.hpp"
UMaterialExpressionParticleColor* UMaterialExpressionParticleColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleColor");
    return (UMaterialExpressionParticleColor*)res;
}
