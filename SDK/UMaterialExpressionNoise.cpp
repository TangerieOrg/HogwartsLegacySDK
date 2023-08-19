#include "ENoiseFunction.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionNoise.hpp"
UMaterialExpressionNoise* UMaterialExpressionNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionNoise");
    return (UMaterialExpressionNoise*)res;
}
