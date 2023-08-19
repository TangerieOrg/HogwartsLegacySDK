#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleSize.hpp"
UMaterialExpressionParticleSize* UMaterialExpressionParticleSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleSize");
    return (UMaterialExpressionParticleSize*)res;
}
