#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionDeriveNormalZ.hpp"
UMaterialExpressionDeriveNormalZ* UMaterialExpressionDeriveNormalZ::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionDeriveNormalZ");
    return (UMaterialExpressionDeriveNormalZ*)res;
}
