#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleSubUVProperties.hpp"
UMaterialExpressionParticleSubUVProperties* UMaterialExpressionParticleSubUVProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleSubUVProperties");
    return (UMaterialExpressionParticleSubUVProperties*)res;
}
