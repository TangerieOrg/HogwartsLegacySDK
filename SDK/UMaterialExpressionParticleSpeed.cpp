#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleSpeed.hpp"
UMaterialExpressionParticleSpeed* UMaterialExpressionParticleSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleSpeed");
    return (UMaterialExpressionParticleSpeed*)res;
}
