#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticlePositionWS.hpp"
UMaterialExpressionParticlePositionWS* UMaterialExpressionParticlePositionWS::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticlePositionWS");
    return (UMaterialExpressionParticlePositionWS*)res;
}
