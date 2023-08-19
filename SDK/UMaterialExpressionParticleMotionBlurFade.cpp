#include "UMaterialExpression.hpp"
#include "UMaterialExpressionParticleMotionBlurFade.hpp"
UMaterialExpressionParticleMotionBlurFade* UMaterialExpressionParticleMotionBlurFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionParticleMotionBlurFade");
    return (UMaterialExpressionParticleMotionBlurFade*)res;
}
