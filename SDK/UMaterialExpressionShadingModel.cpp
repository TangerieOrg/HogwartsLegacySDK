#include "EMaterialShadingModel.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionShadingModel.hpp"
UMaterialExpressionShadingModel* UMaterialExpressionShadingModel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionShadingModel");
    return (UMaterialExpressionShadingModel*)res;
}
