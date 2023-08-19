#include "EVectorNoiseFunction.hpp"
#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionVectorNoise.hpp"
UMaterialExpressionVectorNoise* UMaterialExpressionVectorNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionVectorNoise");
    return (UMaterialExpressionVectorNoise*)res;
}
