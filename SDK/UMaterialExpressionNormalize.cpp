#include "FExpressionInput.hpp"
#include "UMaterialExpression.hpp"
#include "UMaterialExpressionNormalize.hpp"
UMaterialExpressionNormalize* UMaterialExpressionNormalize::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialExpressionNormalize");
    return (UMaterialExpressionNormalize*)res;
}
