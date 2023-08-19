#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleDirection.hpp"
UMaterialExpressionParticleDirection* UMaterialExpressionParticleDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleDirection");
    return (UMaterialExpressionParticleDirection*)res;
}
