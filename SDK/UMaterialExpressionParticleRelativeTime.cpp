#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleRelativeTime.hpp"
UMaterialExpressionParticleRelativeTime* UMaterialExpressionParticleRelativeTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleRelativeTime");
    return (UMaterialExpressionParticleRelativeTime*)res;
}
