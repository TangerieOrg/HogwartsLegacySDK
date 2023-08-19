#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleRadius.hpp"
UMaterialExpressionParticleRadius* UMaterialExpressionParticleRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleRadius");
    return (UMaterialExpressionParticleRadius*)res;
}
