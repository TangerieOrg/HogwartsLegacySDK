#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionInsideDistanceField.hpp"
UMaterialExpressionInsideDistanceField* UMaterialExpressionInsideDistanceField::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionInsideDistanceField");
    return (UMaterialExpressionInsideDistanceField*)res;
}
