#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleRandom.hpp"
UMaterialExpressionParticleRandom* UMaterialExpressionParticleRandom::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleRandom");
    return (UMaterialExpressionParticleRandom*)res;
}
